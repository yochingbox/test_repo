/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \History
*	2020/04/08	Yung-Hung Chen	Initial version
*/
#include "common.h"
/*#ifdef USE_BANKING*/
/*#pragma codeseg BANK1*/
/*#endif*/

#if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
void drv_cmd_datapath(void) BANKING_CTRL {
  uint8_t code0, code1, ctrl;

  code1 = mcu_remote_command_b2;
  code0 = mcu_remote_command_b1;
  ctrl = mcu_remote_command_b0;
  // din0 = mcu_remote_status_b0;
  // din1 = mcu_remote_status_b1;

switch(code1){
    case 0x0:
        switch(code0){  
	    	case 0x0: 
	    		reg_TXD_INV_LANE             = ctrl & 0x01;
                break;
	    	case 0x1: 
	    		reg_TXDATA_GRAY_CODE_EN_LANE = ctrl & 0x01;
                break;
	    	case 0x2: 
	    		reg_TXDATA_PRE_CODE_EN_LANE  = ctrl & 0x01;
                break;
	    	case 0x3: 
	    		reg_TXD_MSB_LSB_SWAP_LANE    = ctrl & 0x01;
                break;
	    	case 0x4: 
	    		reg_RXD_INV_LANE             = ctrl & 0x01;
                break;
	    	case 0x5: 
	    		reg_RXDATA_GRAY_CODE_EN_LANE = ctrl & 0x01;
                break;
	    	case 0x6: 
	    		reg_RXDATA_PRE_CODE_EN_LANE  = ctrl & 0x01;
                break;
	    	case 0x7: 
	    		reg_RXD_MSB_LSB_SWAP_LANE    = ctrl & 0x01;
	    		break;
        }
        break;
    case 0x1:
			reg_RX_DATASYNC_START_LANE = 1;
                        //reg_MCU_DEBUG2_LANE_7_0 = 1;
                        while(!reg_RX_DATASYNC_DONE_LANE);
                        //reg_MCU_DEBUG2_LANE_7_0 = 2;
			reg_RX_DATASYNC_START_LANE = 0;
                        //reg_MCU_DEBUG2_LANE_7_0 = 3;
                        while(reg_RX_DATASYNC_DONE_LANE);
                        //reg_MCU_DEBUG2_LANE_7_0 = 4;
			break;
}

  return;
}
#endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
