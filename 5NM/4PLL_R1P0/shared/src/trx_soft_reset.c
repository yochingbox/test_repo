/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file trx_soft_reset.c
* \purpose TX and RX soft reset handler
* \History
*	03/20/2019		Initial 
*/

#include "common.h"
#include "pll_sharing.h"
#include "mcu_command.h"
#include "drv_pll.h"

#ifdef USE_BANKING
#pragma codeseg BANK2
#endif

//void Tx_Softreset_top(void) BANKING_CTRL {
//	tx_soft_reset(); 		 
//	while(!reg_TX_SFT_RST_CHG_FALLING_ISR_LANE); 
//	clear_tx_isr();
//	if(pll_sel == TS_ON) clear_rx_isr();
//	tx_soft_reset_release();		
//}	
//
//void Rx_Softreset_top(void) BANKING_CTRL {
//	if(pll_sel == TS_ON) {
//		reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
//		reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;	
//		return;
//	}	
//	rx_soft_reset();			
//	while(!reg_RX_SFT_RST_CHG_FALLING_ISR_LANE);     		
//	clear_rx_isr();
//	if(pll_sel == RS_ON) clear_tx_isr();
//	rx_soft_reset_release();		
//}
//

void rx_soft_reset__clear_isr() BANKING_CTRL {
    RX_LANE_INTERRUPT_REG1.BT.B3 |= 0xC0;           //assert rx sft rst chg falling/rising isr clear
    RX_LANE_INTERRUPT_REG1.BT.B3 &= ~0xC0;          //clear rx sft rst chg falling/rising isr clear
}

void tx_soft_reset__clear_isr() BANKING_CTRL {
    PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 |= 0x3;	//assert tx sft rst chg falling/rising isr clear
    PM_CTRL_INTERRUPT_ISR_REG1_LANE.BT.B3 &= ~0x3;	//clear tx sft rst chg falling/rising isr clear
}

/**
 * \module rx_soft_reset
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/
void rx_soft_reset(void) BANKING_CTRL {

    set_first_time_power_up();
    pll_request_pll_access(PLL_SEQUENCE__Rx_Soft_Reset);

	drv_rx_off_dig_prot_en();
	drv_rx_off_seq();

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_PLL_DIG_OFF);
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_PLL_ANA_OFF);
    pll_free_pll();
    clear_first_time_power_up();
//	clear_rx_isr();
    #ifdef DRV_PWR_V1
        drv_rx_sft_rst_assert();
    #endif
}

void rx_soft_reset_release(void) BANKING_CTRL {

    drv_spd_cfg_dec();
    drv_default_toggle();       //No tx/rx separate func, 56G does not support rebundle

    set_first_time_power_up();
    pll_request_pll_access(PLL_SEQUENCE__Rx_Soft_Reset_Release);
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_PLL_ANA_ON);
	drv_rx_on_seq();	
	Calibration_rx();
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_PLL_DIG_ON);
    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
    pll_free_pll();
    clear_first_time_power_up();
	drv_rx_on_dig_prot_dis();	
    #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
	drv_rx_on_dig_prot_dis();	
    pll_free_pll();
    clear_first_time_power_up();
    #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)

	PHY_STATUS = ST_PLLREADY;
}

void tx_soft_reset(void) BANKING_CTRL {
 
    set_first_time_power_up();
    pll_request_pll_access(PLL_SEQUENCE__Tx_Soft_Reset);
	drv_tx_off_dig_prot_en();
	drv_tx_off_seq();
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_PLL_DIG_OFF);
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_PLL_ANA_OFF);
    pll_free_pll();
    clear_first_time_power_up();
//	clear_tx_isr();
    #ifdef DRV_PWR_V1
        drv_tx_sft_rst_assert();
    #endif
}

void tx_soft_reset_release(void) BANKING_CTRL {

    drv_spd_cfg_dec();
    drv_default_toggle();    //No tx/rx separate func, 56G does not support rebundle

    set_first_time_power_up();
    pll_request_pll_access(PLL_SEQUENCE__Tx_Soft_Reset_Release);
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_PLL_ANA_ON);
	drv_tx_on_seq();		
	Calibration_tx();
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_PLL_DIG_ON);
    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
    pll_free_pll();
    clear_first_time_power_up();
	drv_tx_on_dig_prot_dis();
    #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
	drv_tx_on_dig_prot_dis();
    pll_free_pll();
    clear_first_time_power_up();
    #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)

	PHY_STATUS = ST_PLLREADY;
}

void trx_soft_reset(void) BANKING_CTRL {

    //RX_OFF();
    drv_rx_off_dig_prot_en();
    drv_rx_off_seq();

    //TX_OFF();
    drv_tx_off_dig_prot_en();
    drv_tx_off_seq();

    //RX_PLL_OFF();
    set_first_time_power_up();
    
    reg_MCU_DEBUG0_LANE_7_0 = 0x18;
    pll_request_pll_access(PLL_SEQUENCE__Trx_Soft_Reset);

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_PLL_DIG_OFF);
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_PLL_ANA_OFF);

    //TX_PLL_OFF();
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_PLL_DIG_OFF);
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_PLL_ANA_OFF);
    pll_free_pll();
    clear_first_time_power_up();

    #ifdef DRV_PWR_V1
        drv_trx_sft_rst_assert();
    #endif

}	

static void trx_soft_reset_reinit() {

    #ifdef SUPPORT_SFT_RST_ISR
    //clear xdata lane memory to 0
    //reg_XDATA_CLEAR_ENABLE_LANE = 1;
    //delay(T_p5us);		
    //wait_for(reg_XDATA_CLEAR_DONE_LANE, 0);

    //re-init xdata and HW registers
    init_xdata();
    powerup_seq__lane_config_update();
    #endif // #ifdef SUPPORT_SFT_RST_ISR

    drv_spd_cfg_dec();

    #ifdef SUPPORT_SFT_RST_ISR
    init_reg();
    pll_state_lane_init();
    #endif // #ifdef SUPPORT_SFT_RST_ISR

    drv_default_toggle();
}

void trx_soft_reset_release(void) BANKING_CTRL {

    trx_soft_reset_reinit();

    reg_MCU_DEBUG0_LANE_7_0 = 0x19;

    set_first_time_power_up();
    pll_request_pll_access(PLL_SEQUENCE__Trx_Soft_Reset_Release);

    drv_pll_slow_wakeup();

    drv_tx_on_seq();		
    Calibration_tx();
    drv_rx_slow_on_seq();
    Calibration_rx();

    delay(Tus);
    reg_DTL_FLOOP_FREEZE_LANE = 0;
    reg_ANA_RX_DTL_LOOP_FREEZE_LANE = 0;

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_PLL_DIG_ON);
    drv_tx_on_dig_prot_dis();

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_PLL_DIG_ON);

    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
    pll_free_pll();
    clear_first_time_power_up();
    drv_rx_on_dig_prot_dis();	
    #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
    drv_rx_on_dig_prot_dis();	
    pll_free_pll();
    clear_first_time_power_up();
    #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)

    PHY_STATUS = ST_PLLREADY;
}

#ifdef _PCIE_BUILD

uint8_t pin_reset_core_tx_sample = 0;

void trx_soft_reset_top_wrapper() BANKING_CTRL {

    trx_soft_reset_top();

    if(pin_reset_core_tx_sample) {
        pin_reset_core_tx_sample = 0;
        //2nd pin_reset_core transition occurred during middle of soft reset processing, so redo
        trx_soft_reset_top();
    }
}

void trx_soft_reset_top() BANKING_CTRL {

    PHY_STATUS = ST_TRX_SFT_RST;

    trx_soft_reset();

    //while((reg_MCU_DEBUGA_LANE_7_0=0x88)&&!reg_TX_SFT_RST_CHG_FALLING_ISR_LANE);

    PHY_STATUS = ST_TRX_SFT_RST_OFF;

    //wait for PIN_RESET_CORE = 0 and falling ISR is pending as a falling edge. Clear both rise/fall ISR afterwards
    wait_for(!reg_PIN_RESET_CORE_TX_RD_LANE && reg_TX_SFT_RST_CHG_FALLING_ISR_LANE,0);
 
    tx_soft_reset__clear_isr();
    rx_soft_reset__clear_isr();

    //sample pin_reset_core to see later check if it was asserted during interrupt clear above
    pin_reset_core_tx_sample = reg_PIN_RESET_CORE_TX_RD_LANE;

    reg_PIPE_TX_SFT_RST_NO_REG_LANE = 0;   //PIPE sft_rst release should be after PIN_RESET_CORE falling edge
    reg_PIPE_RX_SFT_RST_NO_REG_LANE = 0; 
    wait_for(reg_DPHY_ANA_POWER_STATE_VALID_RD_LANE && reg_PIN_PU_PLL_RD_LANE, 0);
    force_delay(T_p5us);

    reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
    reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;
    reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
    reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
    reg_INT_POWER_STATE_VALID_CHG_RISING_ISR_CLEAR_LANE = 1;
    reg_INT_POWER_STATE_VALID_CHG_RISING_ISR_CLEAR_LANE = 0;

    clear_all_isr();

    trx_soft_reset_release();
}
#endif // #ifdef _PCIE_BUILD

#ifdef SUPPORT_SFT_RST_ISR
void set_mcu_soft_reset_occurred(uint8_t val) BANKING_CTRL {
	switch(mcuid) {
	case MCU_LANE0: cmx_MCU_SOFT_RESET_OCCURRED_LANE0_7_0 = val; break;
	case MCU_LANE1: cmx_MCU_SOFT_RESET_OCCURRED_LANE1_7_0 = val; break;
	case MCU_LANE2: cmx_MCU_SOFT_RESET_OCCURRED_LANE2_7_0 = val; break;
	case MCU_LANE3: cmx_MCU_SOFT_RESET_OCCURRED_LANE3_7_0 = val; break;
	}
}

bool did_mcu_soft_reset_occur() BANKING_CTRL {
	switch(mcuid) {
	case MCU_LANE0: if(cmx_MCU_SOFT_RESET_OCCURRED_LANE0_7_0) return true; break;
	case MCU_LANE1: if(cmx_MCU_SOFT_RESET_OCCURRED_LANE1_7_0) return true; break;
	case MCU_LANE2: if(cmx_MCU_SOFT_RESET_OCCURRED_LANE2_7_0) return true; break;
	case MCU_LANE3: if(cmx_MCU_SOFT_RESET_OCCURRED_LANE3_7_0) return true; break;
	}
    return false;
}
#endif // #ifdef SUPPORT_SFT_RST_ISR
