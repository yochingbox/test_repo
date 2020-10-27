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

/******************************************************
 * TX Gx Adjust
 * single function to handle all Tx FIR tap adjustment
*******************************************************/ 

// step num (loop counts)
// order goes: { gn2, gn1, g0, g1 }
// currently g0 is not done in this function so it's a dummy
__code uint8_t TX_GX_STEP_NUM[] = {
	tag_TX_GN2_STEP_NUM,
	tag_TX_GN1_STEP_NUM,
	tag_TX_G0_STEP_NUM,
	tag_TX_G1_STEP_NUM,
};
// F0X selection
__code uint8_t TX_FX_SEL[] = {
	DFE_FX_SEL_FN2,
	DFE_FX_SEL_FN1,
	0,
	DFE_FX_SEL_FP1,	
};
// Target F0X (currently zero-forcing)
__code int8_t TX_FX_TARGET[] = {
	-2,
	0,
	0,
	0,
};
// tap update direction (polarity) - 1 means to reverse
__code uint8_t TX_UPDATE_POLARITY[] = {
	0,
	0,
	0,
	0,
};

void tx_gx_adjust(int8_t x) {
	const int8_t idx = x + 2; // -2 becomes first array index (0)
	uint8_t i;
	int8_t fx;

	switch(x) {
		case -2:
#if _DEBUG
			DBG_PS("\r\n	gn2_adjust");
#endif
			break;
		case -1:
#if _DEBUG
			DBG_PS("\r\n	gn1_adjust");
#endif
			break;
		case 1:
#if _DEBUG
			DBG_PS("\r\n	g1_adjust");
#endif
			break;
		default:
#if _DEBUG
			DBG_PS("\r\n	invalid TxFIR tap");
#endif
	}

	cds_call = CDS_EN_PHASETRAIN2;
	reg_DFE_F0X_SEL_LANE_4_0 = TX_FX_SEL[idx];

	dfe_cdr_phase_opt(); // first CDS (update_gx has its own)
	for(i=0; i<TX_GX_STEP_NUM[idx]; i++) {
		fx = train.f0 - train.f0x;
		DBG_PS("\r\nf(%d) = %d", x, fx);
		fx -= TX_FX_TARGET[idx];
		if(fx==0) {
			DBG_PS("\r\nTarget reached!");
			break; // target reached
		}	
		// +1 increase, -1 decrease, in actual signed value
		fx = (fx < 0) ? +1 : -1;
		DBG_PS("\r\nTap direction = %d", fx);
		switch(x) {
			case -2:
				update_gn2(fx);
				break;
			case -1: 
				update_gn1(fx);
				break;
			case 1:
				update_g1(fx);
				break;
		}
	}
	train2opt();
}

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
	#if _DEBUG
	DBG_Printf("\r\n  (tx_train)");
	#endif
	PHY_STATUS = ST_TXTRAIN;
	
	tx_train_initial();

	while (1)
	{
		if( phy_mode == PCIE ) 
		{
			#if defined _PCIE_BUILD || defined _USB_BUILD
			if( reg_EYE_OPEN_EN_RD_LANE ) {
				if(lnx_DIS_BYPASS_RXTRAIN_IN_FOM_LANE){			
					#ifdef SUPPORT_DUMMY_TRAIN
					if(cmx_TRAIN_SIM_EN) rx_train_dummy();
					else 
					#endif
					rx_train();
				}	
				else 
				{
					cds_call = CDS_EN_DEFAULTPCIE;
					dfe_adaptation();					
				}					
				reg_EYE_OPEN_LANE_5_0 = train.eo;
				req_local_ctrl(1,0,0,0,0);
				
			} 
			else {		
				if(lnx_PCIE_RXTRAIN_ON_BEFORE_DIR_LANE) {
					#ifdef SUPPORT_DUMMY_TRAIN
					if(cmx_TRAIN_SIM_EN) rx_train_dummy();
					else 
					#endif
					rx_train();
				}
				
				cds_call = CDS_EN_DEFAULTPCIE_F0B;
				tx_train_PCIe();
				cds_call = CDS_EN_DEFAULTPCIE;
				
				ctrl_tx_train_done = 1;
				ctrl_rx_train_done = 0;
				break;
			}
			
			#endif //_PCIE_BUILD || defined _USB_BUILD
		}	
		else 
		{
			tx_train_control();
			if (ctrl_tx_train_done)	break;
			tx_ffe_train();	
		}
	}

	tx_train_end();
}

#ifdef SUPPORT_DUMMY_TRAIN
void tx_train_dummy(void) {

	PHY_STATUS = ST_TXTRAIN;

		//update_g0(-2);
		//update_g0(+2);
		update_g1(-1);
		//update_g1(+1);
		update_gn1(+1);
		//update_gn1(+2);
		if(!tx_pam2_en) {
		update_gn2(+1);
		//update_gn2(+1);
		}		
	ctrl_tx_train_done = 1;	
}
#endif

void req_local_ctrl(uint8_t ce, uint8_t c1, uint8_t c0, uint8_t cn1, uint8_t cn2)
{
	bool hit_limit = 0;
	uint8_t remote_status_g;
	
	drv_TXTRAIN_CTRL_PAT = 3;
	drv_TXTRAIN_CTRL_PRESET = ce;
	drv_TXTRAIN_CTRL_C1 = c1;
	drv_TXTRAIN_CTRL_C0 = c0;
	drv_TXTRAIN_CTRL_CN1 = cn1;
	drv_TXTRAIN_CTRL_CN2 = cn2;
	set_remote_tx();

	#if _DEBUG
    DBG_PS("\r\n c1,c0,cn1,cn2=(%d,%d,%d,%d):  ",c1,c0,cn1,cn2);
	#endif

	// -- check min/max
	if(!tx_pam2_en) { //pam4
		if(c0!=0) {
			tx.g0_is_max  = 0; tx.g0_is_min  = 0;				
			remote_status_g = drv_TXTRAIN_STATUS_C0;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(c0==ST_INC) { tx.g0_is_max  = 1; DBG_Printf(" g0max");}
				else if(c0==ST_DEC) { tx.g0_is_min  = 1; DBG_Printf(" g0min");}	
			}			
		}
		if(cn1!=0) {
			tx.gn1_is_max  = 0; tx.gn1_is_min  = 0;
			remote_status_g = drv_TXTRAIN_STATUS_CN1;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(cn1==ST_INC) { tx.gn1_is_max  = 1; DBG_Printf(" gn1max");}
				else if(cn1==ST_DEC) { tx.gn1_is_min  = 1; DBG_Printf(" gn1min"); }		
			}		
		}			
		if(c1!=0) {
			tx.g1_is_max  = 0; tx.g1_is_min  = 0;
			remote_status_g = drv_TXTRAIN_STATUS_C1;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(c1==ST_INC) { tx.g1_is_max  = 1; DBG_Printf(" g1max"); }
				else if(c1==ST_DEC) { tx.g1_is_min  = 1; DBG_Printf(" g1min"); }		
			}		
		}			
		if(cn2!=0) {
			tx.gn2_is_max  = 0; tx.gn2_is_min  = 0;
			remote_status_g = drv_TXTRAIN_STATUS_CN2;
			hit_limit = remote_status_g==2 || remote_status_g==4 || remote_status_g==6;
			if(hit_limit) {
				if(cn2==ST_INC) { tx.gn2_is_max  = 1; DBG_Printf(" gn2max"); }
				else if(cn2==ST_DEC) { tx.gn2_is_min  = 1;	DBG_Printf(" gn2min"); }
			}		
		}		
	}
	else {	//pam2
		tx.g0_is_max  = drv_TXTRAIN_STATUS_C0 == 3;
		tx.g0_is_min  = drv_TXTRAIN_STATUS_C0 == 2;
		tx.gn1_is_max = drv_TXTRAIN_STATUS_CN1 == 3;
		tx.gn1_is_min = drv_TXTRAIN_STATUS_CN1 == 2;
		tx.g1_is_max  = drv_TXTRAIN_STATUS_C1 == 3;
		tx.g1_is_min  = drv_TXTRAIN_STATUS_C1 == 2;
	}

	#if _DEBUG
		DBG_PS("%02x", remote_status_g);
	#endif
}

/****************************************
 * TX Train initial
 * Inputs: 
 *      opt g01n1 setting
 * Outputs:
 *      initialize train and loop cntr
*****************************************/
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
    //DBG_PS("\r\n\r\n++(tx_train_control) begin");
	if ( (tx.num_tx_loop >= tag_TX_MAX_LOOP) || //1
        ( (train.eo >= tag_TX_EO_BYPASS_THRES) && train.saturated==0) ||
				train.level == 4) //tag_TX_EO_BYPASS_THRES=60 //15
	{
		//DBG_PS("\r\n\r\nDone");
		ctrl_tx_train_done = 1;
		tx.num_tx_loop = 0;
		//reg_MCU_DEBUG5_LANE_7_0 = 0x0d;
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
		if( (train.level <= 5) &&
				((train.eo < tag_TX_EO_BYPASS_THRES) || train.saturated))
		{
			if(tag_TX_SWEEP_PRESET_EN)  tx_preset_sweep(); //tag_TX_SWEEP_PRESET_EN=0
			if(tag_TX_ADAPT_G0_EN)      tx_g0_train();     //tag_TX_ADAPT_G0_EN=0
			if(tag_TX_ADAPT_GN1_EN) 	tx_gn1_train();	   //tag_TX_ADAPT_GN1_EN=1
			if(tag_TX_ADAPT_G1_EN)      tx_g1_train(); 		//tag_TX_ADAPT_G1_EN=0
			if(tag_TX_ADAPT_GN2_EN)     tx_gx_adjust(-2);   //tag_TX_ADAPT_GN2_EN=1
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
    //DBG_PS("\r\n====>g0_train<====");
	DBG_PS("\r\n	g0_train");
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

void tx_preset_sweep(void)
{


	int ini_tx_preset_index = train.tx_preset_index;
	int index = 0;
#if _DEBUG
	DBG_PS("\r\n	tx_preset");
#endif
	ctrl_cdr_phase_on = 0;

	while (index <= tag_TX_NUM_TX_PRESET) // while the index is not the last one
	{
		train.tx_preset_index = index; //reg.tx.preset_index_set[index]; // tx preset table mapping
			if (train.tx_preset_index != ini_tx_preset_index)
			{
				// reset TX to another TX preset
				tx_reset(train.tx_preset_index);

				dfe_cdr_phase_opt();
				compare_tx_preset(); // compare the training TX preset
			}

			index++;
		}

		// reset TX to optimal TX preset
		opt2train();
		tx_reset(train.tx_preset_index);
		dfe_cdr_phase_opt();
		update_opt_trx_ffe();
}

void tx_gn1_train(void)
{
    //uint8_t* ptr;
    //ptr = (uint8_t*)&MCU_DEBUG3_LANE; ptr+=2;  //TODO &train_gn1_index,

	#if _DEBUG
	//DBG_PS("\r\n	gn1_train");
	#endif
	
	if(lnx_TX_TRAIN_ALG_SEL_LANE) { //default=0 :adj mode
		
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
	else {
		tx_gx_adjust(-1);
	}	
	
}

void tx_g1_train(void)
{
    //uint8_t* ptr;
    //ptr =( uint8_t*)&MCU_DEBUG3_LANE; ptr++;  //TODO &train_g1_index,
    
	#if _DEBUG
    //DBG_PS("\r\n====>g1_train<====");
	DBG_PS("\r\n	g1_train");
	#endif
	if(lnx_TX_TRAIN_ALG_SEL_LANE) { //default=0 :adj mode
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
	} else {
		tx_gx_adjust(1);
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
    //DBG_PS("\r\n****G1N1_F0T****");
	DBG_PS("\r\n	G1N1_F0T");
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
    //DBG_Printf("\r\n****G1N1_MDP**** opt.f0t=%d, TH=%d",opt.f0t, TH);
    DBG_Printf("\r\nG1N1_MDP opt.f0t=%d, TH=%d",opt.f0t, TH);
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
        //DBG_Printf("\r\n\t#%d: lo=%d hi=%d inx=%d, become_worse=%d, is_min=%d, is_max=%d tx.train_overboost=%d, train.f0t=%d",num_count, idx_lo,idx_hi,(*IDX), tx.become_worse, *IS_MAX, *IS_MIN, tx.train_overboost, train.f0t);
        DBG_Printf("\r\n\t %d: lo=%d hi=%d inx=%d, become_worse=%d, is_min=%d, is_max=%d tx.train_overboost=%d, train.f0t=%d",num_count, idx_lo,idx_hi,(*IDX), tx.become_worse, *IS_MAX, *IS_MIN, tx.train_overboost, train.f0t);
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
 *      X : 0: gn1 1: g1 2: gn2
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

	if(X==1){ // G1
        UTH = tag_TX_F0T_G1UPDATE_THRES;
        OBEN = tag_TX_G1_OVERBOOST_EN;
        OBTH = tag_TX_G1_OVERBOOST_THRES;
        OBUTH = tag_TX_G1_OVERBOOST_UPDATE_THRES;
		Train_Index_is_big = (train.g1_index > opt.g1_index) ? 1:0;
    }else if(X==0){ //GN1
        UTH = tag_TX_F0T_GN1UPDATE_THRES;
        OBEN = tag_TX_GN1_OVERBOOST_EN;
        OBTH = tag_TX_GN1_OVERBOOST_THRES;
        OBUTH = tag_TX_GN1_OVERBOOST_UPDATE_THRES;
		Train_Index_is_big = (train.gn1_index > opt.gn1_index) ? 1:0;
    }else{ //GN2
        UTH = tag_TX_F0T_GN2UPDATE_THRES;
        OBEN = tag_TX_GN2_OVERBOOST_EN;
        OBTH = tag_TX_GN2_OVERBOOST_THRES;
        OBUTH = tag_TX_GN2_OVERBOOST_UPDATE_THRES;
		Train_Index_is_big = (train.gn2_index > opt.gn2_index) ? 1:0;
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
   //DBG_Printf("\r\n++(compare_g1n1) f0t=%d train_ob=%d, opt_ob=%d, train_fn1=%d, opt_fn1=%d",train.f0t,tx.train_overboost,tx.opt_overboost, train.fn1, opt.fn1 );
   if(X==2)
	DBG_Printf("\r\n  (compare_g1n1) f0t=%d train_ob=%d, opt_ob=%d, train_fn1=%d, opt_fn1=%d",train.f0t,tx.train_overboost,tx.opt_overboost, train.fn1, opt.fn1 );
   else 
	DBG_Printf("\r\n  (compare_g1n1) f0t=%d train_ob=%d, opt_ob=%d, train_fn2=%d, opt_fn2=%d",train.f0t,tx.train_overboost,tx.opt_overboost, train.fn2, opt.fn2 );
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


/****************************************
 * TX Preset Sweep
 * Input:
 *      index = train.tx_preset_index
*****************************************/
void tx_reset(uint8_t index) {
	#ifdef _LAB
	DBG_Printf("\r\n	tx_reset:%x", index);
	#endif
	
	req_local_ctrl(index, 0, 0, 0, 0);
}

void update_g0(int8_t update) 
{           
	int8_t cnt = 16;
	#if _DEBUG
    //DBG_Printf("\n\r++(update_g0) update= %d",update);
	#endif
	
	if (update > 0 && tx.g0_is_max==0)
	{
		while(cnt-->0){
			if(update > 0 &&  tx.g0_is_max==0){
				//g0_request = 1;
				req_local_ctrl(CE_NORMAL, 0, 1, 0, 0);
				
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
				req_local_ctrl(CE_NORMAL, 0, 2, 0, 0);
						
				if(tx.g0_is_min==0 || cmx_PIPE4_EN==0) {
					update ++; ////DBG_Pritnf("-");
					train.g0_index --;
				}		
			}
			else 
			{
                //DBG_Printf("g0min");
				dfe_cdr_phase_opt();
               break;
            }
        }
    } 
}

void update_gn1(int8_t update)
{             
	int8_t cnt = 16;
	#if _DEBUG
	DBG_Printf("\n\r  (update_gn1) update= %d",update);
	#endif

	if (update > 0 && tx.gn1_is_max==0)
	{
		while(cnt-->0){		
			#if _DEBUG
			//DBG_Printf("\n\r update=%d, tx.gn1_is_max=%d",update, tx.gn1_is_max);
			#endif
			if(update >0 && tx.gn1_is_max==0){
				req_local_ctrl(CE_NORMAL, 0, 0, 1, 0);		
								
				if(tx.gn1_is_max==0 || cmx_PIPE4_EN==0)
				{
					update --; //DBG_Printf(" +");
					train.gn1_index ++;
					train.g0_index += tag_TX_TRAIN_P2P_HOLD;
					if(tag_TX_TRAIN_P2P_HOLD)
						req_local_ctrl(CE_NORMAL, 0, 1, 0, 0);		
				}
			}
			else {
				dfe_cdr_phase_opt();
				DBG_Printf(" g-1max");
				break;
			}
		}
				
	}else if (update < 0 && tx.gn1_is_min==0){ 
		while(cnt-->0) 
		{
			if(update <0 && tx.gn1_is_min==0)
			{
				if(tag_TX_TRAIN_P2P_HOLD)
					req_local_ctrl(CE_NORMAL, 0, 2, 0, 0);		
				req_local_ctrl(CE_NORMAL, 0, 0, 2, 0);		
	
				if(tx.gn1_is_min==0 || cmx_PIPE4_EN==0) {
					update ++; //DBG_Printf("-");
					train.gn1_index --;
					train.g0_index -= tag_TX_TRAIN_P2P_HOLD ? 1 : 0;
				}
				else {
					// revert g0
					req_local_ctrl(CE_NORMAL, 0, 1, 0, 0);		
					break;
				}
			}
			else {	
                //train_gn1_index ++;
				dfe_cdr_phase_opt();
                DBG_Printf(" g-1min");
                break;
                }
				
		}
	} 
}

void update_g1(int8_t update)
{            
	int8_t cnt = 16;
 	#if _DEBUG
	DBG_Printf("\n\r  (update_g1) update= %d",update);
	#endif
 	
	if (update > 0 && tx.g1_is_max==0)
	{
		while(cnt-->0){
			#if _DEBUG
			//DBG_Printf("\n\r update=%d, tx.g1_is_max=%d",update, tx.g1_is_max);
			#endif
			if(update >0 && tx.g1_is_max==0){
				req_local_ctrl(CE_NORMAL, 1, 0, 0, 0);		

				if(tx.g1_is_max==0 || cmx_PIPE4_EN==0)
				{
					update--; //DBG_Printf(" +");
					train.g1_index ++;
					train.g0_index += tag_TX_TRAIN_P2P_HOLD;
					if(tag_TX_TRAIN_P2P_HOLD)
						req_local_ctrl(CE_NORMAL, 0, 1, 0, 0);		
				}
				else break;
			}
			else {
				dfe_cdr_phase_opt();
				break;
			}
		}
	} else if (update < 0 && tx.g1_is_min==0){ 
		while(cnt-->0) 
		{
			if(update <0 && tx.g1_is_min==0)
			{
				if(tag_TX_TRAIN_P2P_HOLD)
					req_local_ctrl(CE_NORMAL, 0, 2, 0, 0);		
				req_local_ctrl(CE_NORMAL, 2, 0, 0, 0);		

				if(tx.g1_is_min==0 || cmx_PIPE4_EN==0) {
					update ++; //DBG_Printf("-");
					train.g1_index --;
					train.g0_index -= tag_TX_TRAIN_P2P_HOLD ? 1 : 0;
				}
				else {
					// revert g0
					req_local_ctrl(CE_NORMAL, 0, 1, 0, 0);		
					break;
				}
			}
			else {		
				DBG_Printf(" g1min");
				dfe_cdr_phase_opt();
				break;
			}
		}
	} 
}

void update_gn2(int8_t update)
{             
	int8_t cnt = 16;
	#if _DEBUG
	DBG_Printf("\n\r  (update_gn2) update= %d",update);
	#endif

	if (update > 0 && tx.gn2_is_max==0)
	{
		while(cnt-->0){		
			#if _DEBUG
			//DBG_Printf("\n\r update=%d, tx.gn2_is_max=%d",update, tx.gn2_is_max);
			#endif
			if(update > 0 && tx.gn2_is_max==0){
				if(tag_TX_TRAIN_P2P_HOLD)
					req_local_ctrl(CE_NORMAL, 0, 2, 0, 0);		
				req_local_ctrl(CE_NORMAL, 0, 0, 0, 1);		

				if(tx.gn2_is_max==0 || cmx_PIPE4_EN==0)
				{
					update--; //DBG_Printf(" +");
					train.gn2_index ++;
					train.g0_index -= tag_TX_TRAIN_P2P_HOLD;
				}
				else {
					// revert g0
					req_local_ctrl(CE_NORMAL, 0, 1, 0, 0);		
					break;
				}
			}
			else {
				dfe_cdr_phase_opt();
				DBG_Printf(" g-2max");
				break;
			}
		}
	} else if (update < 0 && tx.gn2_is_min==0) { 
		while(cnt-->0) {
			if(update < 0 && tx.gn2_is_min==0){
				req_local_ctrl(CE_NORMAL, 0, 0, 0, 2);		

				if(tx.gn2_is_min==0 || cmx_PIPE4_EN==0)
				{
					update++; //DBG_Printf(" +");
					train.gn2_index--;
					if(tag_TX_TRAIN_P2P_HOLD) {
						req_local_ctrl(CE_NORMAL, 0, 1, 0, 0);		
						train.g0_index++;
					}
				}
				else break; 
			} 
			else {	
				dfe_cdr_phase_opt();
                DBG_Printf(" g-2min");
                break;
                }
				
		}
	} 
}

//--------------------------------------

#if 0
void Send_ctrl_to_tx(uint16_t dat) BANKING_CTRL
{
	#if _DEBUG || _DBG_TRXTRAIN
 	DBG_Printf("\r\n++(Send_ctrl_to_tx) : %x", dat);
	#endif
	
		//tx_ctrl_stat = _EXIT_SUCCESS;
				
		//remote_status_in = 0;			
		//#ifdef SUPPORT_APTA_TX_TRAIN
		//if(do_rx_apta==1 && apta_rm_state_err==1) { 
		//	request_local_ctrl(0x0400);
		//	
		//	//check ack
		//	if(get_tx_status(0)) {
		//		tx_ctrl_stat = _EXIT_FAIL;
		//		return;
		//	}	
		//	
		//	apta_rm_state_err = 0;
		//	
		//}
		//#endif

		#ifdef _PCIE_USB_BUILD
		if( cmx_PIPE4_EN && reg_EYE_OPEN_EN_RD_LANE ) {
			reg_EYE_OPEN_LANE_5_0 = train.eo;
			//reg_LOCAL_CTRL_FIELD_FORCE_LANE = 1;
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 1; 
			reg_LOCAL_CTRL_FIELD_VALID_LANE = 0;			
		}
		else 
		#endif //_PCIE_USB_BUILD	
		{
			if(request_local_ctrl(dat)) {
				//tx_ctrl_stat = _EXIT_FAIL;
				//return;		
			}	
		}
		
		//check ack
		if(get_tx_status(1)) {
			//tx_ctrl_stat = _EXIT_FAIL;
			//return;
		}	
		
		if( (reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f)!=0  && tx_ctrl_stat != _EXIT_FAIL) { // get !0?

			//#ifdef SUPPORT_APTA_TX_TRAIN
			//if((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f)==0x3f && do_rx_apta==1) {
			//	apta_rm_state_err = 1;
			//	return;
			//}
			//#endif
			
			// -- check min/max
			tx.g0_is_max  = reg_REMOTE_STATUS_G0_LANE_1_0 == 3;
			tx.g0_is_min  = reg_REMOTE_STATUS_G0_LANE_1_0 == 2;
			tx.gn1_is_max = reg_REMOTE_STATUS_GN1_LANE_1_0 == 3;
			tx.gn1_is_min = reg_REMOTE_STATUS_GN1_LANE_1_0 == 2;
			tx.g1_is_max  = reg_REMOTE_STATUS_G1_LANE_1_0 == 3;
			tx.g1_is_min  = reg_REMOTE_STATUS_G1_LANE_1_0 == 2;
			
			#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
			//DBG_Printf(" REMOTE STATUS = gn1:%x g0:%x g1:%x", reg_REMOTE_STATUS_GN1_LANE_1_0, reg_REMOTE_STATUS_G0_LANE_1_0, reg_REMOTE_STATUS_G1_LANE_1_0);
			//DBG_Printf(" LS(%02x%02x)-%02x", reg_MCU_DEBUG_LANE_31_0_b1,reg_MCU_DEBUG_LANE_31_0_b0, reg_MCU_DEBUG7_LANE_7_0);
			#endif
			
			if(tag_TX_TRAIN_P2P_HOLD){
				tx.gn1_is_max = tx.gn1_is_max /*|| tx.g0_is_max*/; //HR: DSP & P4 PHY team requestm but current firmware don't want to apply.
				tx.gn1_is_min = tx.gn1_is_min || tx.g0_is_min;
				tx.g1_is_max  = tx.g1_is_max  || tx.g0_is_max;
				tx.g1_is_min  = tx.g1_is_min  || tx.g0_is_min;
			}
		}
		//else 
		//	tx_ctrl_stat = _EXIT_FAIL;
		
		//#ifdef _SATA_SERDES_BUILD
		////send hold
		//if(cmx_PIPE4_EN==0) // && do_rx_apta==0) 
		//{
		//	if(request_local_ctrl(0)!= _EXIT_SUCCESS) {
		//		//tx_ctrl_stat = _EXIT_FAIL;
		//	}	
		//	
		//	//check ready
		//	if(get_tx_status(0)) {
		//		//tx_ctrl_stat = _EXIT_FAIL;
		//	}	
		//	if((device_remote_status_bits_lo&0x3f)!=0 ){ // get 0?
		//		//tx_ctrl_stat = _EXIT_FAIL;
		//	}
		//	
		//	#ifdef _SUPPORT_TRAIN_IF_RX_DEBUG
		//	DBG_Printf("\r\n[R] RS: %04x --", reg_REMOTE_STATUS_FIELD_RD_LANE_15_0);
		//	#endif		
		//	
		//}
		//#endif //_SATA_SERDES_BUILD
	//timeout = 0;

} 

#endif

