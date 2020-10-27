#include "common.h"
#include "driver.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#endif

void drv_tx_phy_mode_cfg(void) BANKING_CTRL {
 if (phy_mode == PCIE || phy_mode == USB) {
         reg_LINK_TRAIN_MODE_LANE = 0x1;
         }
}

#ifdef DRV_TX_FUNC_CFG_V0

void drv_tx_train_if_cfg(void) BANKING_CTRL {

	if(reg_TX_TRAIN_PAT_SEL_LANE_1_0 == 0x1 || reg_TX_TRAIN_PAT_SEL_LANE_1_0 == 0x2) {
		reg_TX_TRAIN_PAT_NUM_LANE_9_0_b0 = 0x88;
		reg_TX_TRAIN_PAT_NUM_LANE_9_0_b1 = 0x0;
		
	} else if(reg_TX_TRAIN_PAT_SEL_LANE_1_0 == 0x3) {
		reg_TX_TRAIN_PAT_NUM_LANE_9_0_b0 = 0x8;
		reg_TX_TRAIN_PAT_NUM_LANE_9_0_b1 = 0x2;
		
	}
        reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 0x1;
        reg_TX_TRAIN_PAT_MODE_LANE = 0x0;
        reg_TX_TRAIN_PAT_TOGGLE_LANE = 0x0;


}
#else

void drv_tx_train_if_cfg(void) BANKING_CTRL {

// pam2
        if (reg_ETHERNET_MODE_TX_LANE_1_0 == 0x1) {
                reg_TRAIN_TX_SEL_BITS_LANE = 0x1;
                reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 0x1;
                reg_TX_TRAIN_PAT_MODE_LANE = 0x0;
                reg_TX_TRAIN_PAT_NUM_LANE_9_0_b0 = 0x88;
                reg_TX_TRAIN_PAT_NUM_LANE_9_0_b1 = 0x0;
                reg_TX_TRAIN_PAT_TOGGLE_LANE = 0x0;
// 56G pam4 and 100G pam4
        } else if(reg_ETHERNET_MODE_TX_LANE_1_0 == 0x2 || reg_ETHERNET_MODE_TX_LANE_1_0 == 0x3) {
                reg_TRAIN_TX_SEL_BITS_LANE = 0x1;     
                reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 0x1;
                reg_TX_TRAIN_PAT_MODE_LANE = 0x0;
                reg_TX_TRAIN_PAT_NUM_LANE_9_0_b0 = 0x8;
                reg_TX_TRAIN_PAT_NUM_LANE_9_0_b1 = 0x2;
                reg_TX_TRAIN_PAT_TOGGLE_LANE = 0x0;

        }
         else if(reg_ETHERNET_MODE_TX_LANE_1_0 == 0x0) {              
               reg_TRAIN_TX_SEL_BITS_LANE = 0x0;
       }
}

#endif


//Call it after speed table load
void drv_tx_func_cfg(void) BANKING_CTRL {

	drv_tx_phy_mode_cfg();
	drv_tx_train_if_cfg();

}

