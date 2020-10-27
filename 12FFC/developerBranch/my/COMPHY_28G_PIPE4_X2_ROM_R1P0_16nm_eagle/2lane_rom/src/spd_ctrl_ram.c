/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file spd_ctrl.c
* \purpose Speed Change
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*   08/23/2016 Heejeong Ryu     Added Multispeed Muiltilane 
*/
#include "common.h"
#include "spdtbl.h"
#include "spdtbl_ring.h"
//#include "spdtb_adr.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

#ifdef SUPPORT_SHRTR_PATCH

/**
 * \module SpeedChange
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/
void SpeedChange_ram() BANKING_CTRL{
	//BIT	lc_pll_rate, ring_pll_rate; 
	bool dtx_off;
	
	dtx_off = 0;
	
	#ifdef _28G_X2
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0xc0;
	SPD_CTRL_INTERRUPT_CLEAR_REG1_LANE.BT.B3 = 0;
	#else
	SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 = 0;
	#endif

	rxinit_4_spdchg_en = 0;
	
  new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0; new_gen_tx = (new_gen_tx<cmx_PHY_GEN_MAX_3_0)? new_gen_tx: cmx_PHY_GEN_MAX_3_0;
  new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0; new_gen_rx = (new_gen_rx<cmx_PHY_GEN_MAX_3_0)? new_gen_rx: cmx_PHY_GEN_MAX_3_0;
 
  if((new_gen_tx != gen_tx || new_gen_rx != gen_rx /*|| ( pwrsq_on && phy_mode!=SERDES )*/ ) && phy_mode!=SERDES ){

	reg_PIN_PLL_READY_RX_LANE = 0;
	reg_PIN_PLL_READY_TX_LANE = 0;

	//if(phy_mode==SAS && gen_tx==4) {
	//	reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
	//	reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;	
	//}	
	
    gen_tx = new_gen_tx;
    gen_rx = new_gen_rx;   	
	//no need anymore. rx/tx separated.
    //gen_pll = max(gen_tx, gen_rx);
	//if(max_gen == 0 || gen_pll > max_gen) { gen_tx=0; gen_rx=0; gen_pll=0; }
	if(phy_mode==SATA) { //SATA must support 1.5G/3G/6G only!! 
		sata_speedchange();	
	}	
	else {	
		
		gen_pll_rate = speedtable[gen_tx][spdoft_pll_rate_sel_tx]; 
		use_ring_pll = speedtable[gen_tx][spdoft_tx_ck_sel_lane];

		if(((!ring_pll_enabled || !lc_pll_used ||
		(phy_mode==PCIE && (use_ring_pll==1? gen_pll_rate!=pre_ringpll_rate : gen_pll_rate!=pre_lcpll_rate ) ))/*|| pwrsq_on*/) && 
		!no_pllspdchg /*&& !force_exit_cal*/) { 
			if(mcuid==master_mcu) {			
				pll_clk_ready_all_0();	
			}
			else{		
				while(reg_ANA_PLL_CLK_READY_PRE0==1 || reg_ANA_PLL_CLK_READY_RING==1);
			}
			dtx_off = 1;	
		}		
	
		//dtx_off |= (pre_gen_pll_rate != gen_pll_rate);
		DTL_DTX_DFE_clkoff_reset_1(dtx_off);
	
		loadspeedtbl_gen();
	
		//reg_MCU_DEBUG0_LANE_7_0 = 0x34;
		//reg_MCU_DEBUG1_LANE_7_0 = gen_tx;
		//reg_MCU_DEBUG2_LANE_7_0 = lc_pll_used;
		//reg_MCU_DEBUG3_LANE_7_0 = gen_pll_rate;
		//reg_MCU_DEBUG4_LANE_7_0 = max_gen;
		//reg_MCU_DEBUG5_LANE_7_0 = ring_pll_enabled;
		//reg_MCU_DEBUG6_LANE_7_0 = use_ring_pll;
		//reg_MCU_DEBUG7_LANE_7_0 = tx_pll_rate;
		//reg_MCU_DEBUG8_LANE_7_0 = ring_lane_sel;
		//reg_MCU_DEBUG9_LANE_7_0 = serdes_ring_lane_en;
		//reg_MCU_DEBUGA_LANE_7_0 = master_mcu;
		
		
		if( mcuid==master_mcu ) {			
			//if( pwrsq_on && !no_pllspdchg && !force_exit_cal) {
			//	if(!ring_pll_enabled ) loadspeedtbl_pll(tx_pll_rate);
			//		
			//	//if( lc_pll_used ) {
			//	//	if(use_ring_pll) {PLL_RATE_SEL_RING = tx_pll_rate; PLL_RATE_SEL = !tx_pll_rate; }
			//	//	else { PLL_RATE_SEL = tx_pll_rate; PLL_RATE_SEL_RING = !tx_pll_rate; }
			//	//}
			//	//else { 
			//	//	PLL_RATE_SEL_RING = tx_pll_rate; PLL_RATE_SEL = 1;  
			//	//}
			//	
			//	if(!ring_pll_enabled) {				
			//		if(slave_phy_on) {
			//			check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);	
			//			pll_clk_ready_1();
			//		}	
			//		else {
			//			spdchg_pll_fast_cal();		
			//		}	
			//	}					
			//}
			//else 
			{		
				if((!ring_pll_enabled && !no_pllspdchg ) || (phy_mode==PCIE && !use_ring_pll && gen_pll_rate!=pre_lcpll_rate)) { 				
					loadspeedtbl_pll(tx_pll_rate);
					if(slave_phy_on) {
						check_master_phy_status(CHECK_MP_PLL_CLK_READY_ON);	
						pll_clk_ready_1();
					}	
					else	
						spdchg_pll_fast_cal_ram();				
				}		
			}			

			if(reg_ANA_PLL_CLK_READY==0) pll_clk_ready_1();
		}
		
		if( ring_lane_sel ) 	
		{
			//if( pwrsq_on && !no_pllspdchg && !force_exit_cal) {
			//	if(!lc_pll_used ) loadspeedtbl_ringpll(tx_pll_rate);
			//	if(ring_pll_enabled) {
			//		if(slave_phy_on) {
			//			check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);	
			//			pll_clk_ready_ring_1();
			//		}
			//		else	
			//			ring_pll_fast_cal();
			//	}						
			//}
			//else 
			//{
				if( !lc_pll_used || (phy_mode==PCIE && use_ring_pll && gen_pll_rate!=pre_ringpll_rate) ) { 
					loadspeedtbl_ringpll(tx_pll_rate);
					if(slave_phy_on) {
						check_master_phy_status(CHECK_MP_PLL_CLK_READY_RING_ON);
						pll_clk_ready_ring_1();
					}
					else	
						ring_pll_fast_cal();		
				}				
			//}			
			
			if(reg_ANA_PLL_CLK_READY_RING==0) pll_clk_ready_ring_1();
			
		}			
		
		if(serdes_ring_lane_en==0)
			check_pll_clk_ready();
			
		if(!force_exit_cal)
			load_cal_data_all();
		
		
	}
	
  }

  #ifdef _PCIE_USB_BUILD
  if( phy_mode==PCIE ) { //only pcie need align because of one mac
	txlane_align();
	if(use_ring_pll) pre_ringpll_rate = gen_pll_rate;
	else pre_lcpll_rate = gen_pll_rate;
  }
  #endif //_PCIE_USB_BUILD
  
  restore_train();
   
  DTL_DTX_DFE_clkoff_reset_0();
    
  if(phy_mode!=SATA) 
		delay01(90);
  
  
  lnx_EOM_ALIGN_CAL_DONE_LANE = 0; //moved eom_align_cal to inside train
	
  //reg_PWRON_SEQ = 0; pwrsq_on = 0;
  
  reg_RST_FRAME_SYNC_DET_CLK_LANE = 1;
  delay01(10);
  reg_RST_FRAME_SYNC_DET_CLK_LANE = 0;
  
  PHY_STATUS_INT = IDLE;
  pre_gen_pll_rate = gen_pll_rate;
  rxinit_4_spdchg_en = 1;
  
  //move to P1_TXDETRX
  //if( phy_mode==PCIE && pwrsq_on ) {
  //	if(cmx_VIRTUAL_TDR_SIM_EN && reg_ANA_DPHY_SQ_DETECTED_LANE) { //lane reduce test by sq_detect
  //		reg_TRX_VIRTUAL_CTRL_LANE = 1; //3fc[0]
  //	}
  //}

  delay01(5); //TXCLK need more time 0.5sec even in bypassed delay 
	#ifdef SUPPORT_TRAIN_HIS_LOG
	if(gen_rx==2) {
	  TRAIN_CONTROL_15.BT.B3 = 0x01;
	}
	else if(gen_rx==3) {
	  TRAIN_CONTROL_16.BT.B3 = 0x01;	  
	}
	#endif
  
  reg_PIN_PLL_READY_RX_LANE = 1;
  reg_PIN_PLL_READY_TX_LANE = 1;
	
	if(cmx_AUTO_RX_INIT_EN == 0)
		PHY_STATUS = ST_PLLREADY; 
	else	
		PHY_STATUS = ST_DTL;	
  
}

#endif //SUPPORT_SHRTR_PATCH
