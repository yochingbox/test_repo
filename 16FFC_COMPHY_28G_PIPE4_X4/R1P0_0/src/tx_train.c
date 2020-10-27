/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file tx_train.c
* \purpose tx train
* \History
*	12/03/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#define _DEBUG _DBG_TXTRAIN
/****************************************
 * TX Training
 * Inputs: 
 *      ctrl_tx_train_done
 * Outputs:
 *      train_g0_index
 *      train_g1_index
 *      train_gn1_index
*****************************************/
void tx_train(void)
{
#ifdef SUPPORT_TXTRAIN
	#if _DEBUG
	//DBG_Printf("\r\n++(tx_train)");
	#endif
	PHY_STATUS = ST_TXTRAIN;
	// local constants
	tx_train_initial();

	while (1)
	{
		tx_train_control();

		if (ctrl_tx_train_done)
			break;
		else
			tx_ffe_train();	
	}

	tx_train_end();
#endif	
}

/****************************************
 * TX Train initial
 * Inputs: 
 *      opt g01n1 setting
 * Outputs:
 *      initialize train and loop cntr
*****************************************/
#ifdef SUPPORT_TXTRAIN
void tx_train_initial(void)
{
	#if _DEBUG
    //DBG_PS("tx_init");
	#endif
    ctrl_trx_ffe_updated = 1;
	ctrl_cdr_phase_on = 0;
	tx.num_tx_loop = 0;

    opt2train();// load the optimal eo for train

	#if _DEBUG
    //DBG_Printf(" train_g0/g1/gn1(%d,%d,%d) opt(%d,%d,%d)",train.g0_index,train.g1_index,train.gn1_index,opt.g0_index,opt.g1_index,opt.gn1_index );
	#endif

}

/****************************************
 * TX Train End
 *      Apply train with opt value
*****************************************/
void tx_train_end(void)
{	
	#if _DEBUG
    //DBG_PS("--(tx_end)");
	#endif
	update_opt_trx_ffe();

    opt2train();
}

/****************************************
 * TX Train Control
 * Inputs: 
 *      train.eo
 *      train.saturated
 *      train.level
 * Outputs:
 *      ctrl_tx_train_done
 *      ctrl_trx_ffe_updated
 *      tx.blind_training
*****************************************/
void tx_train_control(void)
{
    //DBG_PS("\r\n\r\n-tx_ctrl");
	if ( (tx.num_tx_loop >= tag_TX_MAX_LOOP) || //1
        ( (train.eo >= tag_TX_EO_BYPASS_THRES) && train.saturated==0) || //tag_TX_EO_BYPASS_THRES=60 //15
        (train.level >= 5))
	{
		//DBG_PS("\r\n\r\nDone");
		ctrl_tx_train_done = 1;
		tx.num_tx_loop = 0;
	}else{ 
		//DBG_PS("\r\n\r\n~Done");
		ctrl_tx_train_done = 0;
		tx.num_tx_loop ++; // update counter of Number of TX loop by adding one
	}
	tx.blind_training = 0;//(tag_BLIND_TRAIN_EN && !opt.eye_check_pass); //tag_BLIND_TRAIN_EN=0
	#if _DEBUG
    //DBG_Printf("\r\n++(tx_train_control):num_tx_loop:%d",tx.num_tx_loop);
	#endif
}

/****************************************
 * TX FFE Train
 * Inputs: 
 *      tx.blind_training
 *      train.eo
 *      train.saturated
 *      train.level
 * Callee:
 *      tx_blind_train()
 *      tx_preset_sweep()
 *      tx_g01n1_train()
*****************************************/
void tx_ffe_train(void)
{
	#if _SUPPORT_BLIND_TRAIN
	if (tx.blind_training) tx_blind_train();
	else 
	#endif 
	{
		if( (train.level < 5) &&
				((train.eo < tag_TX_EO_BYPASS_THRES) || train.saturated))
		{
			//if(tag_TX_SWEEP_PRESET_EN)  tx_preset_sweep(); //tag_TX_SWEEP_PRESET_EN=0
			if(tx_adapt_g0_en)      tx_g0_train();     //tag_TX_ADAPT_G0_EN=1
			if(tx_adapt_gn1_en)     tx_gn1_train();    //tag_TX_ADAPT_GN1_EN=1
			if(tx_adapt_g1_en)      tx_g1_train();     //tag_TX_ADAPT_G1_EN=0
		}
	}
}

/****************************************
 * TX Blind Train
 *      If the Eye is too close to get 
 *      reliable DFE results
*****************************************/
#if _SUPPORT_BLIND_TRAIN
void tx_blind_train()
{
    //DBG_PS("\r\n====>tx_blind_train<====");
	
    if(tx.gn1_is_min && tx.g0_is_max && tx.g1_is_min){
		if( tag_TX_BLIND_TRAIN_NO_RESET==0 )
		{
			tx_reset(train.tx_preset_index);
			dfe_cdr_phase_opt();
		}
    }
	else
	{
		if( tx_adapt_g0_en && tx.g0_is_max==0 )
		{
			//tx.g0_update = tag_TX_BLIND_OFFSET_G0;
			update_g0(tag_TX_BLIND_OFFSET_G0);
		}
		else 
		{
			if (tx_adapt_gn1_en && tx.gn1_is_min==0)
			{
				//tx.gn1_update = tag_TX_BLIND_OFFSET_GN1;
				update_gn1(tag_TX_BLIND_OFFSET_GN1);
			}
			if (tx_adapt_g1_en && tx.g1_is_min==0)
			{
				//tx.g1_update = tag_TX_BLIND_OFFSET_G1;
				update_g1(tag_TX_BLIND_OFFSET_G1);
			}
		}
    }
    update_opt_trx_ffe();
}
#endif

/****************************************
 * TX G0 Train
 *      sweep train_g0_index until worse
 *      get the best results among the swept ones
 * Inputs:
 *      opt.phase_offset
 * Outputs:
 *      train_g0_index
 *      tx.g0_update
*****************************************/
void tx_g0_train(void)
{
    int8_t idx_ini; //tx.ini_g0_index
	int8_t cnt = 20;
	#if _DEBUG
    DBG_PS("\r\n====>g0_train<====");
	#endif
    tx.num_count = 0;
    idx_ini = train.g0_index;
    tx.direction = 0;
    tx.become_worse = 0;
	while (cnt-->0)
	{
		if ((tx.num_count >= tag_TX_G0_STEP_NUM || tx.g0_is_min || tx.become_worse) &&
            tx.direction == 0) // switch direction
		{
			#if _DEBUG
			//DBG_Printf(" num_count=%d, g0_is_max=%d, become_worse=%d",tx.num_count,tx.g0_is_min,tx.become_worse);
			#endif
			tx.direction = 1;
			tx.num_count = 0;
			tx.become_worse = 0;

			if (tag_TX_G0_STEP_NUM > 0)
			{
				// return to the initial point
				//tx.g0_update = idx_ini - train.g0_index;
				#if _DEBUG
				//DBG_Printf("\r\n dir=%d, g0=%d", tx.direction, train.g0_index); 	
				#endif
				update_g0(idx_ini - train.g0_index);
			}
		}

		if (((tx.num_count >= tag_TX_G0_STEP_NUM) || tx.g0_is_max || tx.become_worse) &&
            tx.direction ==1)
		{
			#if _DEBUG
			//DBG_Printf(" num_count=%d, g0_is_max=%d, become_worse=%d",tx.num_count,tx.g0_is_max,tx.become_worse);
			#endif
			break;
		}
		else
		{
			//tx.g0_update = tx.direction ? tag_TX_G0_STEP_SIZE : -tag_TX_G0_STEP_SIZE; //1
			tx.num_count ++; //update number of rounds
			#if _DEBUG
			//DBG_Printf("\r\n dir=%d, g0=%d", tx.direction, train.g0_index ); 	
			#endif
			update_g0(tx.direction ? tag_TX_G0_STEP_SIZE : -tag_TX_G0_STEP_SIZE);
            compare_g0();            
		}
	}//while(1)

	// go to the optimal G0 index
	//tx.g0_update = opt_g0_index - train_g0_index;
	#if _DEBUG
	//DBG_Printf("\r\n opt.g0_index=%d, train.g0_index=%d", opt.g0_index, train.g0_index ); 	
	#endif	
	update_g0(opt.g0_index - train.g0_index);

	update_opt_trx_ffe();
}

void tx_gn1_train(void)
{
    //uint8_t* ptr;
    //ptr = (uint8_t*)&MCU_DEBUG3_LANE; ptr+=2;  //TODO &train_gn1_index,

	#if _DEBUG
    DBG_PS("\r\n====>gn1_train<====");
	#endif
	if (tag_TX_GN1_MAXF0T_EN) // max f0t mode
		g1n1_maxf0t(
            tag_TX_TRAIN_P2P_HOLD, //HOLD
            0, //X
            &train.gn1_index,//ptr, //IDX
            &tx.gn1_is_min, &tx.gn1_is_max, //IS_MAX IS_MIN
            update_gn1
            );
	if (tag_TX_GN1_MIDPOINT_EN){
        g1n1_midpoint(
            tag_TX_TRAIN_P2P_HOLD,
            0, //X
            &train.gn1_index, //ptr, //IDX
            &tx.gn1_is_min, &tx.gn1_is_max,//IS_MAX IS_MIN
            update_gn1
            );
    }
	
}

void tx_g1_train(void)
{
    //uint8_t* ptr;
    //ptr =( uint8_t*)&MCU_DEBUG3_LANE; ptr++;  //TODO &train_g1_index,
    
	#if _DEBUG
    DBG_PS("\r\n====>g1_train<====");
	#endif
	if (tag_TX_G1_MAXF0T_EN) // max f0t mode
		g1n1_maxf0t(
            tag_TX_TRAIN_P2P_HOLD, //HOLD
            1, //X
            &train.g1_index, //ptr, //IDX
            &tx.g1_is_min, &tx.g1_is_max, //IS_MAX IS_MIN
            update_g1
            );

	if (tag_TX_G1_MIDPOINT_EN){ // midpoint mode
        g1n1_midpoint(
        tag_TX_TRAIN_P2P_HOLD,  //HOLD
        1, //X
        &train.g1_index, //ptr, //IDX
        &tx.g1_is_min, &tx.g1_is_max,//IS_MIN, IS_MAX
        update_g1 ); //FP
    }
}

/****************************************
 * Max F0T Algorithms
 * Inputs:
 *      NUM: max iteration
 *          tag_TX_G1_STEP_NUM
 *      STEP : tag_TX_G*_STEP_SIZE
 * Outputs:
 * Arg:
 *      HOLD:initial direction 
 *          1: p2phold on  - dec=>inc
 *          0: p2phold off - inc=>dec
 *      X:  0: gn1 1: g1
 *      IDX: gx index
 *      MIN: gx index min
 *      MAX: gx index max
 * Return: void
 * Callee: update_g*()
*****************************************/
void g1n1_maxf0t(bool HOLD,  uint8_t X, uint8_t* IDX, 
    bool* IS_MIN, bool* IS_MAX, void(* update_g)(int8_t))
{
    // -- Initial State
	uint8_t num_count;
	BIT dir;     //tx.direction
	//BIT worsen;             //tx.become_worse
	uint8_t idx_ini;     //tx.ini_g1_index
    int8_t update;              //tx.gx_update
    uint8_t NUM, STEP;
	int8_t cnt = 20;
	
	#if _DEBUG
    DBG_PS("\r\n****G1N1_F0T****");
	#endif

    if(X){
        NUM = tag_TX_G1_STEP_NUM;
        STEP= tag_TX_G1_STEP_SIZE;
    }else{
        NUM = tag_TX_GN1_STEP_NUM;
        STEP= tag_TX_GN1_STEP_SIZE;
    }
	idx_ini = *IDX;
	dir = HOLD ? 0 : 1;    
	tx.become_worse = 0; 
	num_count = 0;
	
	while (cnt-->0)
	{
 		if(HOLD) {
			if( (num_count >= NUM || *IS_MIN || tx.become_worse) && dir==0 ) {
			  dir = 1;
			  num_count = 0;
			  tx.become_worse = 0;		  
			  if(NUM > 0)  {
				   // return to the initial point		
                   update = idx_ini - *IDX;					
                   update_g(update);		  
			  }
			 }
			 if((num_count >= NUM || *IS_MAX || tx.become_worse) && dir==1 ) break;
		}
		else {
			if( (num_count >= NUM || *IS_MAX || tx.become_worse) && dir==1 )
			  dir = 0;
			  num_count = 0;
			  tx.become_worse = 0;
			  
			  if(NUM > 0)
			  {
                   update = idx_ini - *IDX;					
                   update_g(update);		  
			  }		
			  if((num_count >= NUM || *IS_MIN || tx.become_worse) && dir==0 ) break;
		}
		
		update = dir ? STEP : -STEP;
		num_count ++; //update number of rounds
		update_g(update);
		compare_g1n1(X); // compare train data with saved optimal data
	} //while (1)

	// go to the optimal gx index
	//#if _DEBUG
	//if(X)
	//	DBG_Printf("\r\n opt.g1_index=%d, train.g1_index=%d", opt.g1_index, train.g1_index ); 	
	//else
	//	DBG_Printf("\r\n opt.gn1_index=%d, train.gn1_index=%d", opt.gn1_index, train.gn1_index ); 	
	//#endif	
	
	if(X)
		update_g(opt.g1_index - *IDX);
	else
		update_g(opt.gn1_index - *IDX);
	
	update_opt_trx_ffe();
}

/****************************************
 * F0T Midpoint Algorithms
 * Inputs:
 *      train.f0t
 * Outputs:
 *      train_g1n1_index
 * Arg:
 *      DIR:initial direction 
 *          0: p2phold on  - dec=>inc
 *          1: p2phold off - inc=>dec
 *      TH: f0t threshold   
 *          reg.tx.gx_midpoint_thres_k/THRES_K_BASE*opt.f0t + reg.tx.gx_midpoint_thres_c
 *      OS: offset
 *          reg.tx.gx_midpoint_index_os
 *      IDX: gx index
 *      IS_MIN: gx index is min //tx.gx_is_min/max
 *      IS_MAX: gx index is max
 *      STEP : tag_TX_G*_STEP_SIZE
 * Return: void
 * Callee: update_g*()
*****************************************/
void g1n1_midpoint(bool HOLD, uint8_t X, 
    uint8_t * IDX, bool* IS_MIN, bool* IS_MAX, 
    void(* update_g)(int8_t)
    )
{
    // -- Initial State
	uint8_t num_count;
	BIT dir;     //tx.direction: if(p2p_hold_on==1) dir=-1; else dir=1;
	//BIT worsen = 0;             //tx.become_worse
	uint8_t idx_ini;     //tx.ini_g1_index
	uint8_t idx_lo;  //tx.g1_index_small
	uint8_t idx_hi;  //tx.g1_index_large
    int8_t update;              //tx.gx_update
    uint8_t OBTH;
    uint16_t TH;
    uint8_t OS;
    uint8_t STEP;
	bool    OB;
	int8_t cnt = 20;
    
	dir = HOLD ? 0 : 1;
	idx_ini = *IDX;
	idx_lo  = idx_ini;
	idx_hi  = idx_ini;
	tx.become_worse = 0;
	
	num_count = 0;
	
    if(X){          
        TH   = ((opt.f0t*tag_TX_G1_MIDPOINT_THRES_K)>>tag_THRES_K_SHFT) + tag_TX_G1_MIDPOINT_THRES_C;
        OS   = tag_TX_G1_MIDPOINT_INDEX_OS;
        OBTH = tag_TX_G1_OVERBOOST_THRES;
        STEP = tag_TX_G1_STEP_SIZE;
		OB   = (train.f1 < 0 || (train.f2 < 0 && ((train.f1 + train.f2) < tag_TX_G1_OVERBOOST_THRES)))? 1:0;
    }else{ 
        TH   = ((opt.f0t*tag_TX_GN1_MIDPOINT_THRES_K)>>tag_THRES_K_SHFT) + tag_TX_GN1_MIDPOINT_THRES_C;
        OS   = tag_TX_GN1_MIDPOINT_INDEX_OS;
        OBTH = tag_TX_GN1_OVERBOOST_THRES;
        STEP = tag_TX_GN1_STEP_SIZE;
		OB   =  ((train.f0 < 63 && train.fn1 < tag_TX_GN1_OVERBOOST_THRES) || (train.f0 >= 63 && train.f0a >= 63))? 1:0;
    }

	#if _DEBUG
    DBG_Printf("\r\n****G1N1_MDP**** opt.f0t=%d, TH=%d",opt.f0t, TH);
    #endif
	
    // -- Sweep back forth to get idx_hi/idx_lo
    while(cnt-->0)
    {
	#if _DEBUG
        if(*IS_MIN) DBG_PS(" -MIN- ");
        if(*IS_MAX) DBG_PS(" -MAX- ");
	#endif	
        // -- Direction Switch or Done
		if(HOLD)
		{
			if( (*IS_MIN || tx.become_worse) && dir==0) {
				dir = 1;
				tx.become_worse = 0;
				update = idx_ini - *IDX;
				update_g(update);				
				num_count += abs(update);
				#if _DEBUG
				//DBG_Printf("\r\n -- changed dir: %d",dir);
				#endif

			}	
		
			if( (*IS_MAX || tx.become_worse) && dir==1 ) break;
		}
		else
		{
			if( (*IS_MAX || tx.become_worse) && dir==1) {
				dir = 0;
				tx.become_worse = 0;
				update = idx_ini - *IDX;
				update_g(update);				
				num_count += abs(update);
			}	
				#if _DEBUG
				//DBG_Printf("\r\n -- changed dir: %d",dir);
				#endif
			if( (*IS_MIN || tx.become_worse) && dir==0 ) break;
		}
		
        update = dir ? STEP : -STEP;
        num_count += abs(update);
        update_g(update);
        
        tx.train_overboost = tag_TX_GN1_OVERBOOST_EN && OB;

        tx.become_worse = ((train.f0t < TH) || (num_count >= tag_TX_MAX_MIDPOINT_CTRL_CNT)
				|| (tx.train_overboost && dir==0)
                || train.f0t == 0);
		// p2p_hold mode, how to terminate when g0 is max/min?
        if(tx.become_worse==0){ // keep record hi/lo until worsen, will be max/min if not worsen
            if(dir==0) idx_lo = *IDX;
            else       idx_hi = *IDX;
        }
	#if _DEBUG
        DBG_Printf("\r\n\t#%d: lo=%d hi=%d inx=%d, become_worse=%d, is_min=%d, is_max=%d tx.train_overboost=%d, train.f0t=%d",num_count, idx_lo,idx_hi,(*IDX), tx.become_worse, *IS_MAX, *IS_MIN, tx.train_overboost, train.f0t);
	#endif	
   
    } // while(1)


	// -- Load OPT State

	update = ((idx_lo + idx_hi)>>1) + OS - *IDX;
	update_g(update);
	#if _DEBUG
        DBG_Printf("\r\n\tMP_Result : lo=%d hi=%d inx=%d, update=%d",idx_lo,idx_hi,(*IDX), update);
	#endif	

	//if (train.level < opt.level 
    //    || (train.level == opt.level && (train.f0t < (opt.f0t - tag_TX_F0T_REJECT_THRES) ))
    //   || train.level == 0 )
	//{
	//	update = idx_ini - *IDX;
	//	update_g(update);
	//}
	update_opt_trx_ffe();

} // g1n1_midpoint

/****************************************
 * Compare Gx
 * Inputs:
 *      opt/train.
 *          level
 *          f0a
 *          f0t
 *          dfe_saturate
 *          f0a_saturate
 * Outputs:
 *      tx.ffe_updated
 *      tx.become_worse
 * Arg:
 *      arg:    boolean for the diff(train.g0_index < opt.g0_index)
 *      th:     tx.f0t_gx_update_thres
 * Return:
 *      1: should update opt
 *      0: no need
*****************************************/
void compare_g0(void)
{ /* find arg: /\<arg\>\|\<th\>\|\<g\> */
	bool ARG = (train.g0_index < opt.g0_index);
    //DBG_Printf("\r\nCG0 : F0T = %d",train.f0t);
	if (opt.level < train.level)
	{
		tx.ffe_updated = 1;
		tx.become_worse = 0;
	}
	else if (opt.level == train.level) // intra-level compare
	{
		if (opt.f0a >= tag_TX_F0A_HIGH_THRES)
		{
			tx.ffe_updated = ARG;
			tx.become_worse = 0;
		}
		else if (opt.f0a < tag_TX_F0A_HIGH_THRES && train.f0a >= tag_TX_F0A_HIGH_THRES)
		{
			tx.ffe_updated = 0;
			tx.become_worse = 0;
		}

		else if (train.level == 1 || train.level == 2 || train.level == 4) // level 1/2/4
		{			
			tx.ffe_updated = ((ARG && train.f0t > (opt.f0t + tag_TX_F0T_G0UPDATE_THRES))
				|| (ARG==0 && train.f0t > (opt.f0t - tag_TX_F0T_G0UPDATE_THRES)) );
			tx.become_worse = (tag_TX_STOP_IF_WORSE && train.f0t < (opt.f0t - tag_TX_STOP_THRES));
		}
		else if (train.level == 3) // level 3
		{
			tx.ffe_updated = (
                  (train.f0a_saturate==0 && opt.f0a_saturate && train.dfe_saturate == opt.dfe_saturate) 
				|| (train.f0a_saturate == opt.f0a_saturate && train.dfe_saturate==0 && opt.dfe_saturate)
				|| (train.f0a_saturate && opt.f0a_saturate && ARG));
			tx.become_worse = 0;
		}
		else if (train.level == 0) // for level 0
		{
			tx.ffe_updated = (train.g0_index < opt.g0_index)==0; //g0 only
			tx.become_worse = 0;
		}
		else // for level 5
		{
			tx.ffe_updated = 0;
			tx.become_worse = 0; // g1/n1: tag_TX_STOP_IF_WORSE
		}
	}
	else
	{
		tx.ffe_updated = 0;
		tx.become_worse = (tag_TX_STOP_IF_WORSE && opt.f0a < tag_TX_F0A_HIGH_THRES);
	}
	
	if (tx.ffe_updated)
	{
		update_opt_trx_ffe(); // update the memory of Opt
	}
} // compare_g0

/****************************************
 * Compare G1n1
 * Inputs:
 *      opt/train.
 *          level
 *          eo
 *          f0t
 *          dfe_saturate
 *          f0a_saturate
 * Outputs:
 *      become_worse
 *      ffe_updated
 *      tx.train_overboost
 * Argument:
 *      X : 0: gn1 1: g1
 *
 *      UTH : reg.tx.f0t_g[1|n1]update_thres
 *      OBEN: reg.tx.g[1|n1]_overboost_en
 *      OBTH: reg.tx.g[1|n1]_overboost_thres
 *      OBUTH:reg.tx.g[1|n1]_overboost_update_thres
*****************************************/

void compare_g1n1(uint8_t X)
{
    uint8_t UTH, OBEN, OBTH, OBUTH;
	bool Train_Index_is_big;
 	#if _DEBUG
   //DBG_Printf("\r\nCGX : F0T = %d",train.f0t);
   #endif
    if(X){ // G1
        UTH = tag_TX_F0T_G1UPDATE_THRES;
        OBEN = tag_TX_G1_OVERBOOST_EN;
        OBTH = tag_TX_G1_OVERBOOST_THRES;
        OBUTH = tag_TX_G1_OVERBOOST_UPDATE_THRES;
		Train_Index_is_big = (train.g1_index > opt.g1_index) ? 1:0;
    }else{ //GN1
        UTH = tag_TX_F0T_GN1UPDATE_THRES;
        OBEN = tag_TX_GN1_OVERBOOST_EN;
        OBTH = tag_TX_GN1_OVERBOOST_THRES;
        OBUTH = tag_TX_GN1_OVERBOOST_UPDATE_THRES;
		Train_Index_is_big = (train.gn1_index > opt.gn1_index) ? 1:0;
    }

	if (opt.level < train.level)
	{
		tx.ffe_updated = 1;
		tx.become_worse = 0;
	}
	else if (opt.level == train.level) // intra-level compare
	{
       tx.train_overboost = OBEN && ((train.f0 < 63 && train.fn1 < OBTH) || (train.f0 >= 63 && train.f0a >= 63));
		tx.opt_overboost = OBEN && ((opt.f0 < 63 && opt.fn1 < OBTH) || (opt.f0 >= 63 && opt.f0a >= 63));
		
		if (train.level == 1 || train.level == 2 || train.level == 4) // level 1/2/4
		{			
			tx.ffe_updated = (train.f0t > (opt.f0t + UTH))
				|| (tx.train_overboost==0 && tx.opt_overboost && train.f0t > (opt.f0t - OBUTH))
				|| (tx.train_overboost && tx.opt_overboost && Train_Index_is_big && train.f0t > (opt.f0t - OBUTH));
			tx.become_worse = tag_TX_STOP_IF_WORSE && (train.f0t < (opt.f0t - tag_TX_STOP_THRES)
                || (tx.train_overboost && tx.opt_overboost==0));
		}
		else if (train.level == 3) // level 3
		{
			tx.ffe_updated = (train.f0a_saturate==0 && opt.f0a_saturate && train.dfe_saturate == opt.dfe_saturate) 
				|| (train.f0a_saturate == opt.f0a_saturate && train.dfe_saturate==0 && opt.dfe_saturate)
				|| (tx.train_overboost && tx.opt_overboost && Train_Index_is_big && train.f0t > (opt.f0t - OBUTH));
			tx.become_worse = 0;
		}
		else // for level 0/5
		{
			tx.ffe_updated = 0;
			tx.become_worse = 0;
		}
	}
	else
	{
		tx.ffe_updated = 0;
		tx.become_worse = tag_TX_STOP_IF_WORSE;
	}

	if (tx.ffe_updated)
	{
		update_opt_trx_ffe(); // update the memory of Opt
	}
	#if _DEBUG
    //DBG_Printf("tx.become_worse=%d",tx.become_worse);
	#endif
	
 	#if _DEBUG
   DBG_Printf("\r\n++(compare_g1n1) f0t=%d train_ob=%d, opt_ob=%d, train_fn1=%d, opt_fn1=%d",train.f0t,tx.train_overboost,tx.opt_overboost, train.fn1, opt.fn1 );
   #endif

}

/****************************************
 * Compare TX Preset
 * Inputs:
 *      opt/train.
 *          level
 *          eo
 *          f0t
 *          dfe_saturate
 *          f0a_saturate
 * Outputs:
 *      ffe_updated
*****************************************/
/* not used
void compare_tx_preset()
{
	if (opt.level < train.level)
	{
		tx.ffe_updated = 1;
	}
	else if (opt.level == train.level) // intra-level compare
	{
		if (train.level == 1 || train.level == 2 || train.level == 4) // level 1/2/4
		{
			if (ctrl_tx_train_on)
			{
				tx.ffe_updated = (train.f0t > opt.f0t + tag_TX_PRESET_UPDATE_THRES);
			}
			else
			{
				tx.ffe_updated = (train.eo > opt.eo + tag_TX_PRESET_UPDATE_THRES);
			}
		}
		else if (train.level == 3) // level 3
		{
			tx.ffe_updated = ((train.f0a_saturate==0 && opt.f0a_saturate && train.dfe_saturate == opt.dfe_saturate) 
				|| (train.f0a_saturate == opt.f0a_saturate && train.dfe_saturate==0 && opt.dfe_saturate));
		}
		else // for level 0/5
		{
			tx.ffe_updated = 0;
		}
	}
	else
	{
		tx.ffe_updated = 0;
	}

	if (tx.ffe_updated)
	{
		update_opt_trx_ffe(); // update the memory of Opt
	}
}
*/
#endif

void tx_reset(uint8_t index) {
	#ifdef _LAB
	DBG_Printf("\r\ntx_reset:%x", (index&0x03)<<12);
	#endif

	if(phy_mode == 4) //ethernet
		Send_ctrl_to_tx((index&0x03)<<12);	
	else	
		Send_ctrl_to_tx((index&0x03)<<10);	

}

#ifdef SUPPORT_TXTRAIN
#define cnt reg_MCU_DEBUGD_LANE_7_0 //HR:don't remove

void update_g0(int8_t update) 
{           
	//int8_t cnt = 10;
	cnt = 16;
	#if _DEBUG
    //DBG_Printf("\n\r++(update_g0) update= %d",update);
	#endif
	
	if (update > 0 && tx.g0_is_max==0)
	{
		while(cnt-->0){
			if(update > 0 &&  tx.g0_is_max==0){
				//g0_request = 1;
				req_local_ctrl(CE_NORMAL, 0, 1, 0);
				
				if(cmx_PIPE4_EN==0 || tx.g0_is_max==0) {
			
					train.g0_index ++;
					update--;		               
                }
			}
			else {
				dfe_cdr_phase_opt();
				break;			
			}
          }   
	}	
	else if(update < 0 && tx.g0_is_min==0){ 
	
		while(cnt-->0) 
		{
			if(update < 0 && tx.g0_is_min==0){ 
				//g0_request = -1;
				req_local_ctrl(CE_NORMAL, 0, 2, 0);
						
				if(tx.g0_is_min==0 || cmx_PIPE4_EN==0) {		   
					update ++; ////DBG_Pritnf("-");
					train.g0_index --;
				}		
			}
			else 
			{
                //DBG_Pritnf("g0min");
				dfe_cdr_phase_opt();
               break;
            }
        }
    } 
}

void update_gn1(int8_t update)
{             
	//int8_t cnt = 10;
	cnt = 16;
	#if _DEBUG
    //DBG_Printf("\n\r++(update_gn1) update= %d",update);
	#endif

	if (update > 0 && tx.gn1_is_max==0)
	{
		while(cnt-->0){		
			#if _DEBUG
			//DBG_Printf("\n\r update=%d, tx.gn1_is_max=%d",update, tx.gn1_is_max);
			#endif
			if(update >0 && tx.gn1_is_max==0){
			//gn1_request = 1;
            //g0_request  = tag_TX_TRAIN_P2P_HOLD;
				req_local_ctrl(CE_NORMAL, 0, tag_TX_TRAIN_P2P_HOLD, 1);		
								
				if(tx.gn1_is_max==0 || cmx_PIPE4_EN==0) {
					update --; //DBG_Pritnf("+");
					train.gn1_index ++;
					train.g0_index += tag_TX_TRAIN_P2P_HOLD;
				}
			}
			else {
				//DBG_Pritnf("g-1max");
				dfe_cdr_phase_opt();
				break;
			}
		}
				
	}else if (update < 0 && tx.gn1_is_min==0){ 
		while(cnt-->0) 
		{
			if(update <0 && tx.gn1_is_min==0)
			{
				//gn1_request = -1;
				//g0_request  = -tag_TX_TRAIN_P2P_HOLD;
				req_local_ctrl(CE_NORMAL, 0, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 2);		
	
				if(tx.gn1_is_min==0 || cmx_PIPE4_EN==0) {
					update ++; //DBG_Pritnf("-");
					train.gn1_index --;
					train.g0_index -= tag_TX_TRAIN_P2P_HOLD ? 1 : 0;
				}
			}
			else {	
                //train_gn1_index ++;
                //DBG_Pritnf("g-1min");
				dfe_cdr_phase_opt();
                break;
                }
				
		}
	} 
}

void update_g1(int8_t update)
{            
	//int8_t cnt = 10;
	cnt = 16;
 	#if _DEBUG
    //DBG_Printf("\n\r++(update_g1) update= %d",update);
	#endif
 	
	if (update > 0 && tx.g1_is_max==0)
	{
		while(cnt-->0){
			if(update >0 && tx.g1_is_max==0){
			//g1_request = 1;
            //g0_request  = tag_TX_TRAIN_P2P_HOLD;
				req_local_ctrl(CE_NORMAL, 1, tag_TX_TRAIN_P2P_HOLD, 0);		
								
				if(tx.g1_is_max==0 || cmx_PIPE4_EN==0) {
					update --; //DBG_Pritnf("+");
					train.g1_index ++;
					train.g0_index += tag_TX_TRAIN_P2P_HOLD;
				}
			}
			else {		
				//DBG_Pritnf("g1max");
				dfe_cdr_phase_opt();
				break;
			}
		}
	}else if (update < 0 && tx.g1_is_min==0){ 
		while(cnt-->0) {
			if(update < 0 && tx.g1_is_min==0){ 
			
			//g1_request = -1;
            //g0_request  = -tag_TX_TRAIN_P2P_HOLD;
				req_local_ctrl(CE_NORMAL, 2, (tag_TX_TRAIN_P2P_HOLD ? 2 : 0), 0);		
	
				if(tx.g1_is_min==0 || cmx_PIPE4_EN==0) {
					update ++; //DBG_Pritnf("-");
					train.g1_index --;
					train.g0_index -= tag_TX_TRAIN_P2P_HOLD ? 1 : 0;
				}
			}
			else {		
				//DBG_Pritnf("g1min");
				dfe_cdr_phase_opt();
				break;
			}
		}
	} 
}
#endif

//TODO - apta train
void apta_txtrain(void) {

#ifdef SUPPORT_TXTRAIN
		PHY_STATUS = ST_APTA_TXTRAIN;
		
		timeout = 0;	
		request_local_ctrl(0x0400); //	LOCAL_CTRL_FIELD_LANE[11:10]=01
		
		//check ready
		#if (tag_TRAIN_IF_TIME_OUT_EN==1)
		timeout_start(20000); //20mS time out
		while(reg_REMOTE_STATUS_VALID_ISR_LANE==0 && ((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f) != 0) && !timeout); //get ready?
		timeout_stop;
		if(timeout==1) 
		{
			while(reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE==0);
	
 			request_local_ctrl(0x0c00); //	LOCAL_CTRL_FIELD_LANE[11:10]=11 //terminate				 
			
			goto stop_exit;
		}
		#else
		
		while(reg_REMOTE_STATUS_VALID_ISR_LANE==0 /*&& ((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f) != 0)*/); 
		#endif
	
		#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
		DBG_Printf("\r\n RS: %04x --", reg_REMOTE_STATUS_FIELD_RD_LANE_15_0);
		#endif
		
		{	
			tx_train();
			
			while(reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE==0);
	
			request_local_ctrl(0x0800); //	LOCAL_CTRL_FIELD_LANE[11:10]=10 //complete
		}

 stop_exit:	
		do_rx_apta = 0;
		timeout2 = 1;
		timeout = 1; 
	
		PHY_STATUS = ST_NORMAL; 
#endif
		
}	


