/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power.c
* \purpose power control
* \History
*	10/5/2017 Heejeong Ryu		Initial 
*/

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#endif

void pu_ivref_on(void) BANKING_CTRL {

	EA = 0;
	reg_ANA_PU_IVREF = 1;
	delay01(10); //1us
	reg_ANA_PU_IVREF_DLY1 = 1;
	delay01(10); //1us
	reg_ANA_PU_IVREF_DLY2 = 1;
	delay01(10); //1us
	reg_ANA_PU_IVREF_DLY3 = 1;
	EA = 1;

}

void check_pu_ivref(void) BANKING_CTRL {
	do {
		if(reg_ANA_PU_IVREF_DLY3 /*|| reg_PU_IVREF_FELL==0*/) break;		
	} while(1);

}

void pu_rx_on(void) BANKING_CTRL {

	EA = 0;
	
	//need gate pu_rx
//	#ifdef SUPPORT_X2_RING_LANE
	if(serdes_ring_lane_en && tag_ringpll_ind_en) {
		if(ring_lane_sel) 
			reg_ANA_PU_PLL_RING = 1; 
		else 	
			reg_ANA_PU_PLL = 1; 
	}
	else 
//	#endif
	{
		reg_ANA_PU_PLL = 1; 
	}	
		
	reg_ANA_PU_RX_LANE = 1;	
	delay01(5);
	reg_ANA_PU_RX_DLY_LANE = 1;
	delay01(4);
	reg_FFE_PULSE_EN_LANE = 1;
	reg_ANA_RX_PU_DLY2_LANE = 1;
	EA =1;
	
}

void pu_rx_off(void) BANKING_CTRL {
	EA = 0;
	reg_FFE_PULSE_EN_LANE = 0;
	reg_ANA_PU_RX_LANE = 0;
	reg_ANA_PU_RX_DLY_LANE = 0;
	reg_ANA_RX_PU_DLY2_LANE = 0;
	EA = 1;
}

void pu_ringpll_off(void) BANKING_CTRL { 

	reg_DTX_CLK_OFF_RING = 1;
	reg_RESET_DTX_RING = 1;
	
	pll_clk_ready_ring_0();
	
	delay01(10);
	reg_RESET_ANA_RING = 1;	
	reg_ANA_PU_PLL_DLY_RING = 0;
	reg_ANA_PU_PLL_RING = 0;
	
}

void pu_lcgpll_off(void) BANKING_CTRL { 

	reg_DTX_CLK_OFF = 1;
	reg_RESET_DTX = 1;
	
	pll_clk_ready_0();
	
	delay01(10);
	reg_RESET_ANA = 1;	
	reg_ANA_PU_PLL_DLY = 0;
	reg_ANA_PU_PLL = 0;		

}

void pu_pll_off(void) BANKING_CTRL { //off - reset_ana*, ana_pu_pll_*,  pll_clk_ready_*, dtx_clk_off*, reset_dtx*

	//#ifdef SUPPORT_X2_RING_LANE_2
	if(serdes_ring_lane_en && tag_ringpll_ind_en) {
		if(ring_lane_sel) {
			pu_ringpll_off();
		}
		else {
			pu_lcgpll_off();
		}
	}
	else 
	//#endif
	{
		if(mcuid== master_mcu) { 			
			//master_pu_pll_off();			
			pll_clk_ready_all_0();
			delay01(5);
			reg_DTX_CLK_OFF = 1;	reg_DTX_CLK_OFF_RING = 1;
			reg_RESET_DTX	= 1; 	reg_RESET_DTX_RING = 1;
			delay01(5); 
			reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;	
			reg_ANA_PU_PLL_DLY = 0; reg_ANA_PU_PLL_DLY_RING = 0;
			reg_ANA_PU_PLL = 0; reg_ANA_PU_PLL_RING = 0; 	
			
			SYNC_SATUS_PLL_OR_PLL_OFF = 1;	
		} 		
		
		while( SYNC_SATUS_PLL_OR_PLL_OFF==0 ) {
			if(reg_PU_PLL_OR) break;
		}
	}
}

void master_pu_pll_off(void) BANKING_CTRL {			
						
	reg_DTX_CLK_OFF = 1;	reg_DTX_CLK_OFF_RING = 1;
	reg_RESET_DTX	= 1; 	reg_RESET_DTX_RING = 1;
	
	pll_clk_ready_all_0();
	
	delay01(10);
	reg_RESET_ANA = 1;	reg_RESET_ANA_RING = 1;	
	reg_ANA_PU_PLL_DLY = 0; reg_ANA_PU_PLL_DLY_RING = 0;
	reg_ANA_PU_PLL = 0; reg_ANA_PU_PLL_RING = 0; 	
		
}


void pll_clk_ready_1(void) BANKING_CTRL { // //ana_pll_clk_ready**=1
	//delay01(20);
	reg_ANA_PLL_CLK_READY_PRE0 = 1;	
	delay01(5);
	reg_ANA_PLL_CLK_READY_PRE1 = 1;	
	delay01(5);
	reg_ANA_PLL_CLK_READY = 1; 
}	

void pll_clk_ready_0(void) BANKING_CTRL { //ana_pll_clk_ready lc=0
	reg_ANA_PLL_CLK_READY = 0; 
	reg_ANA_PLL_CLK_READY_PRE1 =0;	
	reg_ANA_PLL_CLK_READY_PRE0 = 0;
}

void pll_clk_ready_ring_0(void) BANKING_CTRL { //ana_pll_clk_ready ring=0
	reg_ANA_PLL_CLK_READY_RING = 0; 
	reg_ANA_PLL_CLK_READY_PRE1_RING =0;	
	reg_ANA_PLL_CLK_READY_PRE0_RING = 0;
}

void pll_clk_ready_ring_1(void) BANKING_CTRL { // //ana_pll_clk_ready**=1
	reg_ANA_PLL_CLK_READY_PRE0_RING = 1;
	delay01(5);
	reg_ANA_PLL_CLK_READY_PRE1_RING = 1;
	delay01(5);
	reg_ANA_PLL_CLK_READY_RING = 1;		

}	

void check_pll_clk_ready(void) BANKING_CTRL {
	do {
		if(ring_pll_enabled && reg_ANA_PLL_CLK_READY_RING) break;
		else if(ring_pll_enabled==0 && reg_ANA_PLL_CLK_READY) break;
		if(PHY_NS!=ST_INIT) break;	
	} while(1);
} 

void check_pll_clk_ready_pcie(void) BANKING_CTRL {
	do {
		if(use_ring_pll && reg_ANA_PLL_CLK_READY_RING) break;
		else if(reg_ANA_PLL_CLK_READY) break;
		if(PHY_NS!=ST_INIT) break;	
	} while(1);
} 

void pll_clk_ready_all_0(void) BANKING_CTRL { //ana_pll_clk_ready**=0
	reg_ANA_PLL_CLK_READY = 0; 
	reg_ANA_PLL_CLK_READY_PRE1 =0;	
	reg_ANA_PLL_CLK_READY_PRE0 = 0;
	reg_ANA_PLL_CLK_READY_PRE0_RING = 0;
	reg_ANA_PLL_CLK_READY_PRE1_RING =0;		
	reg_ANA_PLL_CLK_READY_RING = 0;
	
	// don't have to pu_pll_ring=0 here.
	//delay01(10);
	//reg_ANA_PU_PLL_RING = 0;
	//reg_ANA_PU_PLL_DLY_RING = 0;
}

#define RINGPLL_TIMEOUT_TIMER	10000 //10msec
void check_ring_pll_lock_0(void) BANKING_CTRL {
    timeout=0;
	if(cmx_RINGPLL_CAL_TIMEOUT_DIS==0) {
	    timeout_start((uint16_t)RINGPLL_TIMEOUT_TIMER); 
	}	
    while(!reg_ANA_PLL_LOCK_RING_RD && !timeout);
}

void DTL_DTX_DFE_clkoff_reset_0(void) BANKING_CTRL {

	reg_DTL_CLK_OFF_LANE= 0; 
	if(serdes_ring_lane_en) {
		if(ring_lane_sel) reg_DTX_CLK_OFF_RING = 0;
		else reg_DTX_CLK_OFF = 0;
	}
	else if(mcuid == master_mcu) {		
		reg_DTX_CLK_OFF = 0;	
		if(ring_pll_enabled) reg_DTX_CLK_OFF_RING = 0;
	}	
	reg_DFE_CLK_OFF_LANE = 0; 
	
	delay01(10);	// spec required 1-2usec delay
	
	reg_RESET_DTL_LANE = 0;	
	if(serdes_ring_lane_en) {
		if(ring_lane_sel) reg_RESET_DTX_RING = 0;
		else reg_RESET_DTX	= 0;
	}
	else if(mcuid == master_mcu) {	
		reg_RESET_DTX	= 0; 
		if(ring_pll_enabled) reg_RESET_DTX_RING = 0;
	}	
	reg_RESET_DFE_LANE = 0;

	// delay01(5);	// not needed
	
}

void DTL_DTX_DFE_clkoff_reset_1(bool dtx_off) BANKING_CTRL {

	dtx_off |= (reg_PHY_ALIGN_OFF==0);
	reg_DTL_CLK_OFF_LANE= 1; 
	if(serdes_ring_lane_en) {
		if(ring_lane_sel) { reg_DTX_CLK_OFF_RING = 1; reg_RESET_DTX_RING = 1; }
		else { reg_DTX_CLK_OFF = 1; reg_RESET_DTX	= 1; }
	}
	else if(dtx_off) { 
		reg_DTX_CLK_OFF = 1; reg_DTX_CLK_OFF_RING = 1; 
		reg_RESET_DTX	= 1; reg_RESET_DTX_RING = 1;
	}	
	reg_DFE_CLK_OFF_LANE = 1; 
	reg_RESET_DTL_LANE = 1;	
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.

}	

//#ifdef _PCIE_USB_BUILD
void DTL_DTX_DFE_clkoff_reset_1_pcie(bool dtx_off) BANKING_CTRL {

	dtx_off |= (reg_PHY_ALIGN_OFF==0);
	reg_DTL_CLK_OFF_LANE= 1; 
		
	if(dtx_off){
		if(mcuid==master_mcu) { 
		reg_DTX_CLK_OFF = 1; reg_DTX_CLK_OFF_RING = 1; 
		reg_RESET_DTX	= 1; reg_RESET_DTX_RING = 1;
		}
		else while(reg_RESET_DTX_RING==0);
	}
	
	reg_DFE_CLK_OFF_LANE = 1; 
	reg_RESET_DTL_LANE = 1;	
	CKCON = 0x07 ;  //MCU WAIT time the slowest
	reg_RESET_DFE_LANE = 1;
	CKCON = 0x00 ; //MCU WAIT time setting back to normal.

}	
//#endif //_PCIE_USB_BUILD

// --

//#if SUPPORT_DFE_POWERSAVING 

void dfe_setoff(void) BANKING_CTRL {

    if(dfe_power_saving_dfe_off_flag == 1) {return;}
    if ((!reg_INT_DFE_EN_LANE) || dfe_dis  ) {return;}

    EA = 0;
    // Save all registers to global variables here
    saved_ddc_dfe_clk_off = reg_DFE_CLK_OFF_LANE        ; // 1 bit
    saved_ddc_dis_s = reg_PATH_DISABLE_S_LANE;  // 1 bit
    saved_ddc_pu_s_f1p_se = reg_PU_F1P_S_E_LANE  ;     // 3 bits
    saved_ddc_pu_s_f1p_so = reg_PU_F1P_S_O_LANE  ;     // 3 bits
    saved_ddc_pu_s_f1n_se = reg_PU_F1N_S_E_LANE  ;     // 3 bits
    saved_ddc_pu_s_f1n_so = reg_PU_F1N_S_O_LANE  ;     // 3 bits
    saved_ddc_cont_en = reg_DFE_ADAPT_CONT_LANE;          // 1 bits

    // Turn on digital clock
    reg_DFE_CLK_OFF_LANE = 0;

    if (reg_DFE_ADAPT_CONT_LANE) {

      // Abort DFE run
      reg_DFE_ADAPT_CONT_LANE = 0;
      short_delay();
      reg_DFE_ADAPT_ABORT_LANE = 1;
      short_delay();
    }

      reg_DFE_START_LANE = 1;

      // Wait for DFE done.
       //timeout_start((uint16_t)65000);
        while(!reg_DFE_DONE_LANE/* && !timeout*/); // Abort the simulation to avoid FW HANG
        //timeout_stop;
        //if(timeout) 
	{
//	    reg_RESET_DFE_LANE = 1; // Reset DFE to make sure it has a fresh start in timeout case.
//	    reg_RESET_DFE_LANE = 0;
            //timeout = 0;
        }
    	
      reg_DFE_START_LANE = 0;
      reg_DFE_ADAPT_ABORT_LANE = 0;

      // Turn off analog sampler
      reg_PU_F1P_S_E_LANE = 0;
      short_delay();
      reg_PU_F1P_S_O_LANE = 0;
      short_delay();
      reg_PU_F1N_S_E_LANE = 0;
      short_delay();
      reg_PU_F1N_S_O_LANE = 0;
      short_delay();
      reg_PATH_DISABLE_S_LANE = 1;
      short_delay();

      // Turn off digital clock
      reg_DFE_CLK_OFF_LANE = 1;
	dfe_power_saving_dfe_off_flag = 1;
	
	
		EA = 1;
    return;
}
void dfe_backon(void) BANKING_CTRL {

	if(dfe_power_saving_dfe_off_flag == 0) return;
    if ((!reg_INT_DFE_EN_LANE) || dfe_dis ) {return;}
    // Restore all registers from global variables here.
    EA = 0;
    // Turn on digital clock
    reg_DFE_CLK_OFF_LANE         = saved_ddc_dfe_clk_off; // 1 bit

    // Turn on analog sampler
    reg_PATH_DISABLE_S_LANE = saved_ddc_dis_s;  // 1 bit
    short_delay();
    reg_PU_F1P_S_E_LANE   = saved_ddc_pu_s_f1p_se;     // 3 bits
    short_delay();
    reg_PU_F1P_S_O_LANE   = saved_ddc_pu_s_f1p_so;     // 3 bits
    short_delay();
    reg_PU_F1N_S_E_LANE   = saved_ddc_pu_s_f1n_se;     // 3 bits
    short_delay();
    reg_PU_F1N_S_O_LANE   = saved_ddc_pu_s_f1n_so;     // 3 bits
    short_delay();
    reg_DFE_ADAPT_CONT_LANE      = saved_ddc_cont_en;     // 1 bits

    reg_DFE_START_LANE = 1;
	dfe_power_saving_dfe_off_flag = 0;
	EA = 1;
    return;
}
//#endif //#if SUPPORT_DFE_POWERSAVING 


void init_reg(void) BANKING_CTRL {

	uint8_t ana_pwr = reg_ANA_ID_15_0_b0 & 0x03; // 2: 1.8V, 3: 1.2V
	#ifdef SUPPORT_ATE_SCREEN_VOLTAGE
	if(ana_pwr==0x02) {
		reg_AVDDR12_SEL = 0;
		reg_VDDR1P2_SEL_1_0 = 2;		
	}	
	reg_AVDDR12_SEL_MAST_REG = 0;
	#else 
	if(ana_pwr==0x02) reg_AVDDR12_SEL_MAST_REG = 1; //1.8V	
	else if(ana_pwr==0x03) reg_AVDDR12_SEL_MAST_REG = 0; //1.2V
	#endif

	reg_VDDVCO_VTH_12NM_SEL = 1; //12nm
	
//#ifdef _SERDES_BUILD
	if(phy_mode == SERDES ) {//Ethernet,

		//For SAS, n=2680, train_pat_num=0x42 (default)
		//For Ethernet mode, n=4384, train_pat_num=0x88
		reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 1;
		reg_TX_TRAIN_PAT_MODE_LANE = 0;

	}
//#endif //_SATA_SERDES_BUILD
	//reg_DME_ENC_BALANCE_CAL_EN_LANE = 1;
	//reg_DME_DEC_BALANCE_CHK_EN_LANE = 1;

	if(cmx_PHY_GEN_MAX_3_0 < max_gen) 
		max_gen = cmx_PHY_GEN_MAX_3_0;		    

	if(cmx_FORCE_LCPLL_SHRTR_1) reg_SHRTR = 1;
	else reg_SHRTR = 0;

//#ifdef _PCIE_USB_BUILD
	if(phy_mode==USB)
		no_pllspdchg = 1;

	if( phy_mode == PCIE) {
		tx_pipe4_en = 1; //should be always 1 //PIPE4_EN;		

		train_short_mode = 1;
		//Cobra test
		//lnx_GAIN_TRAIN_INIT_EN_LANE = 1; //same as default
		//cmx_BYPASS_MCU_STOP = 1;
		//lnx_CDRPHASE_OPT_EN_LANE = 1; //0 //same as default
		//lnx_INI_PHASE_OFFSET_LANE_7_0 = 0; //0xa;

		//workaround to fix a tx_coeff bug.
		reg_ANA_TX_EM_PO_EN_LANE = 1;

		// bypass the PU_PLL protection
		// This allows the clock to operate during the single Ring PLL fast startup
		reg_ANA_PU_TX_FORCE_LANE = 1;
		reg_ANA_PU_RX_FORCE_LANE = 1;
		
		reg_EBUF_THRESHOLD_WIDE_LANE = 1; 
		
        // For Super Micro mother slot #6
        //reg_TXDETRX_VTH_LANE_1_0 = 3;
	//HR_01212019: Removed for Sony report in Titania
	//The problem happens when there is a x2 device (using a x4 adapter) connected to RC4. If the lanes 3&4 are masked (using lane reducer) then it can link correctly.
	//However if it is connected directly then link fails and ltssm goes to active/polling compliance		
        //reg_TXDETRX_SAMPLING_POINT_LANE_2_0 = 0;
        reg_CFG_RX_EQ_CTRL_LANE = 1;
 		
	}
//#endif //_PCIE_USB_BUILD

	if( phy_mode == PCIE || phy_mode == SATA ) {
		lnx_GAIN_TRAIN_END_EN_LANE = 0; 	
		lnx_ADJUST_FFE_R2_LANE = 0;
		//lnx_RX_CAP_FINAL_ADJUST_EN_LANE = 0;
		//lnx_RX_RXFFE_C_INI_LANE_3_0 = 12; 
		lnx_DFE_ISI_RES_ADAPT_EN_LANE = 0;
		lnx_TRAIN_PH_CONTROL_MODE_LANE_1_0 = 0;
		lnx_TRAIN_USE_D_LANE = 0;
		lnx_TRAIN_USE_S_LANE = 1;
		lnx_SUMFTAP_EN_1_LANE = 1;		
	}     

	//soc control fbck_sel
	if(reg_RING_REF_DIV_SEL==1 && phy_mode<=SAS) reg_ANA_FBCK_SEL_RING = 1;

	//set default
	cal_phase = 0x1e;
	//same as default 
	//reg_TX_TDTAP_SEL_LANE = 0;
	reg_TEMPC_MUX_HOLD_SEL_3_0 = 7; //to cover large range
	reg_TEMPC_MUX_SEL_3_0 = 6; 

	set_accap_sel(ACCAP_REFCLK);

	//reset dfe_res to max
	dfe_f0_res_sel = 3;
	dfe_res_f1 = 3;
	dfe_f234_res_sel = 1;
	dfe_f567_res_sel = 1;

	//dfe step size
	reg_DFE_STEP_COARSE_FFX_LANE_3_0 = 0x02; //4; 
	reg_DFE_STEP_COARSE_FX_LANE_3_0  = 0x02; //4;
	reg_DFE_STEP_COARSE_F0_LANE_3_0  = 0x02; //4;
	reg_DFE_STEP_FINE_FFX_LANE_3_0 = 0x04; //5; 
	reg_DFE_STEP_FINE_FX_LANE_3_0  = 0x04; //5;
	reg_DFE_STEP_FINE_F0_LANE_3_0  = 0x04; //5;
	reg_DFE_STEP_ACCU_FFX_LANE_3_0 = 0x06; 
	reg_DFE_STEP_ACCU_FX_LANE_3_0  = 0xa; //??0x06
	reg_DFE_STEP_ACCU_F0_LANE_3_0  = 0x06;
	reg_DFE_STEP_FINE_F0B_LANE_3_0 = 0x05;
	reg_DFE_STEP_ACCU_F0B_LANE_3_0 = 0x06;
	reg_DFE_STEP_COARSE_EO_DN_LANE_3_0 = 0;//1;//2; //512=1/2
	reg_DFE_STEP_COARSE_EO_UP_LANE_3_0 = 7;//5;//5; //64=1/32
	reg_DFE_STEP_FINE_EO_DN_LANE_3_0 = 3; //1/8 =256
	reg_DFE_STEP_FINE_EO_UP_LANE_3_0 = 5;//6; //1/32 =32
	reg_DFE_EO_UP_THRE_COARSE_4_0 = 5; //10;//6; 
	reg_DFE_EO_UP_THRE_FINE_4_0_b0 = 7;// 7 //8
	reg_DFE_EO_UP_THRE_FINE_4_0_b1 = 0;	

#ifdef _28G_X2
	reg_DFE_DC_SIGN_XOR = 1; //to fix the rxdata wrong because DC adaptation diverged

	if(phy_mode==SATA) {
		reg_TXDATA_LATENCY_REDUCE_EN_LANE = 1;
		reg_RXDATA_LATENCY_REDUCE_EN_LANE = 1;		
	}	
#endif

	reg_SSC_DSPREAD_TX_RING = reg_SSC_DSPREAD_TX;

	reg_CLK_DIRECTION_RINGPLL_LANE = 1; //ringpll direction control: ringpll->1->0, ringpll->2->3
	reg_PLL_PWEXP_DIS_RING = 0;
	reg_LCPLLCLK_DIV2_SEL = 1; //Analog request

	reg_VREF_VDDACAL_SEL_2_0 = 6; //for vdd rxsampler cal	

	if(cmx_VCON_FORCE_DISABLE==0) {
		//To fix LCPLL unstable
		reg_VREF_0P6V_LCVCO_SEL_1_0 = 3;
		if ( ana_pwr==0x02 ) { //1.8V
			reg_VARAC_BIAS_SEL_2_0 = 5; //7;
			reg_VCON_REF_SEL_2_0 = 3; //0;
			reg_VCON_MIN_SEL_2_0 = 4;
			reg_VCON_MAX_SEL_2_0 = 5;
		}
		else { // 1.2V
			reg_VARAC_BIAS_SEL_2_0 = 7;
			reg_VCON_REF_SEL_2_0 = 0;
			reg_VCON_MIN_SEL_2_0 = 4; //0;
			reg_VCON_MAX_SEL_2_0 = 5; //1;
		}
		cmx_TEMPC_STEP_CTRL_2_0 = 3;
	}

//#ifdef _28G_X2
//#ifndef _28G_X2_R1P0
	if(phy_mode<=SAS) 
		reg_LOCAL_STATUS_FIELD_INIT_LANE_15_0 = 0x4000; //tx_init=1


	//Watchdog setup
	MCU_WDT_LANE.VAL = 0x0020f424L; //500msec : after pass the time = mcu_clk * reg_mcu_wdt_cnt_lo[15:0] * reg_mcu_wdt_cnt_hi[14:0], mcu trigger PIN_MCU_WDT0/1 to SOC 	
	reg_MCU_WDT_EN_LANE = 1;
//#endif
//#endif

	// CESD-294
	// Settings for ring PLL fast wake up
	// Note: these values are tuned for 16FFC IPs, 12FFC IPs might need different values.
	//R2P1 default <- R1P0
	reg_VTHVCOCAL_2_0 = 1;						//2 <- 3
	reg_VTHVCOPTAT_2_0 = 6;						//7	<- 5
	reg_CMN_IPP_SLLP_CUR_SEL_2_0 = 4;			//2 <- No register
	reg_SEL_IPP_IPTAT_SLLP_RING_1_0 = 2;        //2 <- 3
	reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0 = 1;	//2 <- 2
	reg_VCON_REF_SEL_RING_1_0 = 2;				//1 <- 1
	cmx_RINGPLL_DAC_FINE_CODE_RATIO_7_0 = 4;	//5 <- 5
	cmx_RINGPLL_DAC_MAX_STEP_NUM_7_0 = 0x5;     //3 <- 2
	cmx_RINGPLL_CAL_FINE_STEP_7_0 = 8;			//0x10 <- 0x20
	cmx_RINGPLL_CAL_COUNTER_SIZE_7_0 = 0x20;	//4 <- 8
	
//	#ifdef _SERDES_BUILD	
	if(phy_mode > SAS ) {
		reg_DME_ENC_BALANCE_CAL_EN_LANE = 0;
		reg_DME_DEC_BALANCE_CHK_EN_LANE = 0;
	}
//	#endif

//	#ifdef SUPPORT_FFE_PULSE_DIV_VAL //leage WA
	//if(phy_mode == SAS ) {
		reg_FFE_PW_SEL_LANE_1_0 = 0x2;
		//reg_FFE_PULSE_DIV_LANE_2_0 = 0x2;
		//reg_CLK_RXACCAP_SEL_LANE_1_0 = 0x2;
	//}
//	#endif

	reg_DFE_ANA_SETTLE_PATHOFF_3_0 = 0x0d; //CJT pattern pass
	
}


void reset_pwr_reg_ext(void) BANKING_CTRL {

	//Disable CPU IRQ
	if((phy_mode == PCIE) || (phy_mode == USB))
	{  // _PCIE_USB
//		#ifdef _PCIE_USB_BUILD  
		//PM_CTRL_INTERRUPT_REG2.BT.B2 = 0x38; //txdetrx_en_chg|beacon_tx_en_chg|tx_idle_hiz
		PM_CTRL_INTERRUPT_REG2.BT.B2 = 0; //txdetrx_en_chg|beacon_tx_en_chg
		PM_CTRL_INTERRUPT_REG2.BT.B3 = 0; //power_state_valid|rx_int|regclk_dis
//		#endif //_PCIE_USB_BUILD
	}
	else
	{  //sas_sata
//		#ifdef  _SATA_SERDES_BUILD
		PM_CTRL_INTERRUPT_REG2.BT.B2 = 0;
		PM_CTRL_INTERRUPT_REG2.BT.B3 = 0; // PU_RX|PU_TX|PU_PLL|rx_init|regclk_dis|PU_IVREF
//#endif //_SATA_SERDES_BUILD
	}

	//INT0 for MCU Wakeup from STOP.
	//reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1; //use only for mcu stop

	//int3
	reg_INT3_INT_REFCLK_DIS_CHG_INT_EN_LANE = 0;
	reg_INT3_INT_PU_IVREF_CHG_INT_EN_LANE = 0;

	if((phy_mode == PCIE) || (phy_mode == USB))
	{ // _PCIE_USB
//		#ifdef _PCIE_USB_BUILD
		//int1
		reg_INT9_PM_CHG_INT_EN_LANE = 0;
		reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
		reg_INT1_INT_PU_PLL_OR_CHG_INT_EN_LANE = 0;
		//int8
		reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;
//		#endif //_PCIE_USB_BUILD
	}
	else
	{
//		#ifdef _SATA_SERDES_BUILD
		//int9
		reg_INT9_PM_CHG_INT_EN_LANE = 0;
		if(serdes_ring_lane_en) {
			if(tag_ringpll_ind_en==0 && mcuid==master_mcu)
				reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 0;
		}
		else if(mcuid==master_mcu )
			reg_INT9_INT_PU_PLL_OR_CHG_INT_EN_LANE = 0;
		reg_INT1_INT_POWER_STATE_VALID_RISE_INT_EN_LANE = 0;
		//int8
		reg_INT8_PM_PCIE_FUNC_CHG_INT_EN_LANE = 0;
//		#endif //_SATA_SERDES_BUILD
	}
	//int2
	//if(max_gen==0)
	//	reg_INT2_SPD_INT_GEN_EN_LANE = 0;
	//else
	reg_INT2_SPD_INT_GEN_EN_LANE = 0;

	//int11
	reg_INT11_PIN_RX_TRAIN_ENABLE_INT_EN_LANE = 0;

	//int5
	reg_INT5_PIN_TX_TRAIN_ENABLE_INT_EN_LANE = 0;

	//int10
	reg_INT10_INT_RX_INIT_RISE_INT_EN_LANE = 0;

	if(phy_mode != PCIE) {
		//int7
		reg_INT7_REMOTE_CTRL_VALID_INT_EN_LANE = 0;

//		#ifdef SUPPORT_APTA_TX_TRAIN
		//int12
		//if(cmx_APTA_TRAIN_SIM_EN)
		//reg_INT12_PIN_LOCAL_CTRL_FIELD_READY_INT_EN_LANE = 0;  //APTA local simulation only

		//int6
		reg_INT6_PIN_PAPTA_TRAIN_ENABLE_INT_EN_LANE = 0;

		//int8 : share with pcie txdectrx/beacon
		reg_INT8_PIN_PAPTA_TRAIN_DISABLE_INT_EN_LANE = 0;
//		#endif
	}

	#ifdef _28G_X2
	// int1: lane disable, share with apta
	//if(!reg_MASTER_PHY_EN)
		reg_INT1_DPHY_ANA_LANE_DISABLE_INT_EN_LANE = 0;
	#endif

	//extpin
	reg_EXTINT_MCU_INT_EN_LANE = 0;

	#ifdef _28G_X2
	if(mcuid== master_mcu) {
		reg_INT4_MCU_REMOTE_REQ_INT_EN_LANE = 0;
	}

	reg_INT4_PHY_MCU_REMOTE_REQ_INT_EN_LANE = 0;

	//reg_INT11_FRAME_UNLOCK_INT_EN_LANE = 0;
	//reg_INT12_FRAME_LOCK_INT_EN_LANE = 0;
	#endif

	reg_RX_INIT_DONE_LANE = 0;
	
	PHY_STATUS_INT = IDLE;
	tx_align_on = 0;
	//spdchg_on = 0;
	dfe_stop = 0; 
	rx_init_done = 0;

}


