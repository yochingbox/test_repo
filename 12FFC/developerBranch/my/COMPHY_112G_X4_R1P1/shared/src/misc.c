/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file misc.c
* \purpose Miscellaneous functions
* \History
*	10/13/2015 Heejeong Ryu		Initial 
* If a function is placed here for memory reasons, please specify the file it supposed to be in.
*/
#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
//#pragma codeseg BANK0
//#pragma constseg BANK0
#endif

// cal_top.c
// For slumber wakeup
void turn_on_cont_cal(void) BANKING_CTRL
{
	// turn off PLL cal at last
    reg_LCPLL_DCC_EN_LANE = 1;
    reg_LCPLL_DCC_CAL_EN_LANE = 1;
	reg_PLL_DCC_TOP_CONT_START_LANE = 1;
	// Hui Zhao: lower the risk in temperature ramping
	//reg_PLL_AMP_TOP_CONT_START_LANE = 1;

    reg_LCPLL_TEMPC_EXT_EN_LANE = 0; //need to set LCPLL_TEMPC_EXT_EN_LANE to 0 after pll done with calib
	reg_LCPLL_TEMPC_CAL_EN_LANE = 1; //this calibration is not realized in digital unified core. Instead, it is specially designed by Xin Liu (Beijing office)
	
	Cal_Cont();
}

void turn_off_cont_cal(void) BANKING_CTRL
{
	// revert order of turn_on_cont_cal
	if(reg_RX_EOM_TOP_CONT_START_LANE){
		reg_RX_EOM_TOP_CONT_START_LANE = 0;
		while(!reg_RX_EOM_TOP_CONT_DONE_LANE);
	}
	if(reg_RX_CLK_TOP_CONT_START_LANE){
		reg_RX_CLK_TOP_CONT_START_LANE = 0;
		while(!reg_RX_CLK_TOP_CONT_DONE_LANE);
	}
	if(reg_DLL_TOP_CONT_START_LANE){
		reg_DLL_TOP_CONT_START_LANE = 0;
		while(!reg_DLL_TOP_CONT_DONE_LANE);
	}
	if(reg_TX_ALIGN90_DCC_TOP_CONT_START_LANE){
		reg_TX_ALIGN90_DCC_TOP_CONT_START_LANE = 0;
		while(!reg_TX_ALIGN90_DCC_TOP_CONT_DONE_LANE);
	}
	// turn off PLL cal at last in sequence
	if(reg_LCPLL_TEMPC_CAL_EN_LANE){
		reg_LCPLL_TEMPC_CAL_EN_LANE = 0;
		while(!reg_LCPLL_TEMPC_CAL_DONE_LANE);
	}
	if(reg_PLL_AMP_TOP_CONT_START_LANE){
		reg_PLL_AMP_TOP_CONT_START_LANE = 0;
		while(!reg_PLL_AMP_TOP_CONT_DONE_LANE);
	}
	if(reg_PLL_DCC_TOP_CONT_START_LANE){
		reg_PLL_DCC_TOP_CONT_START_LANE = 0;
		while(!reg_PLL_DCC_TOP_CONT_DONE_LANE);
	}	
	
/*	reg_TRX_DIG_CAL_CLK_RST_BOT_LANE = 1;*/
/*	reg_TRX_DIG_CAL_CLK_RST_BOT_LANE = 0;*/
/*	reg_TRX_DIG_CAL_CLK_RST_TOP_LANE = 1;*/
/*	reg_TRX_DIG_CAL_CLK_RST_TOP_LANE = 0;*/
/*	reg_CMN_DIG_CAL_CLK_RST = 1;*/
/*	reg_CMN_DIG_CAL_CLK_RST = 0;*/
	
/*	reg_PLL_AMP_TOP_CONT_START_LANE = 0;*/
/*	reg_PLL_DCC_TOP_CONT_START_LANE = 0;*/
/*	reg_TX_ALIGN90_DCC_TOP_CONT_START_LANE = 0;*/
/*	reg_DLL_TOP_CONT_START_LANE = 0;*/
/*	reg_RX_CLK_TOP_CONT_START_LANE = 0;*/
/*	reg_RX_EOM_TOP_CONT_START_LANE = 0;*/
/*	reg_LCPLL_TEMPC_CAL_EN_LANE = 0;*/

	//while(!reg_PLL_DCC_TOP_CONT_DONE_LANE || !reg_PLL_AMP_TOP_CONT_DONE_LANE || !reg_RX_EOM_TOP_CONT_DONE_LANE || !reg_TX_ALIGN90_DCC_TOP_CONT_DONE_LANE || !reg_DLL_TOP_CONT_DONE_LANE || !reg_RX_CLK_TOP_CONT_DONE_LANE || !reg_LCPLL_TEMPC_CAL_DONE_LANE);
}

// rx_train.c
void vref_shift_adj() BANKING_CTRL{
	// 20200203 Grace: Disable VREF_resolution train for qr
	if(rate_mode==QR){
		// 112G algorithm
		int8_t distance = get_vref_distance();
		int8_t opt_vref_shift = reg_VREF_SHIFT_LANE_1_0;
		int8_t opt_distance = distance;
		uint8_t i = 0;
		for(i=0;i<2;i++){
			switch(i){
				case 0: cmx_MCU_DEBUG_CMN_13_7_0 = distance;break;
				case 1: cmx_MCU_DEBUG_CMN_14_7_0 = distance;break;
			}
			if(abs(distance)<=13){
				break;
			}else{
				if(distance<0){
					reg_VREF_SHIFT_LANE_1_0 -= 1;
				}else{
					reg_VREF_SHIFT_LANE_1_0 += 1;
				}
				cds_call=CDS_EN_RECOVER;
				ctrl_cdr_phase_on = 0;
				dfe_adaptation();
				
				//if(i==0)check_pause_state(XXX);
				//if(i==1)check_pause_state(XXX);
			}
			distance = get_vref_distance();
			if(abs(distance)<abs(opt_distance)){
				opt_distance = distance;
				opt_vref_shift = reg_VREF_SHIFT_LANE_1_0;
			}
		}
		reg_VREF_SHIFT_LANE_1_0 = opt_vref_shift;
		cds_call=CDS_EN_RECOVER;
		ctrl_cdr_phase_on = 0;
		dfe_adaptation();
		
		//check_pause_state(XXX);
	}
}



