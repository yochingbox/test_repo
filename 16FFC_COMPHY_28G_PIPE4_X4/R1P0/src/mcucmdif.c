/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file mcucmdif.c
* \purpose MCU command based interface
* \History
*	11/30/2017 Created
*/
#include "common.h"

#define CMD_STATUS_OK 	0x01
#define INVALID_CMD 	0x02
#define INVALID_INPUT 	0x04

#define CMD_SET_TX_SLEW_RATE 	0x01
#define CMD_GET_TX_SLEW_RATE 	0x02
#define CMD_SET_TX_PRE_PO_EM	0x03
#define CMD_GET_TX_PRE_PO_EM 	0x04
#define CMD_RELOAD_GEN_TABLE 	0x05

#ifdef SUPPORT_CMD_IF
void cmdif_monitor(void)
{
	uint8_t inparam_b3, inparam_b2, inparam_b1, inparam_b0;	// 4 bytes of the 32-bit input parameter
	if ( lnx_MCU_CMD_ID_LANE_15_0_b1 == 0 ) { // Only group 0 is defined
		lnx_MCU_CMD_STATUS_LANE_7_0 = CMD_STATUS_OK; // Initialize to OK status
		// Get input parameter
		inparam_b3 = lnx_MCU_CMD_DATA_IN_LANE_31_0_b3;
		inparam_b2 = lnx_MCU_CMD_DATA_IN_LANE_31_0_b2;
		inparam_b1 = lnx_MCU_CMD_DATA_IN_LANE_31_0_b1;
		inparam_b0 = lnx_MCU_CMD_DATA_IN_LANE_31_0_b0;

		switch ( lnx_MCU_CMD_ID_LANE_15_0_b0 ) {
		case CMD_SET_TX_SLEW_RATE:
			if ( inparam_b3 > max_gen )
				lnx_MCU_CMD_STATUS_LANE_7_0 = INVALID_INPUT;
			else {
				speedtable[inparam_b3][spdoft_slewrate_en] = inparam_b2;
				speedtable[inparam_b3][spdoft_slewctrl1] = inparam_b1;
				speedtable[inparam_b3][spdoft_slewctrl0] = inparam_b0;
			}
			break;
		case CMD_GET_TX_SLEW_RATE:
			if ( inparam_b3 > max_gen )
				lnx_MCU_CMD_STATUS_LANE_7_0 = INVALID_INPUT;
			else {
				lnx_MCU_CMD_DATA_RET_LANE_31_0_b3 = inparam_b3;
				lnx_MCU_CMD_DATA_RET_LANE_31_0_b2 = speedtable[inparam_b3][spdoft_slewrate_en];
				lnx_MCU_CMD_DATA_RET_LANE_31_0_b1 = speedtable[inparam_b3][spdoft_slewctrl1];
				lnx_MCU_CMD_DATA_RET_LANE_31_0_b0 = speedtable[inparam_b3][spdoft_slewctrl0];
			}
			break;
		case CMD_SET_TX_PRE_PO_EM:
			if ( inparam_b3 > max_gen )
				lnx_MCU_CMD_STATUS_LANE_7_0 = INVALID_INPUT;
			else {
				speedtable[inparam_b3][spdoft_tx_em_pre_en_lane] = ( inparam_b1 & 0x10 ) >> 4;
				speedtable[inparam_b3][spdoft_tx_em_pre_ctrl_lane] = inparam_b1 & 0x0F;
				speedtable[inparam_b3][spdoft_tx_em_po_en_lane] = ( inparam_b0 & 0x10 ) >> 4;
				speedtable[inparam_b3][spdoft_tx_em_po_ctrl_lane] = inparam_b0 & 0x0F;
			}
			break;
		case CMD_GET_TX_PRE_PO_EM:
			if ( inparam_b3 > max_gen )
				lnx_MCU_CMD_STATUS_LANE_7_0 = INVALID_INPUT;
			else {
				lnx_MCU_CMD_DATA_RET_LANE_31_0_b3 = inparam_b3;
				lnx_MCU_CMD_DATA_RET_LANE_31_0_b2 = ( speedtable[inparam_b3][spdoft_tx_em_ctrl_reg_en_lane] << 4 ) |
						speedtable[inparam_b3][spdoft_tx_em_ctrl_pipe_sel_lane];
				lnx_MCU_CMD_DATA_RET_LANE_31_0_b1 = ( speedtable[inparam_b3][spdoft_tx_em_pre_en_lane] << 4 ) |
						speedtable[inparam_b3][spdoft_tx_em_pre_ctrl_lane];
				lnx_MCU_CMD_DATA_RET_LANE_31_0_b0 = ( speedtable[inparam_b3][spdoft_tx_em_po_en_lane] << 4 ) |
						speedtable[inparam_b3][spdoft_tx_em_po_ctrl_lane];

			}
			break;
		case CMD_RELOAD_GEN_TABLE:
			loadspeedtbl_gen();
			break;
		default:
			lnx_MCU_CMD_STATUS_LANE_7_0 = INVALID_CMD;
			break;
		}
	}
	else // not defined command group
		lnx_MCU_CMD_STATUS_LANE_7_0 = INVALID_CMD;

	lnx_MCU_CMD_REQ_LANE = 0;	// Clear the command request
}

#endif // SUPPORT_CMD_IF

