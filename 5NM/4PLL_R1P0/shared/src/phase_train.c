/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phase.c
* \purpose Align90 phase control
* \History
*	02/25/2015 Heejeong Ryu		Initial 
*/

#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg CSEG
#endif

#define EDGE2DATA_PD				reg_ANA_RX_ALIGN90_PD_OUT_RD_LANE 
#define ALIGN90_REF					reg_ALIGN90_REF_LANE_5_0
#define DAC 						reg_ALIGN90_DAC_LANE_5_0
#define DM							reg_ALIGN90_DUMMY_CLK_LANE
#define GM							reg_ALIGN90_GM_LANE_2_0
#define SYN_CLK						reg_ALIGN90_SYN_CLK_LANE

//uint8_t step;
//#define step 	reg_MCU_DEBUG1_LANE_7_0

static void cdr_phase_opt_init(void);
static void cdr_phase_maxf0p(void);
static void cdr_phase_midpoint(void);
static void cdr_phase_opt_final_processing(void);
static void calculatef0p(void);

void phase_control_func(void) BANKING_CTRL
{
	drv_PH_OS_DAT = train.phase_offset_data;
	drv_PH_OS_ESM = train.phase_offset_esm;
}

/****************************************
 * CDR Phase Optimization
 * Inputs: 
 *      train.level
 *      train.eo
 *      train.f0
 *      train.f0a
 * Outputs:
 *      train_phase_os
*****************************************/
void cdr_phase_opt(void) BANKING_CTRL
{
 	#if (_DBG_PHASE_TRAIN)
	DBG_PS("\r\n++(cdr_phase_opt) ");
	#endif
	
	//if (train.level >=5 || train.eo > tag_CDR_EO_BYPASS_THRES) //tag_CDR_EO_BYPASS_THRES=63
    //    return; 

	train.phase_offset_data = opt.phase_offset_data;

	cdr_phase_opt_init();

#if (tag_CDR_MAXF0P_EN)  //1
	cdr_phase_maxf0p(); 
#endif	

	if (tag_CDR_MIDPOINT_EN)  //1
	cdr_phase_midpoint(); 

    cdr_phase_opt_final_processing();
	

}

/****************************************
 * init
 * Inputs: 
 * Outputs:
 *      cdr status setting
*****************************************/
static void cdr_phase_opt_init(void)
{
	// initialize some parameters
	calculatef0p();
	cdr.num_count = 0;
	cdr.direction = 0; // go left in the beginning
	cdr.become_worse = 0;
	cdr.ini_phase_offset = train.phase_offset_data; 

	//always start from scratch
	cdr.ini_f0p = 0; //cdr.train_f0p;
	cdr.ini_level = 0; //train.level;
	cdr.opt_phase_offset = cdr.ini_phase_offset;
	cdr.opt_f0p = 0; //cdr.train_f0p;
	cdr.opt_level = 0; //train.level;
	//skip_cdr = 0;
	
	#if (_DBG_PHASE_TRAIN)
	DBG_Printf(" ini_phase_offset=%d", cdr.ini_phase_offset);
	//DBG_Printf(" cdr.ini_level=%d cdr.ini_f0p=%d", cdr.ini_level,cdr.ini_f0p );
	#endif
}


/****************************************
 * maxf0p
 * Inputs:     
 * Outputs:
     cdr.direction: 1, -1
	 opt_f0p
	 opt_level
	 opt_phase_offset
*****************************************/
static void cdr_phase_maxf0p(void)
{
	int8_t current_fn1 = 63;
	uint8_t phase_updated = 0;
	//int8_t train_delta; 
	#if (_DBG_PHASE_TRAIN)
    DBG_PS("\r\n>>>(cdr_f0p)");
	#endif

	while (1)
	{
		#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
		//DBG_Printf("\r\n %d: phase=%d cal_os_phase=%d", cdr.num_count, train.phase_offset_data, cal_phase);
		#endif
		if (
            (cdr.direction == 0) && //-1
            ((cdr.num_count >= tag_CDR_STEP_NUM) || //8
             ((train.phase_offset_data) <= cdr.min_phase_os) || //??
             (cdr.become_worse==1))
           )
		{	// go right
			cdr.direction = 1;
			cdr.num_count = 0;
			cdr.become_worse = 0;
			train.phase_offset_data = cdr.ini_phase_offset;
			phase_control_func();
#ifdef _MOVE_PHASE_CDS
		dfe_adaptation();
#endif
		}

		if ((  ( cdr.num_count >= tag_CDR_STEP_NUM ) //8
            || ( (train.phase_offset_data) >= cdr.max_phase_os ) //31
            || cdr.become_worse) && (cdr.direction == 1 ))			
		{
			break;//CGR Phase Maxf0p State End
		}
		else
		{ //Phase Adjustment State
			if( cdr.direction == 0)	train.phase_offset_data -= tag_CDR_PHASE_STEP_SIZE; //2 compute the phase offset
			else		train.phase_offset_data += tag_CDR_PHASE_STEP_SIZE;
			train.phase_offset_data = clamp(train.phase_offset_data,cdr.max_phase_os,cdr.min_phase_os);
			phase_control_func();
			cdr.num_count ++; //update number of rounds
 
			//DFE & CDR Phase Opt state
			dfe_adaptation();
			calculatef0p();

			//Update State
			//tag_CDR_STOP_IF_WORSE=1
			//skip_cdr = tag_CDR_SKIP_CDR_MODE_EN; //tag_SKIP_CDR_MODE_EN=0                        5
			cdr.become_worse = (tag_CDR_STOP_IF_WORSE && (cdr.train_f0p < (cdr.opt_f0p - tag_CDR_STOPPING_THRE)));
			#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
            DBG_Printf("\r\n cdr.become_worse=%d", cdr.become_worse);
			#endif

#if 0	
			// OLD CODE
			if ( (train.level > cdr.opt_level) ||                              //0
			 //((train.level == cdr.opt_level) && (cdr.train_f0p > (cdr.opt_f0p + tag_CDR_F0P_PHASEUPDATE_THRES))) ||
			 (cdr.train_f0p > cdr.opt_f0p && train.eye_check_pass)) // if the current train sampling phase has a larger f0p, update
			{
				cdr.opt_phase_offset = train.phase_offset_data; // update the phase offset
				cdr.opt_f0p = cdr.train_f0p; //update f0p
				cdr.opt_level = train.level;
				current_fn1 = train.fn1;
			}
#endif
			
			phase_updated = 0;
			if ((train.level > cdr.opt_level) || ((train.level == cdr.opt_level) && (((train.level == 3) && ((abs(train.fn1) < abs(current_fn1)) && train.eye_check_pass)) || ((cdr.train_f0p > cdr.opt_f0p) && train.eye_check_pass)))) {
				phase_updated = 1;
			}

			if (phase_updated) {
				cdr.opt_phase_offset = train.phase_offset_data; // update the phase offset
				cdr.opt_f0p = cdr.train_f0p; //update f0p
				cdr.opt_level = train.level;
				current_fn1 = train.fn1;
			}
		}		

		#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
		DBG_Printf("\r\n %d: phase_offset_data=%d, opt_phase_offset=%d, opt_f0p=%d, opt_level=%d, ", cdr.num_count,train.phase_offset_data,cdr.opt_phase_offset, cdr.opt_f0p, cdr.opt_level);
		#endif
	}
}

/****************************************
 * midpoint
 * Inputs: 
 *      train_phase_os
 *      cdr.train_f0p
 * Outputs:
*****************************************/
static void cdr_phase_midpoint(void)
{
    int8_t thres_large;
    int8_t thres_small;
	#if 1//(_DBG_PHASE_TRAIN)
    DBG_PS("\r\n>>>(cdr_mdpnt)");
    //DBG_PS("opt_f0p=%d", cdr.opt_f0p);
	#endif
	cdr.direction = 0; //-1
	cdr.become_worse = 0;
	train.phase_offset_data = cdr.opt_phase_offset;
	phase_control_func();
#ifdef _MOVE_PHASE_CDS
	dfe_adaptation();
#endif
	cdr.ini_phase_offset = cdr.opt_phase_offset;
	cdr.ini_level = cdr.opt_level;
	cdr.ini_f0p = cdr.opt_f0p;
	cdr.phase_small = cdr.ini_phase_offset ;
	cdr.phase_large = cdr.ini_phase_offset ;
	//skip_cdr = 0;
	
	if(tag_CDR_ADD_PHASE_OS_ONLY) goto End_State; //0
	
	while (1)
	{
		#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
        //DBG_Printf(" #cdr_become_worse=%d",cdr.become_worse);
		#endif
		if ((cdr.become_worse || ((train.phase_offset_data) <= cdr.min_phase_os)) 
		     && (cdr.direction == 0)) //-1
		{ // go right
			#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
            DBG_PS("\r\ndir=1");
			#endif
			cdr.direction = 1;
			cdr.become_worse = 0;
			train.phase_offset_data = cdr.ini_phase_offset;
			phase_control_func();
#ifdef _MOVE_PHASE_CDS
		dfe_adaptation();
#endif
			//skip_cdr = 0;			
		}
		
		if ((cdr.become_worse || ((train.phase_offset_data) >= cdr.max_phase_os)) 
		    && (cdr.direction == 1))	{ 
			#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
			DBG_PS("\r\nquit");
			#endif
		    break;
		}
		else{
            //DBG_Printf("\r\ncdr.direction:%d",cdr.direction);
			if( cdr.direction == 1)
				train.phase_offset_data += tag_CDR_PHASE_STEP_SIZE; 
			else
				train.phase_offset_data -= tag_CDR_PHASE_STEP_SIZE; 			
			train.phase_offset_data = clamp(train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
			phase_control_func();
			
			cdr.num_count ++; //update number of rounds

            //DFE & CDR Phase Opt State	
			dfe_adaptation();
			calculatef0p();

			//update state
			//skip_cdr = tag_CDR_SKIP_CDR_MODE_EN;
			/*tag_THRES_K_BASE=16*/
			thres_small = ((cdr.opt_f0p*tag_CDR_MIDPOINT_SMALL_THRES_K)>>4) + tag_CDR_MIDPOINT_SMALL_THRES_C;
			thres_large = ((cdr.opt_f0p*tag_CDR_MIDPOINT_LARGE_THRES_K)>>4) + tag_CDR_MIDPOINT_LARGE_THRES_C;
			cdr.become_worse = // cdr.train_f0p < 8;
                ( ( (cdr.direction == 0) && (cdr.train_f0p < thres_small) ) 
				  || ( cdr.direction == 1 && (cdr.train_f0p < thres_large) )
                  || (cdr.train_f0p == 0)
                );

			if (!cdr.become_worse && cdr.direction == 0) // update phase_small and phase_large
			{
				cdr.phase_small = train.phase_offset_data;
				#if (_DBG_PHASE_TRAIN)
				//DBG_Printf("\r\n --phase_offset_data=%d, cdr.phase_small=%d", train.phase_offset_data,cdr.phase_small);				
				#endif
			}
			else if (!cdr.become_worse && cdr.direction == 1)
			{
				cdr.phase_large = train.phase_offset_data;
				#if (_DBG_PHASE_TRAIN)
				//DBG_Printf("\r\n --phase_offset_data=%d, cdr.phase_large=%d", train.phase_offset_data,cdr.phase_large);				
				#endif
			}
		}
	} //while

	End_State:
	cdr.opt_phase_offset = ((cdr.phase_small + cdr.phase_large) >> 1) + tag_CDR_MIDPOINT_PHASE_OS; //cdr_midpoint_phase_os
	cdr.opt_phase_offset = clamp(cdr.opt_phase_offset, cdr.max_phase_os, cdr.min_phase_os);

	#if (_DBG_PHASE_TRAIN || _DBG_TRXTRAIN) 
	//DBG_PS("\r\n  F0P ~ mid[%x,%x] ", thres_small, thres_large);
	//DBG_Printf("phase_offset_data=%d, opt_phase_offset=%d", train.phase_offset_data,cdr.opt_phase_offset);
	DBG_Printf("\r\n small/large[%d,%d], +mid_point=%d => %d", cdr.phase_small, cdr.phase_large, cdr_midpoint_phase_os, cdr.opt_phase_offset);
	#endif
}

/****************************************
 * CDR Phase Opt Final Processing State
 * Inputs: 
 * Outputs:
*****************************************/
static void cdr_phase_opt_final_processing(void)
{
	#if (_DBG_PHASE_TRAIN)
    DBG_PS("\r\n>>>(cdr_phase_opt_final_processing)");
	#endif
	//skip_cdr = 0;
	train.phase_offset_data = cdr.opt_phase_offset; 
	phase_control_func();
	dfe_adaptation();
	calculatef0p();

		#if (_DBG_PHASE_TRAIN)
		//Printf("\r\n opt_phase_offset=%d(%d): cdr.ini_level=%d cdr.ini_f0p=%d -> train.level=%d, cdr.train_f0p=%d", cdr.opt_phase_offset,train_phase_os, cdr.ini_level,cdr.ini_f0p,train.level,cdr.train_f0p );
        //
		//Printf("\r\n skip_cdr=%d opt=%d f0p=%d level=%d train_saturated=%d ", skip_cdr, cdr.opt_phase_offset, cdr.train_f0p, train.level, train_saturated); 
		//Printf("dfe: %d %d, %d %d %d %d %d - %d %d ", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.eo, train.eye_check_pass); 
		#endif
	
	#if ( tag_CDR_PHASE_PROTECT_EN ) 
	if (( (train.level < cdr.ini_level && tag_CDR_PHASE_LEVEL_PROTECT_EN) || 
	    ((train.level == cdr.ini_level) && (cdr.train_f0p < (cdr.ini_f0p - tag_CDR_F0P_REJECT_THRES))) || //8
		(train.level == 0 && tag_CDR_PHASE_EO_PROTECT_EN) ))
	{
		#if (_DBG_PHASE_TRAIN)
		//DBG_Printf(" -- go back init phase!");
		#endif
		
		#if (_DBG_PHASE_TRAIN)
		//DBG_Printf("\r\n (R,C)=(%d,%d) dfe_res=%d opt_phase_offset=%d(%d): cdr.ini_level=%d cdr.ini_f0p=%d -> train.level=%d, cdr.train_f0p=%d", train_r, train_c, reg_DFE_RES_1_0, cdr.opt_phase_offset,train_phase_os, cdr.ini_level,cdr.ini_f0p,train.level,cdr.train_f0p );
        //
		//DBG_Printf("\r\n opt=%d f0p=%d level=%d train_saturated=%d ", cdr.opt_phase_offset, cdr.train_f0p, train.level, train_saturated); 
		//DBG_Printf("dfe: %d %d, %d %d %d %d %d - %d %d ", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.eo, train.eye_check_pass); 
		#endif
	
		//reg_MCU_DEBUG6_LANE_7_0 = 0x10;
		train.phase_offset_data = cdr.ini_phase_offset;
		phase_control_func();
		//reg_MCU_DEBUG6_LANE_7_0 = 0x20;
		dfe_adaptation(); 
		//reg_MCU_DEBUG6_LANE_7_0 = 0x30;

		if (tag_SAME_SET_NO_UPDATE || cdr.ini_level > train.level) //tag_SAME_SET_NO_UPDATE=1
		{
			train.level = cdr.ini_level;
		}
		#if (_DBG_PHASE_TRAIN)
		//DBG_Printf("\r\n ---> opt=%d f0p=%d level=%d train_saturated=%d ", cdr.opt_phase_offset, cdr.train_f0p, train.level, train_saturated); 
		//DBG_Printf("dfe: %d %d, %d %d %d %d %d - %d %d ", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.eo, train.eye_check_pass); 
		#endif
	}	
	#else
	if ((!tag_CDR_MIDPOINT_EN || !tag_CDR_EYE_WIDTH_EN) && (tag_SAME_SET_NO_UPDATE || cdr.opt_level > train.level)) //tag_CDR_MIDPOINT_EN=1
	{
		train.level = cdr.opt_level;
	}
	#endif
	
	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf(" Final: phase_offset_data=%d, opt_phase_offset=%d, phase_offset_esm=%d", train.phase_offset_data,cdr.opt_phase_offset, train.phase_offset_esm );
	#endif	
}

/****************************************
 * calculate f0p
 * Inputs: 
 *      train.f0
 *      train.f0a
 * Outputs:
 *      cdr.train_f0p                                              1
 * 	    cdr.train_f0p = train.eye_check_pass * ((train.eo * tag_CDR_F0P_EO_BASED) +
 *			              (f0_minus_abs_fn1 * !tag_CDR_F0P_EO_BASED));			
*****************************************/
static void calculatef0p(void)
{
	#if (tag_CDR_F0P_EO_BASED==0) 
	int	f0_minus_abs_fn1;// = train.f0 - abs(train.f0a);
    //DBG_PS("\r\n>>>(calculatef0p)");
	if(train.f0 >= train.f0a)
	  f0_minus_abs_fn1 = train.f0a;
	else
	  f0_minus_abs_fn1 = (train.f0<<1) - train.f0a;
	f0_minus_abs_fn1 = clamp(f0_minus_abs_fn1, tag_DFE_F0_MAX, tag_DFE_F0_MIN);
	#endif
	
	if(train.eye_check_pass) {
#if (tag_CDR_F0P_EO_BASED==1) 
		// require f0d < f0a (if not, f0d is not valid)
		cdr.train_f0p = train.eye_check_pass ? train.eo : 0;
#else
		cdr.train_f0p = f0_minus_abs_fn1;		
#endif	
	}
	else cdr.train_f0p = 0;		
	
	#if (_DBG_PHASE_TRAIN)
	DBG_Printf(",F0P = %d", cdr.train_f0p);  
	#endif
}


/****************************************
 * Advanced Clock Alignment Start
 * Inputs: 
 * Outputs:
*****************************************/
#if 0
void advanced_clk_align(void) BANKING_CTRL{
	int16_t f1_avg;
	uint16_t clock_align_run1_index;
	int16_t clk_sum, clk_step;
	
	if (!(TRAIN_STEP & RX_TRAIN_PHASETRAINFINAL)) return;
	if(ph_control_mode == 0 || ph_control_mode == 1 ) return; 

	#if (_DBG_PHASE_TRAIN)
    DBG_PS("\r\n>>>(advanced_clk_align)");
	#endif

	if(BYPASS_DELAY>0) return;
	
	f1_avg = 0;
	clock_align_run1_index = 0;
	
	do {
		dfe_adaptation();
		f1_avg += train.f1;
		#if (_DBG_PHASE_TRAIN)
		//DBG_Printf("  f1_avg = %d", f1_avg);  
		#endif
	} while (clock_align_run1_index++<(1<<tag_CLOCK_ALIGN_RUN1_NUM));
	
	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf("  f1_avg = %d -- > ", f1_avg);  
	#endif
	//f1_avg = f1_avg/tag_CLOCK_ALIGN_RUN1_NUM;
	f1_avg = f1_avg>>tag_CLOCK_ALIGN_RUN1_NUM;
	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf("%d", f1_avg);  
	#endif
	
	ph_control_mode = 0;
	//cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
	//cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
	cdr.min_phase_os = tag_CDR_MIN_PHASE_OS_MODE01;
	cdr.max_phase_os = tag_CDR_MAX_PHASE_OS_MODE01;
	//train.phase_offset_data = 0; //improve to reduce training time
	adapted_phase = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
	train.phase_offset_esm = 0;
	phase_control_func();
	
	#if _DEBUG
	print_ph_ctrl_status();
	#endif
	
	clock_align_run1_index = 0;
	clk_sum = 0; clk_step = 0;
	do {
		dfe_adaptation();
		
		//adapted_phase -= (train.f1<f1_avg)? +1: -1;
		if(train.f1<f1_avg) 
			clk_sum--;
		else clk_sum++;	
		
		if( clk_sum > 0)
			clk_step = clk_sum>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE2;	 ////(1,1/2,1/4,1/8,1/16,1/32,1/64,1/128)
		else 
			clk_step = -(~(clk_sum)>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE2);
			
		if(clk_step!=0)  {
			adapted_phase = adapted_phase + clk_step;
			train.phase_offset_data = adapted_phase;
			train.phase_offset_data = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
			phase_control_func();
			clk_sum = 0;
		}
	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf(" %d", clock_align_run1_index);  
	#endif
		
	} while( clock_align_run1_index++ < tag_CLOCK_ALIGN_RUN2_NUM);
	
	
	//add in one more loop for gear control
	clock_align_run1_index = 0;
	clk_sum = 0; clk_step = 0;
	do {
		dfe_adaptation();
		
		//adapted_phase -= (train.f1<f1_avg)? +1: -1;
		if(train.f1<f1_avg) 
			clk_sum--;
		else clk_sum++;	
		
		if( clk_sum > 0)
			clk_step = clk_sum>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE3;	 ////(1,1/2,1/4,1/8,1/16,1/32,1/64,1/128)
		else 
			clk_step = -(~(clk_sum)>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE3);
			
		if(clk_step!=0)  {
			adapted_phase = adapted_phase + clk_step;
			train.phase_offset_data = adapted_phase;
			train.phase_offset_data = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
			phase_control_func();
			clk_sum = 0;
		}
	#if (_DBG_PHASE_TRAIN)
	//DBG_Printf(" %d", clock_align_run1_index);  
	#endif
		
	} while( clock_align_run1_index++ < tag_CLOCK_ALIGN_RUN3_NUM);
	
	
	cdr.advanced_clock_align_converged = abs(train.f1 - f1_avg) <= 1;
	#if (_DBG_PHASE_TRAIN)
    DBG_PS("\r\n---(advanced_clk_align)");
	#endif

	// go back to phase 0
	ph_control_mode = 0;
	//cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
	//cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
	cdr.min_phase_os = tag_CDR_MIN_PHASE_OS_MODE01;
	cdr.max_phase_os = tag_CDR_MAX_PHASE_OS_MODE01;
	phase_control_func();	


} 

#endif
