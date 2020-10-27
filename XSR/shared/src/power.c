/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power.c
* \purpose general power control Functions for not phy_mode specific
* \History
*	4/1/2019 Heejeong Ryu		Initial
*   
*/

#include "common.h"
#include "calibration_common.h"
#include "pll_sharing.h"
#include "pll_state.h"

#ifdef USE_BANKING
#pragma codeseg BANK2
#endif

/**
 * \module PowerUp_Seq
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/
//#ifdef SUPPORT_POWER_SIMPLE
//
//void PowerUp_Seq_Cal(void) BANKING_CTRL {
//
//  reg_MCU_DEBUG0_LANE_7_0 = 0x20;
//  reg_MCU_DEBUG0_LANE_7_0 = 0x20;
//  while(!(reg_PIN_PU_PLL_RD_LANE));
//  PHY_STATUS = ST_POSEQ;
//  reg_PWRON_SEQ_LANE = 1;
//  cmx_CAL_DONE = 1;
//
//  reg_PLL_TS_FBDIV_LANE_9_8 = 0x0;
//  reg_PLL_RS_FBDIV_LANE_9_8 = 0x0;
//  reg_PLL_TS_FBDIV_LANE_7_0 = 0x2d;
//  reg_PLL_RS_FBDIV_LANE_7_0 = 0x2d;
//  reg_PLL_TS_REFDIV_LANE_3_0 = 0x2;
//  reg_PLL_RS_REFDIV_LANE_3_0 = 0x2;
//
//  while(!(reg_PIN_PU_IVREF_RD));
//  //delay(T_20us);
//  reg_ANA_PU_IVREF = 1;
//  //delay(Tus);
//  reg_ANA_PU_IVREF_DLY1 = 1;
//  //delay(Tus);
//  reg_ANA_PU_IVREF_DLY2 = 1;
//  //delay(Tus);
//  reg_ANA_PU_IVREF_DLY3 = 1;
//
//  reg_ANA_PU_TX_OR_FORCE = 1;  //PU_TX_OR controlled through force
//  reg_ANA_PU_TX_OR = 1;
//
//  reg_ANA_PLL_RS_PU_PLL_LANE = 1;
//  reg_ANA_PLL_TS_PU_PLL_LANE = 1;
//
//  reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 1;
//  reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 1;
//
//  reg_RX_RESET_ANA_LANE = 0;
//  reg_TX_RESET_ANA_LANE = 0;
//
//  while(!(reg_PIN_PU_RX_RD_LANE));
//  reg_RX_ADC_RESET_LANE = 1;
//  reg_RX_PI_RESET_EXT_LANE = 1;
//
//  reg_ANA_PU_CTLE_LANE = 1;
//  reg_ANA_PU_ADC_LANE = 1;
//  reg_ANA_PU_EOM_PI_LANE = 1;
//  reg_ANA_PU_PI_LANE = 1;
//  reg_ANA_PU_RX_LANE = 1;
//  delay(T_p5us);
//  reg_ANA_PU_RX_DLY_LANE = 1;
//  reg_RX_PI_RESET_EXT_LANE = 0;
//  reg_RX_ADC_RESET_LANE = 0;
//
//  while(!(reg_PIN_PU_TX_RD_LANE));
//  reg_ANA_PU_TX_LANE = 1;
//
//  //SKCTRL are PIN and undriven in digital
// 
//  reg_RX_ADC_RES_SEL_LANE_1_0 = 0;
//  //CTLE control
//  reg_RX_CTLE_RL1_CTRL_LANE_3_0 = 0x8;
//  reg_RX_CTLE_RL1_EXTRA_LANE_2_0 = 0x0;
//  reg_RX_CTLE_CL1_CTRL_LANE_3_0 = 0xA;
//  reg_RX_CTLE_RS1_CTRL_LANE_3_0 = 0x8;
//  reg_RX_CTLE_CS1_CTRL_LANE_5_0 = 0x8;
//  reg_RX_CTLE_CUR1_SEL_LANE_3_0 = 0x8;
//  reg_RX_CTLE_CS1_MID_LANE_2_0 = 0x4;
//  reg_RX_CTLE_RS1_MID_LANE_2_0 = 0x4;
//  reg_RX_CTLE_CUR2_SEL_LANE_3_0 = 0x8;
//  reg_RX_CTLE_RFB_SEL_LANE_1_0 = 0x2;
//  reg_RX_CTLE_GAIN_COARSE_LANE_3_0 = 0xB;
//  reg_RX_CTLE_CS2_CTRL_LANE_4_0 = 0x0;
//  reg_RX_CTLE_RS2_SEL_LANE_1_0 = 0x1;
//  reg_RX_CTLE_RS2_CTRL_LANE_4_0 = 0x0;
//  reg_RX_CTLE_HPF_RSEL_1ST_LANE_1_0 = 0x0;
//  reg_RX_CTLE_HPF_RSEL_2ND_LANE_1_0 = 0x0;
//  reg_RX_CTLE_HPF_RSEL_TH_LANE_1_0 = 0x0;
//  reg_RX_CTLE_HPF_SHORT_LANE = 0;
//  reg_RX_CTLE_OUT_SQ_EN_LANE = 0;
//  reg_RX_CTLE_OUT_DC_EN_LANE = 0;
//  reg_RX_CTLE_LB_RES_SEL_LANE_3_0 = 0x8;
//
//  reg_PWRON_SEQ_LANE = 0;
//  reg_RX_SEL_BITS_LANE = 1;
//
//  delay(Tus);
//  reg_ANA_PLL_RS_CLK_READY_LANE = 1;
//  reg_ANA_PLL_TS_CLK_READY_LANE = 1;
//  reg_PIN_PLL_READY_TX_LANE = 1;
//  reg_PIN_PLL_READY_RX_LANE = 1;
//  reg_DET_BYPASS_LANE = 1;
//
//  PHY_STATUS = ST_PLLREADY;
//  reg_MCU_DEBUG0_LANE_7_0 = 0x2f;
//}
//#endif

static void power_up_lane_config_update() {

/*    set_timer_cnt();

    if(cmx_FAST_POWER_ON_EN) { 

	    reg_MCU_DEBUG0_LANE_7_0 = 0x99;		
        reg_CFG_PM_RXDLOZ_WAIT_LANE_7_0 = 1;
        reg_LANE_ALIGN_READY_OUT_FORCE_LANE = 1;
        reg_LANE_ALIGN_READY_OUT_LANE = 1;
        reg_LANE_ALIGN_FREEZE_LANE = 1;
	    reg_MCU_DEBUG0_LANE_7_0 = 0x9a;		
    }	*/
}

static void power_up_common_config_update() {

/*    set_timer_cnt();

    reg_MCU_DEBUG_CMN_0_7_0 = 0x77;

    if(cmx_FAST_POWER_ON_EN) { 
        reg_MCU_DEBUG_CMN_0_7_0 = 0x78;
        CONTROL_CONFIG0.BT.B1 |= 0x18; // ext_force_cal_done=1, fast_dfe_timer_en=1 
        CONTROL_CONFIG0.BT.B2 |= 0xb0; // bypass_delay=4, bypass_poweron_delay=1, bypass_speed_table_load=1 
        cmx_FORCE_CONT_CAL_SKIP = 1;
        cmx_TRAIN_SIM_EN = 1;
    }	

    //CMN clk div for MCU clock domain counter
    reg_ANA_TSEN_ADC_CLK_CNT_15_0 = (cmx_MCU_FREQ_15_0 >>2) -1;
    reg_CMN_DIG_CAL2M_DIV_7_0 = (cmx_MCU_FREQ_15_0 >>1) -1;*/
}

static void power_up_request_common_config_update() {
/*	reg_MCU_DEBUG0_LANE_7_0 = 0x77;		
    switch(mcuid) {
        case MCU_LANE0:
            reg_MCU_DEBUG0_LANE_7_0 = 0x11;		
            cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE0_7_0 = 1;
            break;
        case MCU_LANE1:
            reg_MCU_DEBUG0_LANE_7_0 = 0x12;		
            cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE1_7_0 = 1;
            break;
        case MCU_LANE2:
            reg_MCU_DEBUG0_LANE_7_0 = 0x13;		
            cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE2_7_0 = 1;
            break;
        case MCU_LANE3:
            reg_MCU_DEBUG0_LANE_7_0 = 0x14;		
            cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE3_7_0 = 1;
            break;
    }
	reg_MCU_DEBUG0_LANE_7_0 = 0x79;		*/
}

void PowerUp_Seq(void) BANKING_CTRL {
/*
	reg_MCU_DEBUGC_LANE_7_0 = reg_PIN_SPD_CFG_RD_3_0;

	PHY_STATUS = ST_POSEQ;
    reg_PIN_PLL_READY_TX_LANE = 0;
	reg_PIN_PLL_READY_RX_LANE = 0;
		
	init_xdata();

	drv_spd_cfg_dec();

	init_reg();
	
	set_pwron_seq(1);
	
    #ifdef PLL_SHARING_ROUTE
	if(mcuid != MCU_CMN) {
        pll_state_lane_init(mcuid);
    }
    #endif // #ifdef _56G_5NM

	//reg_MCU_DEBUG0_LANE_7_0 = 0x0e; 
    if (mcuid != MCU_CMN) {

		drv_default_toggle();
	
		reg_ANA_REFCLK_SEL = reg_PIN_REFCLK_SEL_RD_LANE; 

        if(pll_access_allowed(PLL__RS_OR_TS__RS)) {
		    reg_ANA_PLL_RS_REFCLK_SEL_LANE = reg_PIN_REFCLK_SEL_RD_LANE;
		    reg_ANA_PLL_RS_CLK100MOR125M_EN_LANE = cmx_ANA_CLK100M_125M_EN;       		

            if(	cmx_ANA_CLK100M_125M_EN	) {
                reg_ANA_PLL_RS_CLK100M_125M_SEL_LANE = cmx_ANA_CLK100M_125M_SEL;
            }		
        }
        if(pll_access_allowed(PLL__RS_OR_TS__TS)) {
		    reg_ANA_PLL_TS_REFCLK_SEL_LANE = reg_PIN_REFCLK_SEL_RD_LANE;
        }
        
	    #ifdef _PCIE_BUILD
        if (phy_mode == PCIE) {
            while(reg_PIPE_SFT_RESET_LANE) {
                pll_check_and_execute_if_master();
            }
           
            power_up_request_common_config_update();
            power_up_lane_config_update();
            while(!cmx_COMMON_CONFIG_UPDATE_DONE_7_0);

		    while(! (reg_PIN_PU_PLL_RD_LANE)){
                if(reg_PIN_TXDETRX_EN_RD_LANE) {
                    P0Off_TXDETRX();
                }

	            #ifdef _56G_5NM
                pll_check_and_execute_if_master();
                #endif // #ifdef _56G_5NM
		    }
        }
        #else //#ifdef _PCIE_BUILD
		while(! (reg_PIN_PU_PLL_RD_LANE)){
	        #ifdef _56G_5NM
            pll_check_and_execute_if_master();
            #endif // #ifdef _56G_5NM
		}
	    reg_MCU_DEBUG0_LANE_7_0 = 0x76;		
        power_up_request_common_config_update();
        power_up_lane_config_update();
        while(!cmx_COMMON_CONFIG_UPDATE_DONE_7_0);
	    reg_MCU_DEBUG0_LANE_7_0 = 0x9b;		
        #endif //#else //#ifdef _PCIE_BUILD

        pll_request_pll_access(PLL_SEQUENCE__PowerUp_Seq);
		
		//drv_spd_cfg_dec();
		
		reg_MCU_DEBUG0_LANE_7_0 = 0x61;		

		drv_power_on_seq();
		
		// TODO reg_DFE_DC_SIGN_XOR_LANE = 1;
		// TODO reg_DFE_DC_E_SIGN_XOR_LANE = 1;

		reg_MCU_DEBUG0_LANE_7_0 = 0x63;		
		
		set_pwron_seq(0);
		
	}
	else {
		PHY_STATUS_CMN = ST_POSEQ;
	
        reg_MCU_DEBUG_CMN_0_7_0 = 0x76;
        while((!cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE0_7_0) &&
              (!cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE1_7_0) &&
              (!cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE2_7_0) &&
              (!cmx_COMMON_CONFIG_UPDATE_NEEDED_LANE3_7_0));

        power_up_common_config_update();
        
		while(!reg_PIN_PU_IVREF_RD);
		delay(T_20us);
		pu_ivref_on();

        cmx_COMMON_CONFIG_UPDATE_DONE_7_0 = 1;
	
        reg_MCU_DEBUG_CMN_0_7_0 = 0x79;
		while (1) {
		if(	(reg_PIN_PU_PLL_RD_LANE0?(!cmx_POWER_ON_SEQ_LANE0_RD):1) &&
	        (reg_PIN_PU_PLL_RD_LANE1?(!cmx_POWER_ON_SEQ_LANE1_RD):1) &&
	        (reg_PIN_PU_PLL_RD_LANE2?(!cmx_POWER_ON_SEQ_LANE2_RD):1) &&
	        (reg_PIN_PU_PLL_RD_LANE3?(!cmx_POWER_ON_SEQ_LANE3_RD):1) ) 
			break;
		}
	}

	Calibration();

    if (mcuid != MCU_CMN) {
		
		clear_all_isr();
		
		if( (reg_MCU_ISR0_RD_LANE_31_0_b0&0xfa)==0) {
			
			if(reg_PIN_PU_PLL_RD_LANE){	

				if(phy_mode == SERDES) {
					drv_power_on_dig_prot_dis();
					PHY_STATUS = ST_PLLREADY; 
				}
				else {
					SpeedChange();	
				}		
			}
			else {
				#if defined _SERDES_BUILD || defined _SAS_BUILD	
				Power_Slumber();
				#else 	
				Power_P2(); 	
				#endif
			}	
		}
		else {
            //TODO: Add pll route
			drv_pll_rs_on_dig_prot_dis();
			drv_pll_ts_on_dig_prot_dis();			
		}	

        pll_free_pll();
	}
	else {
		PHY_STATUS_CMN = ST_PLLREADY;		
	}*/
}

/*
 * reset_pwr_reg() - call after a SFT_RST
 */
//void reset_pwr_reg(void) BANKING_CTRL {
//	reg_RX_INIT_DONE_LANE = 0;
//
//	// disable all interrupts
//	PM_CTRL_INTERRUPT_REG2.BT.B2 = 0x0;
//	PM_CTRL_INTERRUPT_REG2.BT.B3 = 0x0; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
//	reg_INT_PU_PLL_OR_CHG_FALLING_MASK_LANE = 0;
//
//	//INT0 for MCU Wakeup from STOP.
//	//reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 0; //use only for mcu stop
//
//	//int3
//	//reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 0;
//        reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 0;
//
//	//int9
//	reg_INT9_PM_CHG_INT_EN_LANE = 0;
//
//	//int1
//	//reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
//
//	//int2
//	reg_INT2_SPD_INT_GEN_EN_LANE = 0;
//
//	//int11
//	reg_INT11_RX_TRAIN_ENABLE_INT_EN_LANE = 0;
//
//	//int5
//	reg_INT5_TX_TRAIN_ENABLE_INT_EN_LANE = 0;
//
//	//int10
//	//reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 0;
//
//	//int7
//	//reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 0; //no txtrain_if in fw
//	
//	//int12
//	//reg_INT12_PIN_LOCAL_CTRL_FIELD_READY_INT_EN_LANE = 0;  //no APTA
//	
//	//extpin
//	//reg_EXTINT_MCU_INT_EN_LANE = 0;
//
//	pll_clk_rs_ready_0();
//	pll_clk_ts_ready_0();
//	reg_ANA_PU_IVREF = 1;
//	reg_ANA_PU_IVREF_DLY1 = 1;
//	reg_ANA_PU_IVREF_DLY2 = 1;
//	reg_ANA_PU_IVREF_DLY3 = 1;
//	//reg_ANA_PU_PLL_LANE = 0;
//	reg_ANA_PLL_RS_PU_PLL_LANE = 0;
//	reg_ANA_PLL_TS_PU_PLL_LANE = 0;
//	//reg_ANA_PU_PLL_DLY_LANE = 0;
//	reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 0;
//	reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 0;
//	reg_ANA_PU_RX_LANE = 0;
//	reg_ANA_PU_RX_DLY_LANE = 0;
//	reg_ANA_PU_TX_LANE = 0;
//	reg_ANA_PU_SQ_LANE = 0;
//	//reg_ANA_PLL_CLK_READY_PRE0 = 0;
//	//reg_ANA_PLL_CLK_READY_PRE1 = 0;
//	//reg_ANA_PLL_CLK_READY_LANE = 0;

//}
// 
/*
void tx_pll_dig_off(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		drv_pll_ts_off_dig_prot_en(); 
	break;	
	case RS_ON:
	case SWAP_BOTH_ON:
		drv_pll_rs_off_dig_prot_en(); 
	break;
	}
}	

void tx_pll_dig_on(void) BANKING_CTRL {

	if( reg_MCU_ISR0_RD_LANE_31_0_b0&0xb8 || reg_INT_PHY_GEN_TX_CHG_ISR_LANE ) return; //1011_1010 
		//int_refclk_dis_chg_rising_int=1, 
		//rx_sft_rst_chg_rising_int=x, 
		//tx_sft_rst_chg_rising_int=1, 
		//int_pu_ivref_chg_int=1, 
		//pm_chg_int=1, 
		//pm_others_chg_int=x, 
		//spd_int_gen=x, 
		//int_pu_pll_or_chg_falling_int=x

	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		drv_pll_ts_on_dig_prot_dis();
	break;
	case RS_ON:
	case SWAP_BOTH_ON:
		drv_pll_rs_on_dig_prot_dis(); 
	break;
	}
}	

void rx_pll_dig_off(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		drv_pll_rs_off_dig_prot_en(); 
	break;	
	case TS_ON:
	case SWAP_BOTH_ON:
		drv_pll_ts_off_dig_prot_en(); 
	break;
	}
}	

void rx_pll_dig_on(void) BANKING_CTRL {
	
	if( reg_MCU_ISR0_RD_LANE_31_0_b0&0xd8 || reg_INT_PHY_GEN_RX_CHG_ISR_LANE) return; //1101_1000
		//int_refclk_dis_chg_rising_int=1, 
		//rx_sft_rst_chg_rising_int=1, 
		//tx_sft_rst_chg_rising_int=0, 
		//int_pu_ivref_chg_int=1, 
		//pm_chg_int=1, 
		//pm_others_chg_int=x, 
		//spd_int_gen=x, 
		//int_pu_pll_or_chg_falling_int=x

	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		drv_pll_rs_on_dig_prot_dis(); 
	break;	
	case TS_ON:
	case SWAP_BOTH_ON:
		drv_pll_ts_on_dig_prot_dis(); 
	break;
	}
}	


void tx_pll_ana_off(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		drv_pll_ts_off_seq(); 
	break;	
	case RS_ON:
	case SWAP_BOTH_ON:
		drv_pll_rs_off_seq(); 
	break;
	}
}	

void tx_pll_ana_on(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		drv_pll_ts_on_seq(); 
	break;
	case RS_ON:
	case SWAP_BOTH_ON:
		drv_pll_rs_on_seq(); 
	break;
	}
}	


void rx_pll_ana_off(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		drv_pll_rs_off_seq(); 
	break;	
	case TS_ON:
	case SWAP_BOTH_ON:
		drv_pll_ts_off_seq(); 
	break;
	}
}	

void rx_pll_ana_on(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		drv_pll_rs_on_seq();
	break;	
	case TS_ON:
	case SWAP_BOTH_ON:
		drv_pll_ts_on_seq(); 
	break;
	}
}	

void tx_pll_cal(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		ts_pll_cal();	
	break;	
	case RS_ON:
	case SWAP_BOTH_ON:
		rs_pll_cal();
	break;
	}
}	

void rx_pll_cal(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		rs_pll_cal();	
	break;	
	case TS_ON:
	case SWAP_BOTH_ON:
		ts_pll_cal();
	break;
	}
}	

void check_tx_pll_lock(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		check_ts_pll_lock();	
	break;	
	case RS_ON:
	case SWAP_BOTH_ON:
		check_rs_pll_lock();
	break;
	}
}	

void check_rx_pll_lock(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		check_rs_pll_lock();	
	break;	
	case TS_ON:
	case SWAP_BOTH_ON:
		check_ts_pll_lock();
	break;
	}
}	

void tx_pll_fast_cal_sel(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		ts_pll_fast_cal();	
	break;	
	case RS_ON:
	case SWAP_BOTH_ON:
		rs_pll_fast_cal();
	break;
	}
}	

void rx_pll_fast_cal_sel(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		rs_pll_fast_cal();	
	break;	
	case TS_ON:
	case SWAP_BOTH_ON:
		ts_pll_fast_cal();
	break;
	}
}	

void pll_clk_rx_ready_1(void) BANKING_CTRL { 
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		pll_clk_rs_ready_1();	
	break;	
	case TS_ON:
	case SWAP_BOTH_ON:
		pll_clk_ts_ready_1();
	break;
	}
}

void pll_clk_rx_ready_0(void) BANKING_CTRL { 
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
		pll_clk_rs_ready_0();	
	break;	
	case TS_ON:
	case SWAP_BOTH_ON:
		pll_clk_ts_ready_0();
	break;
	}
}

void pll_clk_tx_ready_1(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		pll_clk_ts_ready_1();	
	break;	
	case RS_ON:
	case SWAP_BOTH_ON:
		pll_clk_rs_ready_1();
	break;
	}
}	

void pll_clk_tx_ready_0(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
		pll_clk_ts_ready_0();	
	break;	
	case RS_ON:
	case SWAP_BOTH_ON:
		pll_clk_rs_ready_0();
	break;
	}
}	

void tx_plldcc_cal(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case TS_ON:
        calibration_execute(TS_PLLDCC_CAL_INDEX);
	break;	
	case RS_ON:
	case SWAP_BOTH_ON:
        calibration_execute(RS_PLLDCC_CAL_INDEX);
	break;
	}
}	

void rx_plldcc_cal(void) BANKING_CTRL {
	switch(pll_sel) {
	case BOTH_ON:
	case RS_ON:
        calibration_execute(RS_PLLDCC_CAL_INDEX);
	break;	
	case TS_ON:
	case SWAP_BOTH_ON:
        calibration_execute(TS_PLLDCC_CAL_INDEX);
	break;
	}
}	

void set_pwron_seq(bool val) BANKING_CTRL {
		switch(mcuid) {
		case MCU_LANE0: cmx_POWER_ON_SEQ_LANE0_RD = val;	break;
		case MCU_LANE1: cmx_POWER_ON_SEQ_LANE1_RD = val;	break;
		case MCU_LANE2: cmx_POWER_ON_SEQ_LANE2_RD = val;	break;
		case MCU_LANE3: cmx_POWER_ON_SEQ_LANE3_RD = val;	break;
		}	
}


// --
void clear_all_isr(void) BANKING_CTRL {
	
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0xff;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0xff;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B1 = 0xff;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B1 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B0 = 0xe0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B0 = 0;
	
    #ifdef _56G_5NM
    RX_LANE_INTERRUPT.BT.B3 = 0xf8;
    RX_LANE_INTERRUPT.BT.B3 = 0;
    #endif // #ifdef _56G_5NM

	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0xc0;
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
	
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B3 = 0x01; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B3 = 0x0;
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B2 = 0xff; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B2 = 0x0;
	
}	

void clear_tx_isr(void) BANKING_CTRL {
	
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x30; //INT_PU_TX_CHG_*
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	
	reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
	reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;
	
}	

void clear_rx_isr(void) BANKING_CTRL {
	
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0x0c; //INT_PU_RX_CHG_*
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0xc0; //INT_RX_INIT_CHG_*
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
	
	reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
	reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;

	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0xcc;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0xfe;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B2 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B1 = 0xff;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B1 = 0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B0 = 0xe0;
	PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B0 = 0;
	
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B3 = 0x01; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B3 = 0x0;
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B2 = 0xff; 
	TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B2 = 0x0;
	
}	*/
