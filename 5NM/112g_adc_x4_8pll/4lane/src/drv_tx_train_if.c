
#include "common.h"
#include "driver.h"


#ifdef DRV_TX_FUNC_CFG_V0

void train_if_init() {

	// -- clear previous REG for abnormal quit
        reg_PIN_TX_TRAIN_COMPLETE_LANE = 0;
        reg_PIN_TX_TRAIN_FAILED_LANE = 0;
        reg_LOCAL_STATUS_FM_REG_EN_LANE = 0;

	reg_INT_TX_TRAIN_COMPLETE_LANE = 0;
	reg_INT_TX_TRAIN_FAILED_LANE = 0;
	reg_INT_LOCAL_CTRL_REQ_LANE = 0;
	reg_INT_LOCAL_CTRL_RESET_LANE = 0;
	reg_INT_TX_PRESET_INDEX_LANE_3_0 = 0;
	reg_INT_LOCAL_CTRL_G0_LANE_1_0 = 0;
	reg_INT_LOCAL_CTRL_G1_LANE_1_0 = 0;
	reg_INT_LOCAL_CTRL_GN1_LANE_1_0 = 0;
//	reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 0; 
//	reg_INT_LOCAL_CTRL_G_LANE_1_0 = 0;
//	reg_INT_LOCAL_CTRL_PAT_LANE_1_0 = 3;
	reg_STATUS_DET_TIMEOUT_ISR_CLEAR_LANE = 0;
	drv_TXTRAIN_STATUS_C0 = 0;
	drv_TXTRAIN_STATUS_C1 = 0;
	drv_TXTRAIN_STATUS_CN1 = 0;
	drv_TXTRAIN_STATUS_CN2 = 0;
	drv_TXTRAIN_STATUS_CN3 = 0;

       reg_LINK_TRAIN_MODE_LANE = 0x0;
       reg_DET_BYPASS_LANE = 0;

       // The following portion is not needed if it is PCIe mode
       // If reg_AUTO_FORCE_DIS_RX_LANE = 0, HW will take care of force_pll_ready_t/rx and force_sel_bits_t/rx
       // Default for 7nm - HW disable
       //
    if(phy_mode != PCIE && phy_mode != USB && reg_AUTO_FORCE_DIS_RX_LANE ) {


       // wait for PIN_TX_TRAIn_ENABLE
       //while((reg_MCU_DEBUGA_LANE_7_0=0xC9)&&!reg_TX_TRAIN_ENABLE_RD_LANE);
       // check for tx_train_enable = 1;
       wait_for(reg_TX_TRAIN_ENABLE_RD_LANE,1);

       // set force pll ready tx/rx
       reg_FORCE_PLL_READY_RX_LANE = 1;
       reg_FORCE_PLL_READY_TX_LANE = 1;

       // wait for PIN_PLL_READY_T/RX go to low
       //while((reg_MCU_DEBUGA_LANE_7_0=0xCA)&&reg_PLL_READY_RX_LANE || reg_PLL_READY_TX_LANE);
       wait_for(!(reg_PLL_READY_RX_LANE || reg_PLL_READY_TX_LANE),0);

      // set force sel_bits tx/rx 
      reg_FORCE_SEL_BITS_RX_LANE = 1;
      reg_FORCE_SEL_BITS_TX_LANE = 1;


	  #ifndef _56G_7NM
      // THE FOLLOWING "WHILE" IS ONLY FOR 112G. 
      // check for 8bit clock or 10bit clock ready
      // 56G CAN SKIP IT because there is no 8bit/10bit clock ready, just wait for 4 clk cycle delay
      //
      if (reg_TRAIN_RX_SEL_BITS_LANE)
      {
         //while((reg_MCU_DEBUGA_LANE_7_0=0xCB)&&!reg_CLK_8BIT_READY_RD_LANE);
         wait_for(reg_CLK_8BIT_READY_RD_LANE,1);
      }
      else
      {
         //while((reg_MCU_DEBUGA_LANE_7_0=0xCC)&&!reg_CLK_10BIT_READY_RD_LANE);
         wait_for(reg_CLK_10BIT_READY_RD_LANE,1);
      }
	  #endif
	 
      // enable pat_cnt
      reg_FORCE_TX_TRAIN_PAT_RX_EN_LANE = 1;
	} 


      reg_FRAME_DET_TIMEOUT_ISR_CLEAR_LANE = 1;
      reg_TRX_TRAIN_TIMEOUT_ISR_CLEAR_LANE = 1;
      reg_FRAME_DET_TIMEOUT_ISR_CLEAR_LANE = 0;
      reg_TRX_TRAIN_TIMEOUT_ISR_CLEAR_LANE = 0;

}


#else

void train_if_init() {

	// -- clear previous REG for abnormal quit
        reg_PIN_TX_TRAIN_COMPLETE_LANE = 0;
        reg_PIN_TX_TRAIN_FAILED_LANE = 0;
        reg_LOCAL_STATUS_FM_REG_EN_LANE = 0;
        reg_TRAIN_PIN_FORCE_ERR_EN_LANE = 0;
        reg_TRAIN_PIN_FORCE_EN_LANE = 0;
	reg_INT_TX_TRAIN_COMPLETE_LANE = 0;
	reg_INT_TX_TRAIN_FAILED_LANE = 0;
	reg_INT_LOCAL_CTRL_REQ_LANE = 0;
	reg_INT_LOCAL_CTRL_RESET_LANE = 0;
	reg_INT_TX_PRESET_INDEX_LANE_3_0 = 0;
	reg_INT_LOCAL_CTRL_G0_LANE_1_0 = 0;
	reg_INT_LOCAL_CTRL_G1_LANE_1_0 = 0;
	reg_INT_LOCAL_CTRL_GN1_LANE_1_0 = 0;
//	reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 0; 
//	reg_INT_LOCAL_CTRL_G_LANE_1_0 = 0;
//	reg_INT_LOCAL_CTRL_PAT_LANE_1_0 = 3;
	reg_STATUS_DET_TIMEOUT_ISR_CLEAR_LANE = 0;
	drv_TXTRAIN_STATUS_C0 = 0;
	drv_TXTRAIN_STATUS_C1 = 0;
	drv_TXTRAIN_STATUS_CN1 = 0;
	drv_TXTRAIN_STATUS_CN2 = 0;
	drv_TXTRAIN_STATUS_CN3 = 0; 

       reg_LINK_TRAIN_MODE_LANE = 0x0;
       reg_DET_BYPASS_LANE = 0;

       // The following portion is not needed if it is PCIe mode
       // If reg_AUTO_FORCE_DIS_RX_LANE = 0, HW will take care of force_pll_ready_t/rx and force_sel_bits_t/rx
       // Default for 7nm - HW enable
      //
       //
    if(phy_mode != PCIE && phy_mode != USB && reg_AUTO_FORCE_DIS_RX_LANE) { // && reg_TRAIN_RXCLK_SWITCH_EN_LANE ) {

       // check if tx_train_enable is high
       wait_for(reg_TX_TRAIN_ENABLE_RD_LANE,1);

       // set force pll ready tx/rx
       reg_FORCE_PLL_READY_RX_LANE = 1;
       reg_FORCE_PLL_READY_TX_LANE = 1;

       // wait for PIN_PLL_READY_T/RX go to low
       //while((reg_MCU_DEBUGA_LANE_7_0=0xCD)&&reg_PLL_READY_RX_LANE || reg_PLL_READY_TX_LANE);
       wait_for(!(reg_PLL_READY_RX_LANE || reg_PLL_READY_TX_LANE),0);

      // set force sel_bits tx/rx 
      reg_FORCE_SEL_BITS_RX_LANE = 1;
      reg_FORCE_SEL_BITS_TX_LANE = 1;

      // enable pat_cnt
      reg_FORCE_TX_TRAIN_PAT_RX_EN_LANE = 1;
	} 
}

#endif


#ifdef DRV_TX_FUNC_CFG_V0

void set_train_comp() {

///////////    if (!reg_TX_TRAIN_ENABLE_RD_LANE) {
//////////        // tx_train_enable is 0 before PIN_TX_TRAIN_COMPLETE means it is abort case
///////////        tx_train_abort ();
//////////       }

///////////    else {
	// Tx training is successful 
	if(!drv_TXTRAIN_FAIL && !reg_FRAME_DET_TIMEOUT_ISR_LANE && !reg_TRX_TRAIN_TIMEOUT_ISR_LANE) {
                reg_INT_TX_TRAIN_COMPLETE_LANE = 1;
          }

         // Load PIN_TX_TRAIN_ERROR with proper error code. Internally, HW already has the information
        // pattern lock lost timeout
        else if (reg_FRAME_DET_TIMEOUT_ISR_LANE && reg_PATTERN_LOCK_LOST_TIMEOUT_EN_LANE && reg_AUTO_FORCE_DIS_RX_LANE) {
                reg_PIN_TX_TRAIN_ERROR_LANE_1_0 = reg_TX_TRAIN_ERROR_LANE_1_0; //0x00;  
              }
       // mttt timeout and local_train_comp is complete, remote is not
        else if (reg_TRX_TRAIN_TIMEOUT_LANE && reg_TRX_TRAIN_TIMEOUT_EN_LANE && reg_LOCAL_TRAIN_COMP_ISR_LANE && reg_AUTO_FORCE_DIS_RX_LANE) {
                reg_PIN_TX_TRAIN_ERROR_LANE_1_0 = reg_TX_TRAIN_ERROR_LANE_1_0;  //0x11
              }
       // mttt timeout and local_train_comp is not complete
        else if (reg_TRX_TRAIN_TIMEOUT_LANE && reg_TRX_TRAIN_TIMEOUT_EN_LANE && !reg_LOCAL_TRAIN_COMP_ISR_LANE && reg_AUTO_FORCE_DIS_RX_LANE) {
                reg_PIN_TX_TRAIN_ERROR_LANE_1_0 = reg_TX_TRAIN_ERROR_LANE_1_0; //0x10;
              }
       // FW decide to tx train is failed
        else {
                reg_PIN_TX_TRAIN_ERROR_LANE_1_0 = reg_TX_TRAIN_ERROR_LANE_1_0;
                reg_INT_TX_TRAIN_FAILED_LANE = 1;
                reg_INT_TX_TRAIN_COMPLETE_LANE = 1;
              }
 
      // If reg_AUTO_FORCE_DIS_RX_LANE = 0, HW will take care of force_pll_ready_t/rx and force_sel_bits_t/rx
       // Default for 7nm - HW disable
       
           if(phy_mode != PCIE && phy_mode != USB && reg_AUTO_FORCE_DIS_RX_LANE) {


          // wait for end of train pat and  wait cnt is done 
          // PAT_CNT is stopped
             wait_for(reg_TRAIN_END_RD_LANE,0);
 
                // de-assert force sel_bits t/rx 
                reg_FORCE_SEL_BITS_RX_LANE = 0;
                reg_FORCE_SEL_BITS_TX_LANE = 0;

				#ifndef _56G_7NM
               // THE FOLLOWING "WHILE" IS ONLY FOR 112G. 56G CAN SKIP IT
                // wait for 8bit clk or 10bit clk ready
                if (!reg_RX_SEL_BITS_LANE)
                {
                    //while((reg_MCU_DEBUGA_LANE_7_0=0xCE)&&!reg_CLK_10BIT_READY_RD_LANE);
                    wait_for(reg_CLK_10BIT_READY_RD_LANE,0);
                }
                else
                {
                    //while((reg_MCU_DEBUGA_LANE_7_0=0xCF)&&!reg_CLK_8BIT_READY_RD_LANE);
                    wait_for(reg_CLK_8BIT_READY_RD_LANE,0);
                }
				#endif

                // de-assert force pll_ready
                reg_FORCE_PLL_READY_RX_LANE = 0;
                reg_FORCE_PLL_READY_TX_LANE = 0;

                //wait for PLL-READY_T/RX 
                //while((reg_MCU_DEBUGA_LANE_7_0=0xD0)&&!reg_PLL_READY_RX_LANE && !reg_PLL_READY_TX_LANE);
                wait_for(reg_PLL_READY_RX_LANE || reg_PLL_READY_TX_LANE,0);
                       
                 
                reg_LOCAL_STATUS_FM_REG_EN_LANE = 1; 
                           // tx train successful
                       if (!drv_TXTRAIN_FAIL && !reg_FRAME_DET_TIMEOUT_ISR_LANE && !reg_TRX_TRAIN_TIMEOUT_ISR_LANE) {
                            reg_PIN_TX_TRAIN_COMPLETE_LANE = 1;  
                          }
                           // tx train failed.  PIN_TX_TRAIN_ERROR is already loaded at the beginning of this void
                       else {
                            reg_PIN_TX_TRAIN_FAILED_LANE = 1;
                    }
                reg_LOCAL_STATUS_FM_REG_EN_LANE = 0;
               } 
              
                if (phy_mode = SATA) {
                   reg_DET_BYPASS_LANE = 1;
                   } 
///////////////////	}


}
#else
void set_train_comp() {

////////////////////    if (!reg_TX_TRAIN_ENABLE_RD_LANE) {
///////////////////        // tx_train_enable is 0 before PIN_TX_TRAIN_COMPLETE means it is abort case
        
//////////////////        tx_train_abort ();
/////////////////       }

//////////////////    else {
	// tx train is complete 
	if(!drv_TXTRAIN_FAIL && !reg_FRAME_DET_TIMEOUT_ISR_LANE && !reg_TRX_TRAIN_TIMEOUT_ISR_LANE) {
                reg_INT_TX_TRAIN_COMPLETE_LANE = 1;
          }

        // tx train is failed
        else {
                reg_INT_TX_TRAIN_FAILED_LANE = 1;
                reg_INT_TX_TRAIN_COMPLETE_LANE = 1;
              }

 
      // If reg_AUTO_FORCE_DIS_RX_LANE = 0, HW will take care of force_pll_ready_t/rx and force_sel_bits_t/rx
      // Default for 7nm - HW enable

           if(phy_mode != PCIE && phy_mode != USB && reg_AUTO_FORCE_DIS_RX_LANE  ) {

               wait_for(reg_TRAIN_END_RD_LANE,0);
 
                // de-assert force sel_bits t/rx 
                reg_FORCE_SEL_BITS_RX_LANE = 0;
                reg_FORCE_SEL_BITS_TX_LANE = 0;


                // de-assert force pll_ready
                reg_FORCE_PLL_READY_RX_LANE = 0;
                reg_FORCE_PLL_READY_TX_LANE = 0;

                //wait for PLL-READY_T/RX 
                //while((reg_MCU_DEBUGA_LANE_7_0=0xD1)&&!reg_PLL_READY_RX_LANE && !reg_PLL_READY_TX_LANE);
                wait_for(reg_PLL_READY_RX_LANE || reg_PLL_READY_TX_LANE,0);
                
               
                // PIN_TX_TRAIN_COMPLETE is loaded by HW internally  
                reg_TRAIN_PIN_FORCE_EN_LANE = 1; 
                      
                       if (!drv_TXTRAIN_FAIL && !reg_FRAME_DET_TIMEOUT_ISR_LANE && !reg_TRX_TRAIN_TIMEOUT_ISR_LANE) {
                            reg_PIN_TX_TRAIN_COMPLETE_LANE = 1;  
                          }
                       else {
                            reg_PIN_TX_TRAIN_FAILED_LANE = 1;
                    }
                reg_TRAIN_PIN_FORCE_EN_LANE = 0;
                } 
              
                if (phy_mode = SATA) {
                   reg_DET_BYPASS_LANE = 1;
                   } 
/////////////////////////	}


}
#endif 


#ifdef DRV_TX_FUNC_CFG_V0

void tx_train_abort() {


           if(phy_mode != PCIE && phy_mode != USB && reg_AUTO_FORCE_DIS_RX_LANE) {

        // wait for end of train pat, wait cnt is done
        //while((reg_MCU_DEBUGA_LANE_7_0=0xD2)&&!reg_TRAIN_END_RD_LANE);
        wait_for(reg_TRAIN_END_RD_LANE,0);

        // de-assert force sel_bits t/rx
        reg_FORCE_SEL_BITS_RX_LANE = 0;
        reg_FORCE_SEL_BITS_TX_LANE = 0;

		#ifndef _56G_7NM
        // wait for 8bit clk or 10bit clk ready
        if (!reg_RX_SEL_BITS_LANE)
        {
           //while((reg_MCU_DEBUGA_LANE_7_0=0xD3)&&reg_CLK_10BIT_READY_RD_LANE);
           wait_for(!reg_CLK_10BIT_READY_RD_LANE,0);
        }
        else
        {
           //while((reg_MCU_DEBUGA_LANE_7_0=0xD4)&&reg_CLK_8BIT_READY_RD_LANE);
           wait_for(!reg_CLK_8BIT_READY_RD_LANE,0);
        }
	    #endif

        // de-assert force pll_ready
        reg_FORCE_PLL_READY_RX_LANE = 0;
        reg_FORCE_PLL_READY_TX_LANE = 0;

        //wait for PLL-READY_T/RX 
        //while((reg_MCU_DEBUGA_LANE_7_0=0xD5)&&!reg_PLL_READY_RX_LANE && !reg_PLL_READY_TX_LANE);
        wait_for(reg_PLL_READY_RX_LANE || reg_PLL_READY_TX_LANE, 0);
         } 
            // set PIN_TX_TRAIN_FAIL        
            reg_LOCAL_STATUS_FM_REG_EN_LANE = 1;
            reg_PIN_TX_TRAIN_FAILED_LANE = 1;
			reg_LOCAL_STATUS_FM_REG_EN_LANE = 0;
        }


#else

void tx_train_abort() {
        // wait for end of train pat, wait cnt is done
        //
       wait_for(reg_TRAIN_END_RD_LANE,0);

           if(phy_mode != PCIE && phy_mode != USB && reg_AUTO_FORCE_DIS_RX_LANE ) {


        // de-assert force sel_bits t/rx
        reg_FORCE_SEL_BITS_RX_LANE = 0;
        reg_FORCE_SEL_BITS_TX_LANE = 0;


        // de-assert force pll_ready
        reg_FORCE_PLL_READY_RX_LANE = 0;
        reg_FORCE_PLL_READY_TX_LANE = 0;

        //wait for PLL-READY_T/RX 
        //while((reg_MCU_DEBUGA_LANE_7_0=0xD6)&&!reg_PLL_READY_RX_LANE && !reg_PLL_READY_TX_LANE);
        wait_for(reg_PLL_READY_RX_LANE || reg_PLL_READY_TX_LANE, 0);
         } 
            // set PIN_TX_TRAIN_FAIL        
         //   reg_TRAIN_PIN_FORCE_EN_LANE = 1;
         //   reg_PIN_TX_TRAIN_FAILED_LANE = 1;
	 //   reg_TRAIN_PIN_FORCE_EN_LANE = 0;
        }
#endif


void set_remote_tx_pam2() {

      if (reg_TRX_TRAIN_STOP_ISR_LANE) {
         }
      else {
	// -- set coe to HW
	if(drv_TXTRAIN_CTRL_PRESET) {
		reg_INT_LOCAL_CTRL_RESET_LANE = 1;
		reg_INT_TX_PRESET_INDEX_LANE_3_0 = drv_TXTRAIN_CTRL_PRESET;
		reg_INT_LOCAL_CTRL_G0_LANE_1_0 = 0;
		reg_INT_LOCAL_CTRL_G1_LANE_1_0 = 0;
		reg_INT_LOCAL_CTRL_GN1_LANE_1_0 = 0;
	} else {
		reg_INT_LOCAL_CTRL_RESET_LANE = 0;
		reg_INT_TX_PRESET_INDEX_LANE_3_0 = 0;
		reg_INT_LOCAL_CTRL_G0_LANE_1_0 = drv_TXTRAIN_CTRL_C0;
		reg_INT_LOCAL_CTRL_G1_LANE_1_0 = drv_TXTRAIN_CTRL_C1;
		reg_INT_LOCAL_CTRL_GN1_LANE_1_0 = drv_TXTRAIN_CTRL_CN1;
	}
	
	reg_INT_LOCAL_CTRL_REQ_LANE = 1;

	//check ack	
	//while((reg_MCU_DEBUGA_LANE_7_0=0xD7)&&!reg_INT_REMOTE_STATUS_ACK_LANE && !reg_TX_TRAIN_FAILED_LANE && reg_TX_TRAIN_ENABLE_RD_LANE && !reg_TRX_TRAIN_STOP_ISR_LANE);
	wait_for(!(!reg_INT_REMOTE_STATUS_ACK_LANE && !reg_TX_TRAIN_FAILED_LANE && reg_TX_TRAIN_ENABLE_RD_LANE && !reg_TRX_TRAIN_STOP_ISR_LANE),0);
	
	drv_TXTRAIN_STATUS_C0 = reg_INT_REMOTE_STATUS_G0_LANE_1_0;
	drv_TXTRAIN_STATUS_C1 = reg_INT_REMOTE_STATUS_G1_LANE_1_0;
	drv_TXTRAIN_STATUS_CN1 = reg_INT_REMOTE_STATUS_GN1_LANE_1_0;
        }
}

void set_remote_tx_pam4() {

      if (reg_TRX_TRAIN_STOP_ISR_LANE) {
         }
      else {
	// -- set coe to HW
	reg_INT_LOCAL_CTRL_PAT_LANE_1_0 = drv_TXTRAIN_CTRL_PAT;
	
	if(drv_TXTRAIN_CTRL_PRESET) {
		reg_INT_LOCAL_CTRL_RESET_LANE = 1;
		reg_INT_TX_PRESET_INDEX_LANE_3_0 = drv_TXTRAIN_CTRL_PRESET;
		reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 0; 
		reg_INT_LOCAL_CTRL_G_LANE_1_0 = 0;
	} else {
		reg_INT_LOCAL_CTRL_RESET_LANE = 0;
		reg_INT_TX_PRESET_INDEX_LANE_3_0 = 0;
		if(drv_TXTRAIN_CTRL_C0) {
			reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 0; 
			reg_INT_LOCAL_CTRL_G_LANE_1_0 = drv_TXTRAIN_CTRL_C0;
		}
		if(drv_TXTRAIN_CTRL_C1) {
			reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 1; 
			reg_INT_LOCAL_CTRL_G_LANE_1_0 = drv_TXTRAIN_CTRL_C1;
		}
		if(drv_TXTRAIN_CTRL_CN1) {
			reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 7; 
			reg_INT_LOCAL_CTRL_G_LANE_1_0 = drv_TXTRAIN_CTRL_CN1;
		}
		if(drv_TXTRAIN_CTRL_CN2) {
			reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 6; 
			reg_INT_LOCAL_CTRL_G_LANE_1_0 = drv_TXTRAIN_CTRL_CN2;
		}

		if(drv_TXTRAIN_CTRL_CN3) {
			reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 5;
			reg_INT_LOCAL_CTRL_G_LANE_1_0 = drv_TXTRAIN_CTRL_CN3;
		}

	}

	reg_INT_LOCAL_CTRL_REQ_LANE = 1;
	//check ack
	//while((reg_MCU_DEBUGA_LANE_7_0=0xD8)&&!reg_INT_REMOTE_STATUS_ACK_LANE && !reg_TX_TRAIN_FAILED_LANE && reg_TX_TRAIN_ENABLE_RD_LANE && !reg_TRX_TRAIN_STOP_ISR_LANE);
	wait_for(!(!reg_INT_REMOTE_STATUS_ACK_LANE && !reg_TX_TRAIN_FAILED_LANE && reg_TX_TRAIN_ENABLE_RD_LANE && !reg_TRX_TRAIN_STOP_ISR_LANE),0);

	//drv_TXTRAIN_STATUS_PAT = reg_INT_REMOTE_STATUS_PAT_LANE_1_0;

	if(reg_INT_REMOTE_STATUS_SEL_LANE_2_0 == 0) { //updated
		drv_TXTRAIN_STATUS_C0 = reg_INT_REMOTE_STATUS_G_LANE_2_0;
		drv_TXTRAIN_STATUS_C1 = 0;
		drv_TXTRAIN_STATUS_CN1 = 0;
		drv_TXTRAIN_STATUS_CN2 = 0;
		drv_TXTRAIN_STATUS_CN3 = 0;
	} else if(reg_INT_REMOTE_STATUS_SEL_LANE_2_0 == 1) {
		drv_TXTRAIN_STATUS_C0 = 0;
		drv_TXTRAIN_STATUS_C1 = reg_INT_REMOTE_STATUS_G_LANE_2_0;
		drv_TXTRAIN_STATUS_CN1 = 0;
		drv_TXTRAIN_STATUS_CN2 = 0;
		drv_TXTRAIN_STATUS_CN3 = 0;
	} else if(reg_INT_REMOTE_STATUS_SEL_LANE_2_0 == 7) {
		drv_TXTRAIN_STATUS_C0 = 0;
		drv_TXTRAIN_STATUS_C1 = 0;
		drv_TXTRAIN_STATUS_CN1 = reg_INT_REMOTE_STATUS_G_LANE_2_0;
		drv_TXTRAIN_STATUS_CN2 = 0;
		drv_TXTRAIN_STATUS_CN3 = 0;
	} else if(reg_INT_REMOTE_STATUS_SEL_LANE_2_0 == 6) {
		drv_TXTRAIN_STATUS_C0 = 0;
		drv_TXTRAIN_STATUS_C1 = 0;
		drv_TXTRAIN_STATUS_CN1 = 0;
		drv_TXTRAIN_STATUS_CN2 = reg_INT_REMOTE_STATUS_G_LANE_2_0;
		drv_TXTRAIN_STATUS_CN3 = 0;

        } else if(reg_INT_REMOTE_STATUS_SEL_LANE_2_0 == 5) {
                drv_TXTRAIN_STATUS_C0 = 0;
                drv_TXTRAIN_STATUS_C1 = 0;
                drv_TXTRAIN_STATUS_CN1 = 0;
                drv_TXTRAIN_STATUS_CN2 = 0;
                drv_TXTRAIN_STATUS_CN3 = reg_INT_REMOTE_STATUS_G_LANE_2_0;
        }
   }
}


void set_remote_tx() {

	// -- wait ACK deassert for handshake
	//while((reg_MCU_DEBUGA_LANE_7_0=0xD9)&&reg_INT_REMOTE_STATUS_ACK_LANE);
	wait_for(!reg_INT_REMOTE_STATUS_ACK_LANE,0);

	//if(!reg_TX_PAM2_EN_LANE) {
        if ((reg_ETHERNET_MODE_LANE_1_0 == 0x2)	 || (reg_ETHERNET_MODE_LANE_1_0 == 0x3)) {
		set_remote_tx_pam4();
	} else {
		set_remote_tx_pam2();
	}

	// -- clear previous REQ
	reg_INT_LOCAL_CTRL_REQ_LANE = 0;

	// -- reset status det timeout
	reg_STATUS_DET_TIMEOUT_ISR_CLEAR_LANE = 0;

	// -- invalid remote status
	if(reg_STATUS_DET_TIMEOUT_ISR_LANE || reg_TX_TRAIN_FAILED_LANE) {
		drv_TXTRAIN_STATUS_VALID = 0;
	} else {
		drv_TXTRAIN_STATUS_VALID = 1;
	}

	reg_STATUS_DET_TIMEOUT_ISR_CLEAR_LANE = 1;

}





