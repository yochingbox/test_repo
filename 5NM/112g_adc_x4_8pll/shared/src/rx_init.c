/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file rx_init.c
* \purpose RX_Init module
* \History
*	11/21/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
//#include "cdr_dfe_scheme.h"
//#include "ph_ctrl.h"

/**
 * \module RX_Init
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NODE>  
 * \note
*/

void RX_Init(void) {
	
	PHY_STATUS = ST_DTL;

	reg_RX_INIT_DONE_LANE = 0;

	if (cmx_BYPASS_RX_INIT || TRAIN_SIM_EN) {
		reg_DTL_RST_SYNC_LANE = 0;
		delay(T_3us);
	}
	else {
		// If data rates <= 5Gbps, call the drv_cds.
		if ((gen_rx <= 9) || (gen_rx == 46)) {
			drv_cds(cds_table[CDS_EN_RXINIT]);
		} else {
			delay(T_p125us);
		}
	}

	reg_RX_INIT_DONE_LANE = 1;

	PHY_STATUS = ST_NORMAL;
}

