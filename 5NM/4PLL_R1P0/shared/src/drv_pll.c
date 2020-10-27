/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file drv_pll.c
* \purpose PLL interface
* \History
*	2/5/2020 Andrew Danilovic		Initial 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#ifdef _PCIE_BUILD
__code const uint8_t pcie_pll_rate_tb[] = {0x17, 0x18, 0x19}; //10G, 8G, 16G,
#endif // #ifdef _PCIE_BUILD
#ifdef _SAS_BUILD
__code const uint8_t sas_pll_rate_tb[] = {0x15, 0x16}; //12G, 11.25G
#endif // #ifdef _SAS_BUILD

//Reset Pll
//SPD_CFG: Callable by Master MCU Only
void drv_pll_rs_reset() BANKING_CTRL {
	reg_PLL_RS_RESET_ANA_LANE = 1;
	reg_ANA_PLL_RS_CLK_READY_LANE = 0;
}

//Reset Pll
//SPD_CFG: Callable by Master MCU Only
void drv_pll_ts_reset() BANKING_CTRL {
	reg_PLL_TS_RESET_ANA_LANE = 1;
	reg_ANA_PLL_TS_CLK_READY_LANE = 0;
}

void drv_pll_rs_dtx_clk_off() BANKING_CTRL {
    reg_PLL_RS_DTX_CLK_OFF_LANE = 0;
}

void drv_pll_ts_dtx_clk_off() BANKING_CTRL {
    reg_PLL_TS_DTX_CLK_OFF_LANE = 0;
}

void drv_pll_rs_dtx_lane_off() BANKING_CTRL {
    reg_RESET_PLL_RS_DTX_LANE = 0;
}

void drv_pll_ts_dtx_lane_off() BANKING_CTRL {
    reg_RESET_PLL_TS_DTX_LANE = 0;
}

void drv_pll_spd_chg_reset_pll_ts() BANKING_CTRL {
	//drv_pll_ts_off_seq(); //---
    reg_ANA_PLL_TS_CLK_READY_LANE = 0; //Part of Calibration?
    delay(T_2us);
    reg_PLL_TS_RESET_ANA_LANE = 1;
    //reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 0;
    //reg_ANA_PLL_TS_PU_PLL_LANE = 0;
}

void drv_pll_spd_chg_reset_pll_rs() BANKING_CTRL {
    //drv_pll_rs_off_seq(); //---
    reg_ANA_PLL_RS_CLK_READY_LANE = 0; 
    delay(T_2us);
    reg_PLL_RS_RESET_ANA_LANE = 1;
    //reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 0;
    //reg_ANA_PLL_RS_PU_PLL_LANE = 0;
}

void drv_pll_spd_chg_clr_reset_pll_ts() BANKING_CTRL {
	reg_PLL_TS_RESET_ANA_LANE = 0;
}

void drv_pll_spd_chg_clr_reset_pll_rs() BANKING_CTRL {
	reg_PLL_RS_RESET_ANA_LANE = 0;
}

/*void drv_pll_spd_chg_pll_cal_tx() BANKING_CTRL {*/
    /*reg_MCU_DEBUG0_LANE_7_0 = 0x04;*/
    /*tx_pll_fast_cal_sel();*/
    /*reg_MCU_DEBUG0_LANE_7_0 = 0x07;*/
    /*pll_clk_ts_ready_1();*/
/*}*/

/*void drv_pll_spd_chg_pll_cal_rx() BANKING_CTRL {*/
    /*rx_pll_fast_cal_sel();*/
    /*pll_clk_rs_ready_1();*/
/*}*/

void drv_pll_clear_ts_rst() BANKING_CTRL {
	reg_PLL_TS_RESET_ANA_LANE = 0;
    pll_clk_ts_ready_1();
}

void drv_pll_clear_rs_rst() BANKING_CTRL {
	reg_PLL_RS_RESET_ANA_LANE = 0;
    pll_clk_rs_ready_1();
}

void drv_pll_on() BANKING_CTRL {
    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
    tx_pll_ana_on();
    if(pll_sel != TS_ON) rx_pll_ana_on();
    tx_pll_fast_cal_sel();

    if(pll_sel != TS_ON) rx_pll_fast_cal_sel();
    SYNC_SATUS_PLL_OR_OFF = 0;
    delay(T_5us);
    tx_pll_dig_on(); //pu_pll_ts_on();
    #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
    if(pll_sel != RS_ON) tx_pll_ana_on();
    if(pll_sel != TS_ON) rx_pll_ana_on();
    if(pll_sel != RS_ON) tx_pll_fast_cal_sel();
    if(pll_sel != TS_ON) rx_pll_fast_cal_sel();
    SYNC_SATUS_PLL_OR_OFF = 0;
    delay(T_5us);
    tx_pll_dig_on(); //pu_pll_ts_on();
    #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
}

void drv_pll_off() BANKING_CTRL {
    turn_off_tx_cont_cal_ts_pll();
    turn_off_rx_cont_cal_rs_pll();
    tx_pll_dig_off();
    if(pll_sel != TS_ON) rx_pll_dig_off();
    tx_pll_ana_off();
    if(pll_sel != TS_ON) rx_pll_ana_off();
    SYNC_SATUS_PLL_OR_OFF = 1;		
}

void drv_pll_load_init_temp_table() BANKING_CTRL {
    if(pll_sel != RS_ON) load_init_temp_table(0); //ts
    if(pll_sel != TS_ON) load_init_temp_table(1); //rs
}

void drv_pll_cal_load_spd_table(const uint8_t inx) BANKING_CTRL {
    uint8_t rate = 0;

    #if defined _SERDES_BUILD || defined NO_CAL_LOOP
    if(pll_sel != TS_ON) { rx_pll_cal(); pll_clk_rs_ready_1();}
    if(pll_sel != RS_ON) { tx_pll_cal(); pll_clk_ts_ready_1(); }
    #else //PCIE
    #ifdef _PCIE_BUILD
    rate = pcie_pll_rate_tb[inx];	
    #endif // #ifdef _PCIE_BUILD
    #ifdef _SAS_BUILD
    rate = sas_pll_rate_tb[inx];	
    #endif // #ifdef _SAS_BUILD
    if(pll_sel != TS_ON) {

        #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
        loadspeedtbl_lc_pll(rate, reg_PIN_REF_FREF_SEL_RX_RD_LANE_4_0, 1);
        #endif

        #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
        loadspeedtbl_lc_pll(rate, PIN_REF_FREF_SEL_RD, 1);
        #endif

        RX_PLL_RATE_INX = inx;	
        rs_pll_cal();
        pll_clk_rs_ready_1();
    }	
    if(pll_sel != RS_ON) {

        #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
        loadspeedtbl_lc_pll(rate, reg_PIN_REF_FREF_SEL_TX_RD_LANE_4_0, 0);
        #endif

        #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
        loadspeedtbl_lc_pll(rate, PIN_REF_FREF_SEL_RD, 0);
        #endif
        TX_PLL_RATE_INX = inx;	
        ts_pll_cal();
        pll_clk_ts_ready_1();
    }	
    #endif
        
    if(pll_sel != TS_ON) rx_plldcc_cal();
    if(pll_sel != RS_ON) tx_plldcc_cal();
}

void drv_pll_clk_rx_ready_0() BANKING_CTRL {
	pll_clk_rx_ready_0();
}

void drv_pll_rx_cal() BANKING_CTRL {
	rx_pll_cal();
	pll_clk_rx_ready_1();
	rx_plldcc_cal();
}

void drv_pll_clk_tx_ready_0() BANKING_CTRL {
	pll_clk_tx_ready_0();
}

void drv_pll_tx_cal() BANKING_CTRL {
	tx_pll_cal();
	pll_clk_tx_ready_1();
	tx_plldcc_cal();
}

void drv_pll_rx_cal_load() BANKING_CTRL {
    reg_PLL_RS_DCC_CAL_RESULT_EXT_LANE_6_0 = lnx_cal_rs_plldcc[RX_PLL_RATE_INX];
    reg_PLL_RS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_rs_pllvdda_fbdiv[RX_PLL_RATE_INX];
    reg_PLL_RS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_rs_pllvdda_intp[RX_PLL_RATE_INX];
    reg_PLL_RS_VDDA_PFD_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_rs_pllvdda_pfd[RX_PLL_RATE_INX];
}

void drv_pll_tx_cal_load() BANKING_CTRL {
    reg_PLL_TS_DCC_CAL_RESULT_EXT_LANE_6_0 = lnx_cal_ts_plldcc[RX_PLL_RATE_INX];
    reg_PLL_TS_VDDA_FBDIV_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_ts_pllvdda_fbdiv[TX_PLL_RATE_INX];
    reg_PLL_TS_VDDA_INTP_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_ts_pllvdda_intp[TX_PLL_RATE_INX];
    reg_PLL_TS_VDDA_PFD_CAL_RESULT_EXT_LANE_3_0 = lnx_cal_ts_pllvdda_pfd[TX_PLL_RATE_INX];
}

void drv_pll_assert_ana_rs_pu_pll() BANKING_CTRL {
    reg_ANA_PLL_RS_PU_PLL_LANE = 1;
    delay(Tus);
    reg_ANA_PLL_RS_PU_PLL_DLY_LANE = 1;
}

void drv_pll_assert_ana_ts_pu_pll() BANKING_CTRL {
    reg_MCU_DEBUG0_LANE_7_0 = 0x46;
    reg_ANA_PLL_TS_PU_PLL_LANE = 1;
    delay(Tus);
    reg_ANA_PLL_TS_PU_PLL_DLY_LANE = 1;
}

void drv_pll_clk_ts_ready() BANKING_CTRL {
    pll_clk_ts_ready_1();
}

void drv_pll_clk_rs_ready() BANKING_CTRL {
    pll_clk_rs_ready_1();
}

void drv_pll_spd_chg_ts_fast_cal() BANKING_CTRL {
    drv_pll_spd_chg_clr_reset_pll_ts();

    /*drv_pll_spd_chg_pll_cal_tx();*/

    reg_MCU_DEBUG0_LANE_7_0 = 0x04;
    ts_pll_fast_cal();	
    reg_MCU_DEBUG0_LANE_7_0 = 0x07;
    pll_clk_ts_ready_1();

    if(!cmx_FORCE_CONT_CAL_SKIP) {
        reg_MCU_DEBUG0_LANE_7_0 = 0x08;
        drv_pll_tx_cal_load();
        reg_MCU_DEBUG0_LANE_7_0 = 0x09;
        turn_on_tx_cont_cal_ts_pll();
        reg_MCU_DEBUG0_LANE_7_0 = 0x0a;
    }
    drv_pll_ts_on_dig_prot_dis();
    reg_MCU_DEBUG0_LANE_7_0 = 0x0b;
}

void drv_pll_spd_chg_rs_fast_cal() BANKING_CTRL {
    drv_pll_spd_chg_clr_reset_pll_rs();

    /*drv_pll_spd_chg_pll_cal_rx();*/

    rs_pll_fast_cal();	
    pll_clk_rs_ready_1();

    if(!cmx_FORCE_CONT_CAL_SKIP) {
        drv_pll_rx_cal_load();
        turn_on_rx_cont_cal_rs_pll();
    }
    drv_pll_rs_on_dig_prot_dis();
}

/*void drv_rs_pll_slow_wakeup() {*/
    /*drv_pll_assert_ana_rs_pu_pll();*/
    /*delay(T_40us);*/
    /*reg_PLL_RS_TX_INTPRESET_EXT_LANE = 0;*/
    /*delay(T_10us);*/
	/*reg_PLL_RS_RESET_ANA_LANE = 0;*/
/*}*/

/*void drv_ts_pll_slow_wakeup() {*/
    /*drv_pll_assert_ana_ts_pu_pll();*/
    /*delay(T_40us);*/
    /*reg_PLL_TS_TX_INTPRESET_EXT_LANE = 0;*/
    /*delay(T_10us);*/
	/*reg_PLL_TS_RESET_ANA_LANE = 0;*/
/*}*/

void drv_pll_slow_wakeup() BANKING_CTRL {

    drv_pll_power_on();

    delay(T_40us);

    drv_pll_intpreset_ext();

    delay(T_10us);

    drv_pll_reset_ana_lane();
}
