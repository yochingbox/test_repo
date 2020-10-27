/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file phase.c
* \purpose Align90 phase control
* \History
*	02/25/2015 Heejeong Ryu		Initial 
*   09/05/2017 Heejeong Ryu     Moved phase control functions to ph_ctrl.c
*/

#include "common.h"

#ifdef _SATA_SERDES_BUILD
#ifdef _28G_X2
#pragma codeseg BANK1
#pragma constseg BANK1
#else
#pragma codeseg BANK4
#pragma constseg BANK4
#endif
#endif

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
#ifdef SUPPORT_PHASE_TRAIN
	int8_t cdr_num;
 	#if (_DBG_PHASE_TRAIN)
	DBG_PS("\r\n++(cdr_phase_opt) cal_align90=%d cal_eom=%d", lnx_CAL_PHASE_LANE_7_0, lnx_CAL_EOM_DPHER_LANE_7_0);
	#endif
		
	if (train.level >= 5 || train.eo > tag_CDR_EO_BYPASS_THRES) //tag_CDR_EO_BYPASS_THRES=63
        return; 

	//reg_REG_DTL_LOOP_FREEZE_LANE = 1;	//test
	
	cdr_phase_opt_init();
		//reg_MCU_DEBUGA_LANE_7_0 = 1;

    if (tag_CDR_MAXF0P_EN)  //1
		cdr_phase_maxf0p(); 	
		//reg_MCU_DEBUGA_LANE_7_0 = 3;
		
    if (tag_CDR_MIDPOINT_EN) { //1
		cdr_num = 0;
		cdr_num = 1<<(tag_CDR_MIDPOINT_STEP_NUM);
		while(cdr_num-->0) {
#if NEW_EOM_ALG        
			cdr_phase_midpoint_new(); 
#else
			cdr_phase_midpoint(); 
#endif    
		}	
	}	
		//reg_MCU_DEBUGA_LANE_7_0 = 9;
	
    cdr_phase_opt_final_processing();
	
	if(lnx_FORCE_PHASE_TRAIN_OFFSET_EN_LANE) {
		train.phase_offset_data = (int8_t)lnx_FORCE_PHASE_TRAIN_OFFSET_2C_LANE_7_0;
		phase_control_func();
		dfe_adaptation();
	}

	//reg_REG_DTL_LOOP_FREEZE_LANE = 0; //test
#endif	
}

#ifdef SUPPORT_PHASE_TRAIN
/****************************************
 * init
 * Inputs: 
 * Outputs:
 *      cdr status setting
*****************************************/
void cdr_phase_opt_init(void) BANKING_CTRL
{
	// initialize some parameters	
	calculatef0p();
	cdr.num_count = 0;
	cdr.direction = 0; // go left in the beginning
	cdr.become_worse = 0;
	cdr.ini_phase_offset = train.phase_offset_data; 
	cdr.ini_f0p = cdr.train_f0p;
	cdr.ini_level = train.level;
	cdr.opt_phase_offset = cdr.ini_phase_offset;
	cdr.opt_f0p = cdr.train_f0p;
	cdr.opt_level = train.level;
	cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? (tag_CDR_MIN_PHASE_OS_MODE01<tag_CDR_MIN_PHASE_OS_MODE01_LIMIT? tag_CDR_MIN_PHASE_OS_MODE01_LIMIT:tag_CDR_MIN_PHASE_OS_MODE01):tag_CDR_MIN_PHASE_OS_MODE23;
	cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? (tag_CDR_MAX_PHASE_OS_MODE01>tag_CDR_MAX_PHASE_OS_MODE01_LIMIT? tag_CDR_MAX_PHASE_OS_MODE01_LIMIT:tag_CDR_MAX_PHASE_OS_MODE01):tag_CDR_MAX_PHASE_OS_MODE23;
	//skip_cdr = 0;

	#if (_DBG_PHASE_TRAIN) || _DBG_RXTRAIN
	DBG_Printf("\r\n ini_phase_offset=%d", cdr.ini_phase_offset);
	DBG_Printf(" cdr.ini_level=%d cdr.ini_f0p=%d", cdr.ini_level,cdr.ini_f0p );
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
void cdr_phase_maxf0p(void) BANKING_CTRL
{
	//int8_t train_delta; 
	#if (_DBG_PHASE_TRAIN) || _DBG_RXTRAIN
    DBG_PS("\r\n+++(cdr_f0p)");
	#endif
	
	while (1)
	{
		#if (_DBG_PHASE_TRAIN)
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
            //phase_control_func();
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
            //phase_control_func();
			cdr.num_count ++; //update number of rounds
 
			//DFE & CDR Phase Opt state
			dfe_adaptation();
			calculatef0p();

		//reg_MCU_DEBUG8_LANE_7_0 = train.phase_offset_data;
		//reg_MCU_DEBUG9_LANE_7_0 = cdr.max_phase_os;
			//Update State
			//tag_CDR_STOP_IF_WORSE=1
			//skip_cdr = tag_CDR_SKIP_CDR_MODE_EN; //tag_SKIP_CDR_MODE_EN=0                        5
			cdr.become_worse = (tag_CDR_STOP_IF_WORSE && (cdr.train_f0p < (cdr.opt_f0p - tag_CDR_STOPPING_THRE)));
			#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
            //DBG_Printf("\r\n cdr.become_worse=%d", cdr.become_worse);
			#endif
			
			if ( (train.level > cdr.opt_level) ||                              //0
			 ((train.level == cdr.opt_level) && (cdr.train_f0p > (cdr.opt_f0p + tag_CDR_F0P_PHASEUPDATE_THRES)) )) // if the current train sampling phase has a larger f0p, update
			{
				cdr.opt_phase_offset = train.phase_offset_data; // update the phase offset
				cdr.opt_f0p = cdr.train_f0p; //update f0p
				cdr.opt_level = train.level;
			}
			
		}		

		#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
		DBG_Printf("\r\n %d: phase_offset_data=%d, cdr.train_f0p=%d opt_phase_offset=%d, opt_f0p=%d, opt_level=%d", cdr.num_count,train.phase_offset_data,cdr.train_f0p, cdr.opt_phase_offset, cdr.opt_f0p, cdr.opt_level);
		#endif
	}

	#if (_DBG_PHASE_TRAIN || _DBG_RXTRAIN)
	DBG_Printf("\r\n %d: phase_offset_data=%d, cdr.train_f0p=%d opt_phase_offset=%d, opt_f0p=%d, opt_level=%d", cdr.num_count,train.phase_offset_data,cdr.train_f0p, cdr.opt_phase_offset, cdr.opt_f0p, cdr.opt_level);
	#endif

}
/*
void check_cdr_status(void) {
	int16_t rd_foffset;
	uint16_t foffset;
	
	reg_RX_FOFFSET_EXTRACTION_EN_LANE = 1;
	reg_RX_FOFFSET_RD_REQ_LANE = 1;	
	while(reg_RX_FOFFSET_RDY_LANE==0);	
	
	foffset = (uint16_t)reg_RX_FOFFSET_RD_LANE_9_0_b1; foffset<<=3; foffset+=(uint16_t)reg_RX_FOFFSET_RD_LANE_9_0_b0; 
	
	if(reg_RX_FOFFSET_RD_LANE_9_0_b1&0x40) foffset|=0xfc00;
	rd_foffset = (int16_t)foffset;
	
	reg_RX_FOFFSET_RD_REQ_LANE = 0;
	
	#if (_DBG_PHASE_TRAIN) || _DBG_RXTRAIN
    //Printf(" foffset=%d(%02x %02x)", rd_foffset,reg_RX_FOFFSET_RD_LANE_9_0_b1,reg_RX_FOFFSET_RD_LANE_9_0_b0);
    Printf(" foffset=%d", rd_foffset);
	#endif
	
}
*/

/****************************************
 * midpoint
 * Inputs: 
 *      train_phase_os
 *      cdr.train_f0p
 * Outputs:
*****************************************/
void cdr_phase_midpoint(void) BANKING_CTRL
{
    int8_t thres_large;
    int8_t thres_small;

#if  IMPROVE_EOM        
    uint8_t saved_f0p = 0; // initial to 0
#endif

	#if (_DBG_PHASE_TRAIN) || _DBG_RXTRAIN
    DBG_PS("\r\n+++(cdr_mdpnt)");
	#endif
	cdr.direction = 0; //-1
	cdr.become_worse = 0;
	train.phase_offset_data = cdr.opt_phase_offset;
	//phase_control_func();
	dfe_adaptation();
	calculatef0p();
	cdr.opt_f0p = cdr.train_f0p; 
	cdr.opt_level = train.level;
	
	cdr.ini_phase_offset = cdr.opt_phase_offset;
	cdr.ini_level = cdr.opt_level;
	cdr.ini_f0p = cdr.opt_f0p;
	cdr.phase_small = cdr.ini_phase_offset ;
	cdr.phase_large = cdr.ini_phase_offset ;
	//skip_cdr = 0;
	#if (_DBG_PHASE_TRAIN) || _DBG_RXTRAIN
    DBG_Printf(" ini_phase_offset=%d, ini_f0p=%d",cdr.ini_phase_offset, cdr.opt_f0p);
	#endif
	
	//if(tag_CDR_ADD_PHASE_OS_ONLY) goto End_State; //0
	if(lnx_SKIP_DFE_ADAPT_CDR_MIDPOINT_LANE) {	
		skip_dfe_adapt_cdr_midpoint = 1;
	}	
	
	while (1)
	{
		#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
        //DBG_Printf("\r\n #cdr_become_worse=%d",cdr.become_worse);
		#endif
		if ((cdr.become_worse || ((train.phase_offset_data) <= cdr.min_phase_os)) 
		     && (cdr.direction == 0)) //-1
		{ // go right
			#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1) 
            DBG_PS("\r\ndir=1");
			#endif
#if IMPROVE_EOM
            if(cmx_EOM_ALG_MODE) {
				if( saved_f0p != 0)  break;
				if((train.phase_offset_data) <= cdr.min_phase_os)
				{
					saved_f0p =  cdr.train_f0p;
				}
			}
#endif
			cdr.direction = 1;
			cdr.num_count = 0;
			cdr.become_worse = 0;
			train.phase_offset_data = cdr.ini_phase_offset;
			//phase_control_func();
			
			//delay01(30); //test
			//check_cdr_status();
				
			skip_dfe_adapt_cdr_midpoint = 0;
			dfe_adaptation();
			
			if(lnx_SKIP_DFE_ADAPT_CDR_MIDPOINT_LANE) {	
				skip_dfe_adapt_cdr_midpoint = 1;
			}
			//skip_cdr = 0;			
		}
		
		if ((cdr.become_worse || ((train.phase_offset_data) >= cdr.max_phase_os)) 
		    && (cdr.direction == 1))	{ 
			#if (_DBG_PHASE_TRAIN && _DBG_TRXTRAIN_LVL1)
			DBG_PS("\r\nquit");
			#endif
#if IMPROVE_EOM
            if(cmx_EOM_ALG_MODE && (train.phase_offset_data >= cdr.max_phase_os))
            {
                saved_f0p =  cdr.train_f0p;
    //reg_MCU_DEBUGB_LANE_7_0 = saved_f0p;
			    cdr.direction = 0;
                cdr.become_worse = 0;
			    train.phase_offset_data = cdr.ini_phase_offset; 
			    //phase_control_func();
			
	    		//delay01(30); //test
	    		//check_cdr_status();
	    			
	    		skip_dfe_adapt_cdr_midpoint = 0;
	    		dfe_adaptation();

            }
            else
#endif
           
		        break;
		}
		else{
			#if (_DBG_PHASE_TRAIN)
            //DBG_Printf("\r\ncdr.dir:%d",cdr.direction);
			#endif
			if( cdr.direction == 1)
				train.phase_offset_data += tag_CDR_PHASE_STEP_SIZE; 
			else
				train.phase_offset_data -= tag_CDR_PHASE_STEP_SIZE; 			
            train.phase_offset_data = clamp(train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
 			//if(skip_dfe_adapt_cdr_midpoint==0)
			//	phase_control_func();
			//delay01(30); //test
			//check_cdr_status();
			
			//cdr.num_count ++; //update number of rounds

            //DFE & CDR Phase Opt State	
			dfe_adaptation();
			calculatef0p();

			//update state
			//skip_cdr = tag_CDR_SKIP_CDR_MODE_EN;
			/*tag_THRES_K_BASE=16*/
			thres_small = ((cdr.opt_f0p*tag_CDR_MIDPOINT_SMALL_THRES_K)>>tag_THRES_K_BASE) + tag_CDR_MIDPOINT_SMALL_THRES_C; //8 0
			thres_large = ((cdr.opt_f0p*tag_CDR_MIDPOINT_LARGE_THRES_K)>>tag_THRES_K_BASE) + tag_CDR_MIDPOINT_LARGE_THRES_C; //9 2
#if IMPROVE_EOM
			if(cmx_EOM_ALG_MODE) {
				thres_small = (thres_small > saved_f0p)? thres_small: saved_f0p;
				thres_large = (thres_large > saved_f0p)? thres_large: saved_f0p;
			}
#endif
			cdr.become_worse = 
                ( ( (cdr.direction == 0) && (cdr.train_f0p < thres_small) ) 
				  || ( cdr.direction == 1 && (cdr.train_f0p < thres_large) )
                  || (cdr.train_f0p == 0)
                );
			#if (_DBG_PHASE_TRAIN)
			//DBG_Printf(" phase_offset_data=%d, cdr.train_f0p=%d, opt_f0p=%d cdr.become_worse=%d", train.phase_offset_data, cdr.train_f0p, cdr.opt_f0p, cdr.become_worse);				
			#endif

			if (cdr.direction == 0) // update phase_small and phase_large
			{
				cdr.phase_small = train.phase_offset_data;
				#if (_DBG_PHASE_TRAIN)
				//DBG_Printf(" cdr.phase_small=%d", cdr.phase_small);				
				#endif
			}
			else if (cdr.direction == 1)
			{
				cdr.phase_large = train.phase_offset_data;
				#if (_DBG_PHASE_TRAIN)
				//DBG_Printf(" cdr.phase_large=%d", cdr.phase_large);				
				#endif
			}
		}
	} //while

	End_State:
	cdr.opt_phase_offset = ((cdr.phase_small + cdr.phase_large) >> 1);// + cdr_midpoint_phase_os; //tag_CDR_MIDPOINT_PHASE_OS=0
	cdr.opt_phase_offset = clamp(cdr.opt_phase_offset, cdr.max_phase_os, cdr.min_phase_os);

	lnx_EYE_LEFT_2C_LANE_7_0 = (uint8_t)cdr.phase_small;
	lnx_EYE_RIGHT_2C_LANE_7_0 = (uint8_t)cdr.phase_large;	
	lnx_EYE_MID_2C_LANE_7_0 = (uint8_t)cdr.opt_phase_offset;	
	
	#if (_DBG_PHASE_TRAIN) || _DBG_RXTRAIN // || _DBG_TRXTRAIN) 
	DBG_PS("\r\n  F0P ~ thres_small/large[%d,%d] ", thres_small, thres_large);
	DBG_Printf("phase_offset_data=%d, opt_phase_offset=%d", train.phase_offset_data, cdr.opt_phase_offset);
	//DBG_Printf(" small/large[%d,%d], +mid_point=%d => %d", cdr.phase_small, cdr.phase_large, cdr_midpoint_phase_os, cdr.opt_phase_offset);
	DBG_Printf(" small/large[%d,%d] => %d", cdr.phase_small, cdr.phase_large, cdr.opt_phase_offset);
	#endif
	

}

/****************************************
 * CDR Phase Opt Final Processing State
 * Inputs: 
 * Outputs:
*****************************************/
void cdr_phase_opt_final_processing(void) BANKING_CTRL
{
	#if (_DBG_PHASE_TRAIN)
    //DBG_PS("\r\n+++(cdr_phase_opt_final_processing)");
	#endif
	//skip_cdr = 0;
	train.phase_offset_data = cdr.opt_phase_offset + cdr_midpoint_phase_os + tag_PHASE_OFFSET_USER; 
    //phase_control_func();
	dfe_adaptation();
	calculatef0p();

		#if (_DBG_PHASE_TRAIN)
		//Printf("\r\n opt_phase_offset=%d(%d): cdr.ini_level=%d cdr.ini_f0p=%d -> train.level=%d, cdr.train_f0p=%d", cdr.opt_phase_offset,train_phase_os, cdr.ini_level,cdr.ini_f0p,train.level,cdr.train_f0p );
        //
		//Printf("\r\n skip_cdr=%d opt=%d f0p=%d level=%d train_saturated=%d ", skip_cdr, cdr.opt_phase_offset, cdr.train_f0p, train.level, train_saturated); 
		//Printf("dfe: %d %d, %d %d %d %d %d - %d %d ", train.f0a, train.f0, train.f1, train.f2, train.f3, train.f4, train.f5, train.eo, train.eye_check_pass); 
		#endif
	
	#if ( tag_CDR_PHASE_PROTECT_EN ) //1
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
	
		
		train.phase_offset_data = cdr.ini_phase_offset; 
		//phase_control_func();
		dfe_adaptation(); 

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
void calculatef0p(void) BANKING_CTRL
{
	#if (tag_CDR_F0P_EO_BASED==0) 
	int	f0_minus_abs_fn1;// = train.f0 - abs(train.f0a);
    //DBG_PS("\r\n+++(calculatef0p)");
	if(train.f0 >= train.f0a)
	  f0_minus_abs_fn1 = train.f0a;
	else
	  f0_minus_abs_fn1 = (train.f0<<1) - train.f0a;
	f0_minus_abs_fn1 = clamp(f0_minus_abs_fn1, tag_DFE_F0_MAX, tag_DFE_F0_MIN);
	#endif
	
    if(train.eye_check_pass) {
		#if (tag_CDR_F0P_EO_BASED==1) //1 
		cdr.train_f0p = train.eo;
		#else
		cdr.train_f0p = f0_minus_abs_fn1;		
		#endif	
	}
	else 
        cdr.train_f0p = 0;	

	//DBG_Printf(" F0P = %d", cdr.train_f0p);  
}
#endif //SUPPORT_PHASE_TRAIN

/****************************************
 * Advanced Clock Alignment Start
 * Inputs: 
 * Outputs:
*****************************************/
void advanced_clk_align(void) BANKING_CTRL {
	//int16_t f1_sum; 
	//int8_t f1_avg;
	int16_t sum; 	
	//int8_t ofst_avg;
	int8_t align_ref, align_tap;
	uint8_t clock_align_run1_index;
	int16_t clk_sum, clk_step;

	#if (_DBG_PHASE_TRAIN) || _DBG_RXTRAIN
    DBG_PS("\r\n+++(advanced_clk_align) initial phase=%d(%d)", train.phase_offset_data, reg_ALIGN90_REF_LANE_5_0);
	#endif

	if(cmx_TRAIN_SIM_EN) return;
	
	if(lnx_OFST_ALIGN_ADV_CLK_ALIGN_EN_LANE) {
		cds_dfe_ofst = 1;
	}		

	sum = 0;
	clock_align_run1_index = 1;
	
	do {
		align_tap = dfe_adapt_align();
		sum += align_tap;
		#if (_DBG_PHASE_TRAIN)
		//if(cds_dfe_ofst)
		//DBG_Printf("\r\nofst=%d  ofst_sum = %d", align_tap, sum);  			
		//else
		//DBG_Printf("\r\nf1=%d  f1_sum = %d", align_tap, sum);  
		#endif
	} while (clock_align_run1_index++<(1<<tag_CLOCK_ALIGN_RUN1_NUM));
	//f1_avg = f1_avg/tag_CLOCK_ALIGN_RUN1_NUM;
	align_ref = (int8_t)(sum>>tag_CLOCK_ALIGN_RUN1_NUM);
	#if (_DBG_PHASE_TRAIN)
	if(cds_dfe_ofst)
	DBG_Printf("\r\n ofst_avg:%d **\n", align_ref);  
	else 
	DBG_Printf("\r\n f1_avg:%d **\n", align_ref);  
	#endif

	//-----
	
	ph_control_mode = 0;
	cdr.min_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MIN_PHASE_OS_MODE01:tag_CDR_MIN_PHASE_OS_MODE23;
	cdr.max_phase_os = (ph_control_mode == 0 || ph_control_mode == 1)? tag_CDR_MAX_PHASE_OS_MODE01:tag_CDR_MAX_PHASE_OS_MODE23;
	set_ph_mode();
	
	adapt_data_en = 1; //??
	adapt_slicer_en = 1;
		//train.phase_offset_data = 0; //improve to reduce training time
		cdr.ini_phase_offset = train.phase_offset_data;
		adapted_phase = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
		train.phase_offset_esm = 0;
		phase_control_func();
		
		#if _DEBUG || _DBG_RXTRAIN
		print_ph_ctrl_status();
		//DBG_Printf("\r\n ofst_align=%d align_ref=%d======================= ", cds_dfe_ofst, align_ref);  
		#endif	

			clock_align_run1_index = 0;
			clk_sum = 0; clk_step = 0;
			do {
				align_tap = dfe_adapt_align();
				
				//adapted_phase -= (train.f1<f1_avg)? +1: -1;	
				if(align_tap<align_ref) 
					clk_sum--;
				else if(align_tap>align_ref)	
					clk_sum++;
				
				if( clk_sum > 0)
					clk_step = clk_sum>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE2;	 ////(1,1/2,1/4,1/8,1/16,1/32,1/64,1/128)
				else if( clk_sum < 0)
					clk_step = -(~(clk_sum)>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE2);
				else clk_step = 0;	
			#if (_DBG_PHASE_TRAIN)
			//DBG_Printf("\r\n #%d ==", clock_align_run1_index);  
			//DBG_Printf(" %d, %d:%d", align_tap, clk_sum, clk_step);  
			#endif
					
				if(clk_step!=0)  {
					adapted_phase = adapted_phase + clk_step;
					train.phase_offset_data = adapted_phase;
					train.phase_offset_data = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
					phase_control_func();
					clk_sum = 0;
				}
				
			} while( clock_align_run1_index++ < tag_CLOCK_ALIGN_RUN2_NUM);
			
			
			//add in one more loop for gear control
			clock_align_run1_index = 0;
			clk_sum = 0; clk_step = 0;
			do {
				align_tap = dfe_adapt_align();
				
				//adapted_phase -= (train.f1<f1_avg)? +1: -1;
				if(align_tap<align_ref) 
					clk_sum--;
				else if(align_tap>align_ref)	
					clk_sum++;	
				
				if( clk_sum > 0)
					clk_step = clk_sum>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE3;	 ////(1,1/2,1/4,1/8,1/16,1/32,1/64,1/128)
				else if( clk_sum < 0)
					clk_step = -(~(clk_sum)>>tag_CLOCK_ALIGN_PHASE_STEP_SIZE3);
				else clk_step = 0;	
		
			#if (_DBG_PHASE_TRAIN)
			//DBG_Printf("\r\n #%d:", clock_align_run1_index);  
			//DBG_Printf(" align_tap=%d, clk_sum=%d:clk_step=%d", align_tap, clk_sum, clk_step);  
			#endif
					
				if(clk_step!=0)  {
					adapted_phase = adapted_phase + clk_step;
					train.phase_offset_data = adapted_phase;
					train.phase_offset_data = clamp( train.phase_offset_data, cdr.max_phase_os, cdr.min_phase_os);
					phase_control_func();
					clk_sum = 0;
				}
				
			} while( clock_align_run1_index++ < tag_CLOCK_ALIGN_RUN3_NUM);
			
			
			//cdr.advanced_clock_align_converged = abs(train.f1 - f1_avg) <= 1; //info
			#if (_DBG_PHASE_TRAIN)
			if(cds_dfe_ofst==0)
			DBG_PS("\r\n---(advanced_clk_align) result: train.phase_offset_data=%d(%d) f1=%d, f1_ref=%d", train.phase_offset_data, reg_ALIGN90_REF_LANE_5_0, align_tap, align_ref );
			else
			DBG_PS("\r\n---(advanced_clk_align) result: train.phase_offset_data=%d(%d) ofst=%d, ofst_ref=%d", train.phase_offset_data, reg_ALIGN90_REF_LANE_5_0, align_tap, align_ref);
			#endif
				
		if(cds_dfe_ofst==0) lnx_AVG_F1_LANE_7_0 = (uint8_t)align_ref;		
		cds_dfe_ofst = 0;
	
} 

int8_t dfe_adapt_align(void) BANKING_CTRL {
	dfe_adaptation();
	if(cds_dfe_ofst) {
		//return (train.ofst_data + train.ofst_slicer);	
		return (train.ofst_slicer);	
	}
	else {
		return train.f1;
	}
	
}

#if _DEBUG || _DBG_RXTRAIN
void print_ph_ctrl_status(void) BANKING_CTRL {
	Printf("\r\n ----- slpr=(%d,", adapt_data_en);
	Printf("%d)", adapt_slicer_en);
	Printf(" ph_control_mode=%d", ph_control_mode);
	Printf(" eom_en_sde(%d,",EOM_EN_S);
	Printf("%d,",EOM_EN_D);
	Printf("%d) ----",EOM_EN_E);
}
#endif

