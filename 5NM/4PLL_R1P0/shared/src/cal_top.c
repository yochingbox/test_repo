/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_top.c
* \purpose calibration call
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
#include "calibration_common.h"
//#include "driver.h"
#include "pll_sharing.h"
#include "mcu_command.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

/**
 * \module Calibration Top
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/

#define CAL_MCU_SYNC_COMMON 1

#ifdef CAL_MCU_SYNC_COMMON
enum CAL_MCU_SYNC_ID {
    CAL_MCU_SYNC_ID__VDD_CAL_TX_REG,
    CAL_MCU_SYNC_ID__VDD_CAL_RX_CLK_TOP,
    CAL_MCU_SYNC_ID__VDD_CAL_VDDA,
    CAL_MCU_SYNC_ID__RX_IMP,
    CAL_MCU_SYNC_ID__TX_IMP
};

static void cal_mcu_sync_execute(const enum CAL_MCU_SYNC_ID cal_id) {

    switch(cal_id) {
        case CAL_MCU_SYNC_ID__VDD_CAL_TX_REG:
	        vdd_cal(TX_REGULATORS);
            break;
        case CAL_MCU_SYNC_ID__VDD_CAL_RX_CLK_TOP:
			vdd_cal(RX_CLK_TOP_REGULATORS);
            break;
        case CAL_MCU_SYNC_ID__VDD_CAL_VDDA:
		    vdd_cal(VDDA_RXSMPLR);
            break;
        case CAL_MCU_SYNC_ID__RX_IMP:
			calibration_execute(RX_IMP_CAL_INDEX);
            break;
        case CAL_MCU_SYNC_ID__TX_IMP:
			tximp_cal();
            break;
    }
}

static void cal_mcu_sync(const enum CAL_MCU_SYNC_ID cal_id) {

    switch(mcuid) {
        case MCU_LANE0: MCU_SYNC_LANE0 = 1;break;
        case MCU_LANE1: MCU_SYNC_LANE1 = 1;break;
        case MCU_LANE2: MCU_SYNC_LANE2 = 1;break;
        case MCU_LANE3: MCU_SYNC_LANE3 = 1;break;
    }
    
    short_delay();
    if(FW_PIN_PU_PLL_RD_LANE0) {
        if(mcuid==MCU_LANE0) {
            while((reg_MCU_DEBUG_CMN_0_7_0&0x1)==0);
            cal_mcu_sync_execute(cal_id);
            MCU_SYNC_LANE0 = 0;
            VDD_CAL_DONE_LANE0 = 1;
        }
    }
    if(FW_PIN_PU_PLL_RD_LANE1) {
        if(mcuid==MCU_LANE1) {
            while(((reg_MCU_DEBUG_CMN_0_7_0>>1)&0x1)==0);
            cal_mcu_sync_execute(cal_id);
            MCU_SYNC_LANE1 = 0;
            VDD_CAL_DONE_LANE1 = 1;
        }
    }
    if(FW_PIN_PU_PLL_RD_LANE2) {
        if(mcuid==MCU_LANE2) {
            while(((reg_MCU_DEBUG_CMN_0_7_0>>2)&0x1)==0);
            cal_mcu_sync_execute(cal_id);
            MCU_SYNC_LANE2 = 0;
            VDD_CAL_DONE_LANE2 = 1;
        }
    }
    if(FW_PIN_PU_PLL_RD_LANE3) {
        if(mcuid==MCU_LANE3) {
            while(((reg_MCU_DEBUG_CMN_0_7_0>>3)&0x1)==0);
            cal_mcu_sync_execute(cal_id);
            MCU_SYNC_LANE3 = 0;
            VDD_CAL_DONE_LANE3 = 1;
        }
    }
}

void static cal_mcu_sync__set_vdd_cal_done() {
    switch(mcuid) {
        case MCU_LANE0: VDD_CAL_DONE_LANE0 = 1;break;
        case MCU_LANE1: VDD_CAL_DONE_LANE1 = 1;break;
        case MCU_LANE2: VDD_CAL_DONE_LANE2 = 1;break;
        case MCU_LANE3: VDD_CAL_DONE_LANE3 = 1;break;
    }

    if ((VDD_CAL_DONE_LANE0|!FW_PIN_PU_PLL_RD_LANE0) &&
        (VDD_CAL_DONE_LANE1|!FW_PIN_PU_PLL_RD_LANE1) &&
        (VDD_CAL_DONE_LANE2|!FW_PIN_PU_PLL_RD_LANE2) &&
        (VDD_CAL_DONE_LANE3|!FW_PIN_PU_PLL_RD_LANE3)) {
        reg_VDDACAL_COMP_EN = 0;
        VDD_CAL_DONE_LANE0 = 0;
        VDD_CAL_DONE_LANE1 = 0;
        VDD_CAL_DONE_LANE2 = 0;
        VDD_CAL_DONE_LANE3 = 0;
    }

    while(reg_VDDACAL_COMP_EN);
}

void static cal_mcu_sync__set_rx_imp_cal_done() {
    switch(mcuid) {
        case MCU_LANE0: RXIMP_CAL_DONE_LANE0 = 1;break;
        case MCU_LANE1: RXIMP_CAL_DONE_LANE1 = 1;break;
        case MCU_LANE2: RXIMP_CAL_DONE_LANE2 = 1;break;
        case MCU_LANE3: RXIMP_CAL_DONE_LANE3 = 1;break;
    }

    if(	(RXIMP_CAL_DONE_LANE0|!FW_PIN_PU_PLL_RD_LANE0) &&
        (RXIMP_CAL_DONE_LANE1|!FW_PIN_PU_PLL_RD_LANE1) &&
        (RXIMP_CAL_DONE_LANE2|!FW_PIN_PU_PLL_RD_LANE2) &&
        (RXIMP_CAL_DONE_LANE3|!FW_PIN_PU_PLL_RD_LANE3)) {
        reg_RXIMPCAL_EN = 0;
    }            

    while(reg_RXIMPCAL_EN);
}

void static cal_mcu_sync__set_tx_imp_cal_done() {
    switch(mcuid) {
        case MCU_LANE0: TXIMP_CAL_DONE_LANE0 = 1;break;
        case MCU_LANE1: TXIMP_CAL_DONE_LANE1 = 1;break;
        case MCU_LANE2: TXIMP_CAL_DONE_LANE2 = 1;break;
        case MCU_LANE3: TXIMP_CAL_DONE_LANE3 = 1;break;
    }

    if(	(TXIMP_CAL_DONE_LANE0|!FW_PIN_PU_PLL_RD_LANE0) &&
        (TXIMP_CAL_DONE_LANE1|!FW_PIN_PU_PLL_RD_LANE1) &&
        (TXIMP_CAL_DONE_LANE2|!FW_PIN_PU_PLL_RD_LANE2) &&
        (TXIMP_CAL_DONE_LANE3|!FW_PIN_PU_PLL_RD_LANE3)) {
        reg_TXIMPCAL_EN = 0;
    }

    while(reg_TXIMPCAL_EN);
}

#endif // #ifdef CAL_MCU_SYNC_COMMON

void Calibration(void) BANKING_CTRL {
	
	uint8_t maxrate;	
	int8_t inx;
	
	maxrate = 0;
	
	// --- CAL start
	if( mcuid==MCU_CMN ) {
        reg_MCU_DEBUG_CMN_0_7_0 = 0x0;  //must be 0 for Lane MCU <-> Common MCU sync to work

		PHY_STATUS_CMN = ST_CAL;
		cmx_CAL_DONE = 0;
		CONTROL_CONFIG6.BT.B0 &= 0xf9; //CAL_DONE_LANE0123, RXIMP_CAL_DONE0123 = 0
		CONTROL_CONFIG6.BT.B1 &= 0xf9;
		CONTROL_CONFIG6.BT.B2 &= 0xf9;
		CONTROL_CONFIG6.BT.B3 &= 0xf9;
		
		if( cmx_EXT_FORCE_CAL_DONE ) goto skip_out;				
		
		tsen_on();
		proc_cal();
		
		if(cmx_RXIMP_CAL_EXT_EN) {
			RXIMP_CAL_DONE_LANE0 = 0;
			RXIMP_CAL_DONE_LANE1 = 0;
			RXIMP_CAL_DONE_LANE2 = 0;
			RXIMP_CAL_DONE_LANE3 = 0;
		}
		if(cmx_TXIMP_CAL_EXT_EN) {
			TXIMP_CAL_DONE_LANE0 = 0;
			TXIMP_CAL_DONE_LANE1 = 0;
			TXIMP_CAL_DONE_LANE2 = 0;
			TXIMP_CAL_DONE_LANE3 = 0;
		}		
		
		TR1 = 1;
	}
	
	if( mcuid != MCU_CMN ){
		
		PHY_STATUS = ST_CAL;
		
		reg_MCU_DEBUG0_LANE_7_0 = 0x30;

        pll_request_pll_access(PLL_SEQUENCE__Calibration);

		if( cmx_EXT_FORCE_CAL_DONE ) {
			all_cal_ext();
			goto skip_out;
		}
		
		turn_off_tx_cont_cal();
		turn_off_rx_cont_cal();
		
		//TODO check_tsen_ready();
		
		reg_PIN_PLL_READY_RX_LANE = 0;
		reg_PIN_PLL_READY_TX_LANE = 0;
		reg_RX_INIT_DONE_LANE = 0;
		reg_ANA_TX_IDLE_FORCE_LANE = 1;
		reg_ANA_TX_IDLE_LANE = 1;
		reg_EOM_CLK_EN_LANE = 1;	
		
		while(!cmx_PROCESS_CAL_DONE);		
		
		//reg_MCU_DEBUG0_LANE_7_0 = 0x10;
		//reg_MCU_DEBUG6_LANE_7_0 = rate + 0x70;
		
		//drv_power_off_dig_prot_en();
		//DTL_DTX_DFE_clkoff_reset_1();
		//reg_RESET_ANA_LANE = 0;
		//reg_RX_RESET_ANA_LANE = 0; 
		//reg_TX_RESET_ANA_LANE = 0;
		
        pll_access_route(PLL__RS_OR_TS__ANY, MCU_LOAD_INIT_TEMP_TABLE);
		
		#if !defined _SERDES_BUILD && !defined NO_CAL_LOOP
        #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
		maxrate = get_pll_rate_index(reg_PIN_PHY_GEN_MAX_RX_RD_LANE_5_0);
        reg_MCU_DEBUG0_LANE_7_0 = 0x99;
        reg_MCU_DEBUG1_LANE_7_0 = maxrate;
        #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

        #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
		maxrate = get_pll_rate_index(PCIE_PHY_GEN_MAX);
        #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
		for(inx=0; inx<=maxrate; inx++) 
		#endif	
		{
			reg_MCU_DEBUG0_LANE_7_0 = 0x30 + inx;

            pll_access_route(PLL__RS_OR_TS__ANY, MCU_PLL_CLK_RDY_ALL_0);
		
			#if defined _SERDES_BUILD || defined NO_CAL_LOOP
			gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_5_0;
			gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_5_0;

			LoadSpeedtbl_rx();
			LoadSpeedtbl_tx();
			#endif
            
            pll_access_route_data(PLL__RS_OR_TS__ANY, MCU_PLL_CAL_LOAD_SPD_TBL, inx, 0);

			reg_MCU_DEBUG0_LANE_7_0 = 0x30 + 0xf;
			
		}

	   //--- GEN LOOP ---
       
	   #if !defined _SERDES_BUILD && !defined NO_CAL_LOOP
       #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	   /*maxrate = reg_PIN_PHY_GEN_MAX_RX_RD_LANE_5_0;*/
       maxrate = PCIE_PHY_GEN_MAX;
       #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

       #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
	   maxrate = PCIE_PHY_GEN_MAX;
       #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
	   for(inx=maxrate; inx>=0; inx--) 
	   #endif	
	   {
		
			reg_MCU_DEBUG0_LANE_7_0 = 0x50 + inx;
			#if !defined NO_CAL_LOOP
            #ifndef _SERDES_BUILD
                gen_rx = inx; gen_tx = inx;
                LoadSpeedtbl_rx();
                LoadSpeedtbl_tx();
                //dfe_spd_init(); //moved to inside LoadSpeedtbl_rx
			#endif // #ifndef _SERDES_BUILD
			#endif // #if !defined NO_CAL_LOOP

			if(cmx_TX_VDD_CAL_EXT_EN == 0)
			{
                reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
                
                cal_mcu_sync(CAL_MCU_SYNC_ID__VDD_CAL_TX_REG);
                cal_mcu_sync__set_vdd_cal_done();
			}

            calibration_execute(TXDCC_CAL_INDEX); // txdcc_cal included txalign90
			
			if(cmx_RX_VDD_CAL_EXT_EN == 0)
			{
                reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
                
                cal_mcu_sync(CAL_MCU_SYNC_ID__VDD_CAL_RX_CLK_TOP);
                cal_mcu_sync__set_vdd_cal_done();
            }

			//rx_clk
            calibration_execute(RX_CLK_CAL_INDEX);
            calibration_execute(RXEOM_CAL_INDEX);

	
		// --
		#if !defined _SERDES_BUILD && !defined NO_CAL_LOOP
		if(inx!=maxrate) {
            reg_MCU_DEBUG0_LANE_7_0 = 0x50 + 0xf;
            continue;
        }
		#endif			
	  	
		if(cmx_RX_VDD_CAL_EXT_EN == 0)
		{
			reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
			
            cal_mcu_sync(CAL_MCU_SYNC_ID__VDD_CAL_VDDA);
            cal_mcu_sync__set_vdd_cal_done();
		}

		// --
		sampler_cal();
		
		#ifdef _SERDES_BUILD
            #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
		        if(!reg_PWRON_SEQ_LANE && !cmx_CAL_START) goto skip_out;
            #else
		        if(!reg_PWRON_SEQ_TX_LANE && !reg_PWRON_SEQ_RX_LANE && !cmx_CAL_START) goto skip_out;
            #endif
		#endif
		
		rx_sq_ofst_cal();
		rx_sq_thresh_cal();
		
		//lane0 -> lane1 -> lane2 -> lane3 :share common comparator
		//if(cmx_RXIMP_CAL_EXT_EN == 0)
		{
			reg_RXIMPCAL_EN = 1;

            cal_mcu_sync(CAL_MCU_SYNC_ID__RX_IMP);
            cal_mcu_sync__set_rx_imp_cal_done();
		}

		//Disable the calibration comparator, once calibration is complete
		reg_VDDACAL_COMP_EN = 0;
		
		// -- 
		//if(cmx_TXIMP_CAL_EXT_EN == 0)
		{
			//mcu_align_0();
			// issue request
			reg_TXIMPCAL_EN = 1;

            cal_mcu_sync(CAL_MCU_SYNC_ID__TX_IMP);
            cal_mcu_sync__set_tx_imp_cal_done();
		}

		reg_MCU_DEBUG0_LANE_7_0 = 0x50 + 0xf;
		
	   }
	}	


skip_out:
	reg_ANA_TX_IDLE_LANE = 0;
	reg_ANA_TX_IDLE_FORCE_LANE = 0;

	if(mcuid != MCU_CMN) {
		#ifdef _SERDES_BUILD		
		turn_on_tx_cont_cal();
		turn_on_rx_cont_cal();
		#endif

        reg_DFE_CLK_OFF_LANE = 0; 

        pll_free_pll();

		switch(mcuid) {
		case MCU_LANE0: CAL_DONE_LANE0 = 1;	break;
		case MCU_LANE1: CAL_DONE_LANE1 = 1;	break;
		case MCU_LANE2: CAL_DONE_LANE2 = 1;	break;
		case MCU_LANE3: CAL_DONE_LANE3 = 1;	break;
		}
	}	
	else {	
		while(1) {
			if((FW_PIN_PU_PLL_RD_LANE0? CAL_DONE_LANE0:1) && 
               (FW_PIN_PU_PLL_RD_LANE1? CAL_DONE_LANE1:1) && 
               (FW_PIN_PU_PLL_RD_LANE2? CAL_DONE_LANE2:1) && 
               (FW_PIN_PU_PLL_RD_LANE3? CAL_DONE_LANE3:1)) break;						

			if(!MCU_SYNC_LANE0)
				reg_MCU_DEBUG_CMN_0_7_0 &= ~1;
			if(!MCU_SYNC_LANE1)
				reg_MCU_DEBUG_CMN_0_7_0 &= ~2;
			if(!MCU_SYNC_LANE2)
				reg_MCU_DEBUG_CMN_0_7_0 &= ~4;
			if(!MCU_SYNC_LANE3)
				reg_MCU_DEBUG_CMN_0_7_0 &= ~8;

			if(reg_MCU_DEBUG_CMN_0_7_0==0){
				if(MCU_SYNC_LANE0)
					reg_MCU_DEBUG_CMN_0_7_0 = 1;
				else if(MCU_SYNC_LANE1)
					reg_MCU_DEBUG_CMN_0_7_0 = 2;
				else if(MCU_SYNC_LANE2)
					reg_MCU_DEBUG_CMN_0_7_0 = 4;
				else if(MCU_SYNC_LANE3)
					reg_MCU_DEBUG_CMN_0_7_0 = 8;
			}
		}
		cmx_CAL_DONE = 1;
		cmx_CAL_START = 0;
		
		#ifdef SUPPORT_TEMP_SINGLE_SHOT_MODE
		if(tsen_check) { //read temperature evry 1msec.			
			read_tsen_cal();
			tsen_check = 0;	
		}	
		#endif
	}
}	

void Calibration_rx(void) BANKING_CTRL {

	if( mcuid == MCU_CMN ) return;

	PHY_STATUS = ST_RX_CAL;
	reg_MCU_DEBUG0_LANE_7_0 = 0x31;
	//cmx_RX_CAL_DONE = 0;
	lnx_RX_CAL_DONE_LANE = 0;

	reg_PIN_PLL_READY_RX_LANE = 0;

    pll_request_pll_access(PLL_SEQUENCE__Calibration_rx);
	
	if( cmx_EXT_FORCE_CAL_DONE ) {
		all_cal_ext_rx();
		goto skip_out_rx;	
	}

	turn_off_rx_cont_cal();
	
	//reg_ANA_TX_IDLE_FORCE_LANE = 1;
	reg_RX_INIT_DONE_LANE = 0; //??
	//reg_ANA_TX_IDLE_LANE = 1;
	//reg_ANA_TX_IDLE_LANE = 0;
	reg_EOM_CLK_EN_LANE = 1;
	
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_CLK_RX_READY_0);
	
	//DTL_DTX_DFE_clkoff_reset_1();

	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_5_0;	
	LoadSpeedtbl_rx();

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_CAL);
	
	//
	//dfe_spd_init(); //moved inside LoadSpeedtbl_rx
	
	if(cmx_RX_VDD_CAL_EXT_EN == 0)
	{
		reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
		
        cal_mcu_sync(CAL_MCU_SYNC_ID__VDD_CAL_RX_CLK_TOP);
        cal_mcu_sync__set_vdd_cal_done();
	}

    calibration_execute(RX_CLK_CAL_INDEX);
    calibration_execute(RXEOM_CAL_INDEX);

	if(cmx_RX_VDD_CAL_EXT_EN == 0)
	{
		reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
		
        cal_mcu_sync(CAL_MCU_SYNC_ID__VDD_CAL_VDDA);
        cal_mcu_sync__set_vdd_cal_done();
	}

	sampler_cal();

skip_out_rx:

	lnx_RX_CAL_DONE_LANE = 1;
	
	turn_on_rx_cont_cal(); 	
	
    pll_free_pll();

	reg_MCU_DEBUG0_LANE_7_0 = 0x80;
	
}

void Calibration_tx(void) BANKING_CTRL {

	if( mcuid == MCU_CMN ) return;
		
	PHY_STATUS = ST_TX_CAL;
	reg_MCU_DEBUG0_LANE_7_0 = 0x32;
	lnx_TX_CAL_DONE_LANE = 0;

    pll_request_pll_access(PLL_SEQUENCE__Calibration_tx);

	if( cmx_EXT_FORCE_CAL_DONE ) {
		all_cal_ext_tx();
		goto skip_out_tx;
	}
	
	turn_off_tx_cont_cal();

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_CLK_TX_READY_0);
	
	reg_ANA_TX_IDLE_FORCE_LANE = 1;
	reg_ANA_TX_IDLE_LANE = 1;
	
	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_5_0;
	LoadSpeedtbl_tx();		

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_CAL);
	
	if(cmx_TX_VDD_CAL_EXT_EN == 0)
	{
		reg_VDDACAL_COMP_EN = 1;  // enable CMN comparator
		
        cal_mcu_sync(CAL_MCU_SYNC_ID__VDD_CAL_TX_REG);
        cal_mcu_sync__set_vdd_cal_done();
	}

    calibration_execute(TXDCC_CAL_INDEX); // txdcc_cal included txalign90

	reg_ANA_TX_IDLE_LANE = 0;
	reg_ANA_TX_IDLE_FORCE_LANE = 0;
	//reg_EOM_CLK_EN_LANE = 1;

skip_out_tx:

	lnx_TX_CAL_DONE_LANE = 1;
	
	turn_on_tx_cont_cal(); //TODO

    pll_free_pll();

	PHY_STATUS = ST_PLLREADY; //TODO
	
	reg_MCU_DEBUG0_LANE_7_0 = 0x88;
}

void all_cal_ext_rx(void) BANKING_CTRL {

	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_5_0;	
	LoadSpeedtbl_rx();
	PHY_STATUS = ST_RX_CAL;

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_ALL_CAL_EXT_RX);
	
	delay(T_10us);

    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	check_rx_pll_lock();
    #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_CHECK_FOR_RX_PLL_LOCK);
    #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
}

void all_cal_ext_tx(void) BANKING_CTRL {

	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_5_0;
	LoadSpeedtbl_tx();
	PHY_STATUS = ST_TX_CAL;

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_ALL_CAL_EXT_TX);
	
	delay(T_10us);

    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	check_tx_pll_lock();
    #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_CHECK_FOR_TX_PLL_LOCK);
    #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)

}

void all_cal_ext(void) BANKING_CTRL {

	reg_MCU_DEBUG0_LANE_7_0 = 0x31;
	
    if(pll_sel != TS_ON)  {
        pll_access_route(PLL__RS_OR_TS__RS, MCU_RESET_RS_PLL);
    }    

    if(pll_sel != RS_ON)  {
        pll_access_route(PLL__RS_OR_TS__TS, MCU_RESET_TS_PLL);
    }
	
	gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_5_0;
	gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_5_0;

	LoadSpeedtbl_rx();
	LoadSpeedtbl_tx();
	
	PHY_STATUS = ST_CAL;

    if(pll_sel != TS_ON)  {
        pll_access_route(PLL__RS_OR_TS__RS, MCU_CLR_RS_RST_CLK_READY);
    }

    if(pll_sel != RS_ON)  {
        pll_access_route(PLL__RS_OR_TS__TS, MCU_CLR_TS_RST_CLK_READY);
    }

	reg_ANA_TSEN_ADC_RESET = 0;
	delay(T_10us);

    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	check_rx_pll_lock();
	check_tx_pll_lock();
    #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_CHECK_FOR_RX_TX_BOTH_PLL_LOCK);
    #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)

}

#ifndef _SERDES_BUILD
void rx_cal_load(void) BANKING_CTRL { 

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

        /*if(pll_sel != TS_ON) {*/
            /*pll_access_route(PLL__RS_OR_TS__RS, MCU_RX_CAL_LOAD);*/
        /*}*/
	
		reg_RX_E2C_DCC_CAL_RESULT_EXT_LANE_6_0      = lnx_cal_rx_e2c_dcc[gen_rx];
		reg_RX_DLL_CAL_RESULT_MSB_EXT_LANE_3_0      = lnx_cal_rx_dll_msb[gen_rx];
		reg_RX_DLL_CAL_RESULT_LSB_EXT_LANE_6_0      = lnx_cal_rx_dll_lsb[gen_rx];
		reg_RX_PI_DCC_CAL_RESULT_EXT_LANE_5_0       = lnx_cal_rx_pi_dcc[gen_rx];
		reg_RX_ALIGN90_CAL_RESULT_MSB_EXT_LANE_2_0  = lnx_cal_rx_align90_msb[gen_rx];
		reg_RX_ALIGN90_CAL_RESULT_LSB_EXT_LANE_6_0  = lnx_cal_rx_align90_lsb[gen_rx];
		reg_RX_DATA_DCC_CAL_RESULT_MSB_EXT_LANE_2_0 = lnx_cal_rx_data_dcc_msb[gen_rx];
		reg_RX_DATA_DCC_CAL_RESULT_LSB_EXT_LANE_5_0 = lnx_cal_rx_data_dcc_lsb[gen_rx];
		reg_RX_EDGE_DCC_CAL_RESULT_MSB_EXT_LANE_2_0 = lnx_cal_rx_edge_dcc_msb[gen_rx];
		reg_RX_EDGE_DCC_CAL_RESULT_LSB_EXT_LANE_5_0 = lnx_cal_rx_edge_dcc_lsb[gen_rx];
		
		reg_RX_E2C_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_RX_DLL_CAL_BYPASS_EN_LANE = 0;
		reg_RX_PI_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_RX_ALIGN90_CAL_BYPASS_EN_LANE = 0;
		reg_RX_DATA_DCC_CAL_BYPASS_EN_LANE = 0;
		reg_RX_EDGE_DCC_CAL_BYPASS_EN_LANE = 0;
		
		reg_RX_E2C_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_DLL_CAL_SINGLE_EN_LANE = 0;
		reg_RX_PI_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_ALIGN90_CAL_SINGLE_EN_LANE = 0;
		reg_RX_DATA_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_EDGE_DCC_CAL_SINGLE_EN_LANE = 0;
		
		reg_RX_CLK_TOP_START_LANE  = 0;
		reg_RX_CLK_TOP_START_LANE  = 1;
		delay(T_p5us);		
		while (!reg_RX_CLK_TOP_DONE_LANE);
		
		reg_RX_CLK_TOP_START_LANE  = 0;

		reg_RX_E2C_DCC_CAL_SINGLE_EN_LANE = 1;
		reg_RX_DLL_CAL_SINGLE_EN_LANE = 1;
		reg_RX_PI_DCC_CAL_SINGLE_EN_LANE = 1;
		reg_RX_ALIGN90_CAL_SINGLE_EN_LANE = 1;
		reg_RX_DATA_DCC_CAL_SINGLE_EN_LANE = 1;
		reg_RX_EDGE_DCC_CAL_SINGLE_EN_LANE = 1;
		
		// --
		
		reg_RX_EOM_DLL_CAL_RESULT_MSB_EXT_LANE_3_0      = lnx_cal_rx_eom_dll_msb[gen_rx];
		reg_RX_EOM_DLL_CAL_RESULT_LSB_EXT_LANE_6_0      = lnx_cal_rx_eom_dll_lsb[gen_rx];
		reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_10_8			= lnx_cal_rx_eom_pi_msb[gen_rx];
		reg_RX_EOM_PI_CAL_RESULT_EXT_LANE_7_0 			= lnx_cal_rx_eom_pi_lsb[gen_rx];
		reg_RX_EOM_PI_DCC_CAL_RESULT_EXT_LANE_5_0       = lnx_cal_rx_eom_pi_dcc[gen_rx];
		
		reg_RX_EOM_DLL_CAL_BYPASS_EN_LANE = 0;
		reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 0;
		reg_RX_EOM_PI_DCC_CAL_BYPASS_EN_LANE = 0;
		
		reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE = 0;
		reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE = 0;
		reg_RX_EOM_PI_CAL_SINGLE_EN_LANE = 0;
		
		reg_RX_EOM_TOP_START_LANE  = 0;
		reg_RX_EOM_TOP_START_LANE  = 1;
		delay(T_p5us);		
		while (!reg_RX_CLK_TOP_DONE_LANE);
		
		reg_RX_EOM_TOP_START_LANE  = 0;

		reg_RX_EOM_DLL_CAL_SINGLE_EN_LANE = 1;
		reg_RX_EOM_PI_DCC_CAL_SINGLE_EN_LANE = 1;
		reg_RX_EOM_PI_CAL_SINGLE_EN_LANE = 1;
	
}

void tx_cal_load(void) BANKING_CTRL { 

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
        /*if(pll_sel != RS_ON) {*/
            /*pll_access_route(PLL__RS_OR_TS__TS, MCU_TX_CAL_LOAD);*/
        /*}*/
		
		/*reg_TX_IMP_ICCP_CAL_RESULT_EXT_LANE_4_0 = lnx_cal_tx_imp_iccp[gen_tx];*/
		/*reg_TX_IMP_ICCN_CAL_RESULT_EXT_LANE_4_0 = lnx_cal_tx_imp_iccn[gen_tx];*/
		
		reg_TX_IMP_ICCP_CAL_BYPASS_EN_LANE = 0;
		reg_TX_IMP_ICCN_CAL_BYPASS_EN_LANE = 0;
		
		reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE = 0;
		reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE = 0;
		
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 1;
		
		delay(T_p5us);
		
		while (!reg_TX_ALIGN90_DCC_IMP_TOP_DONE_LANE);
		reg_TX_ALIGN90_DCC_IMP_TOP_START_LANE = 0;

		reg_TX_IMP_ICCP_CAL_SINGLE_EN_LANE = 1;
		reg_TX_IMP_ICCN_CAL_SINGLE_EN_LANE = 1;
}
#endif // #ifndef _SERDES_BUILD

void turn_on_tx_cont_cal_ts_pll(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
	if(pll_sel != RS_ON) {
		ts_pll_amp_cal_cont();
		
		if(cmx_PLL_TEMP_CAL_CONT_EN) {
            pll_tempc_ts_cont();
		}	
		
		ts_plldcc_cal_cont();
	}	
}

void turn_on_tx_only_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

	txdcc_cal_cont();
}

void turn_on_tx_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
    if(pll_sel != RS_ON) { 
        pll_access_route(PLL__RS_OR_TS__TS, MCU_TURN_ON_TX_CONT_CAL_TS_PLL);
    }

    turn_on_tx_only_cont_cal();
}	

void turn_on_rx_cont_cal_rs_pll(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

	if(pll_sel != TS_ON) {
		rs_pll_amp_cal_cont();
		
		if(cmx_PLL_TEMP_CAL_CONT_EN) {
            pll_tempc_rs_cont();
		}	

		rs_plldcc_cal_cont();
	}	
}

void turn_on_rx_only_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

	rx_clk_cont_cal();
	eom_clk_cont_cal();
}

void turn_on_rx_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

    if(pll_sel != TS_ON) { 
        pll_access_route(PLL__RS_OR_TS__RS, MCU_TURN_ON_RX_CONT_CAL_RS_PLL);
    }

    turn_on_rx_only_cont_cal();
}

void turn_off_tx_cont_cal_ts_pll(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
	if(pll_sel != RS_ON) {
		if(reg_PLL_AMP_TS_TOP_CONT_START_LANE) {
			reg_PLL_AMP_TS_TOP_CONT_START_LANE = 0;
			while (!reg_PLL_AMP_TS_TOP_CONT_DONE_LANE);
		}
		if(reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE) {
			reg_PLL_DCC_VDD_TS_TOP_CONT_START_LANE = 0;
			while (!reg_PLL_DCC_VDD_TS_TOP_CONT_DONE_LANE);
		}
		reg_PLL_TS_LCPLL_TEMPC_CAL_EN_LANE = 0;
	}
}

void turn_off_tx_only_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

	if(reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE) {
		reg_TX_ALIGN90_DCC_IMP_TOP_CONT_START_LANE = 0;
		while (!reg_TX_ALIGN90_DCC_IMP_TOP_CONT_DONE_LANE);
	}
}
	
void turn_off_tx_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
    if(reg_PIN_SPD_CFG_RD_3_0 >= 3) {
        if(pll_sel != RS_ON) {
            pll_access_route(PLL__RS_OR_TS__TS, MCU_TURN_OFF_TX_CONT_CAL_TS_PLL);
        }
    }
    else {
        turn_off_tx_cont_cal_ts_pll();
    }
	
    turn_off_tx_only_cont_cal();
}

void turn_off_rx_cont_cal_rs_pll(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
	if(pll_sel != TS_ON) {
		if(reg_PLL_AMP_RS_TOP_CONT_START_LANE) {
			reg_PLL_AMP_RS_TOP_CONT_START_LANE = 0;
			while (!reg_PLL_AMP_RS_TOP_CONT_DONE_LANE);
		}
		if(reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE) {
			reg_PLL_DCC_VDD_RS_TOP_CONT_START_LANE = 0;
			while (!reg_PLL_DCC_VDD_RS_TOP_CONT_DONE_LANE);
		}
		reg_PLL_RS_LCPLL_TEMPC_CAL_EN_LANE = 0;
	}	
}

void turn_off_rx_only_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;

	if(reg_RX_CLK_TOP_CONT_START_LANE) {
		reg_RX_CLK_TOP_CONT_START_LANE = 0;
		while (!reg_RX_CLK_TOP_CONT_DONE_LANE);
	}
}

void turn_off_rx_cont_cal(void) BANKING_CTRL {

	if( cmx_FORCE_CONT_CAL_SKIP ) return;
	
    if(reg_PIN_SPD_CFG_RD_3_0 >= 3) {
        if(pll_sel != TS_ON) {
            pll_access_route(PLL__RS_OR_TS__RS, MCU_TURN_OFF_RX_CONT_CAL_RS_PLL);
        }
    }
    else {
        turn_off_rx_cont_cal_rs_pll();
    }

    turn_off_rx_only_cont_cal();
}

