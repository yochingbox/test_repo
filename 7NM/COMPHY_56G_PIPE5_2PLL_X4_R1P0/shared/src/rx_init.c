/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file train_if.c
* \purpose RX_Init module
* \History
*	11/21/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
//#include "cdr_dfe_scheme.h"
//#include "ph_ctrl.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#endif


/**
 * \module RX_Init
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NODE>  
 * \note
*/

void RX_Init(void) BANKING_CTRL {
	
	PHY_STATUS = ST_DTL;

	reg_RX_INIT_DONE_LANE = 0;

	if(lnx_SQ_FW_FILTER_EN_LANE) {
		while(reg_PIN_RX_SQ_OUT_RD_LANE|reg_PIN_RX_SQ_OUT_RD_LANE);
	}
	
    reg_SEL_MU_F_LANE = 0; reg_ANA_RX_SEL_MU_F_LANE = 0;
    //delay(T_2us);
    reg_RESET_DTL_SYNC_LANE = 1;
    reg_RESET_DTL_SYNC_LANE = 0;
    delay(T_2us);
 
    reg_SEL_MU_F_LANE = 1; reg_ANA_RX_SEL_MU_F_LANE = 1;
    delay(Tus);

	reg_INT_RX_INIT_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_INT_RX_INIT_CHG_RISING_ISR_CLEAR_LANE = 0;

    reg_RX_INIT_DONE_LANE = 1;
	
	//set_dfe_cont(1);

	PHY_STATUS = ST_NORMAL;
	
}

