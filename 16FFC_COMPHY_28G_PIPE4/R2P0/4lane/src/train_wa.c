/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file train_wa.c
* \purpose Train Firmware Workaround
* \History
*/
#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK4
#pragma constseg BANK4
#endif

void txffe_force_output(void) BANKING_CTRL {
	uint8_t gen;
	
	gen = gen_tx;
	if(gen>4) gen = 0;

	reg_ANA_TX_EM_PEAK_EN_LANE = 1; 
	reg_ANA_TX_EM_PO_EN_LANE = 1;		
	reg_ANA_TX_EM_PRE_EN_LANE = 1;

	reg_TX_EM_CTRL_REG_EN_LANE = 1;
	reg_TX_EM_CTRL_PIPE_SEL_LANE = 0;
	
	LINK_TRAIN_MODE0.BT.B0 = txffe_save[gen][0]; //[7:4]em_po
	LINK_TRAIN_MODE0.BT.B1 = txffe_save[gen][1]; //[7:4]em_peak [3:0]em_pre
	
}

#ifdef SUPPORT_PCIE_TXFFE_WA_FORCE_CTRL
void pcie_txffe_overwrite(void) BANKING_CTRL {
	int16_t sum_45;
	uint32_t txcoeff;
	int8_t pre, post, maint;
	
		reg_TX_EM_CTRL_REG_EN_LANE = 1;
		reg_TX_EM_CTRL_PIPE_SEL_LANE = 0;
		
		pre = (int8_t)(reg_TX_COEFF_RD_LANE_17_0_b0&0x3f);
		maint = (int8_t)(((reg_TX_COEFF_RD_LANE_17_0_b1&0x0f)<<2)|(reg_TX_COEFF_RD_LANE_17_0_b0>>6));
		post = ((reg_TX_COEFF_RD_LANE_17_0_b2&0x03)<<4)|(reg_TX_COEFF_RD_LANE_17_0_b1>>4); 
		sum_45 = 45 - (pre + maint + post);
			
		#if _DBG_TRAIN_IF
		{
		txcoeff = (uint32_t)(reg_TX_COEFF_RD_LANE_17_0_b2); txcoeff<<=16;
		DBG_Printf("\r\n txcoeff=%lx ", txcoeff);	
		txcoeff += reg_TX_COEFF_RD_LANE_17_0_b1<<8;
		DBG_Printf("\r\n txcoeff=%lx ", txcoeff);	
		txcoeff += reg_TX_COEFF_RD_LANE_17_0_b0;
		DBG_Printf("\r\n txcoeff=%lx ", txcoeff);	
		DBG_Printf("\r\n txcoeff=%lx - %d %d %d => %d", txcoeff, post, maint, pre, sum_45);	
		}
		#endif
		
		//peak
		if(sum_45 <= 0) reg_TX_EM_PEAK_CTRL_LANE_3_0 = 0;
		else if(sum_45 > 15) reg_TX_EM_PEAK_CTRL_LANE_3_0 = 15;
		else reg_TX_EM_PEAK_CTRL_LANE_3_0 = sum_45;
		
		reg_TX_EM_PRE_CTRL_LANE_3_0 = pre;
		reg_TX_EM_PO_CTRL_LANE_3_0 = post;

}

void txffe_force_ctrl(void) BANKING_CTRL{
	
	delay01(10);
	
	reg_ANA_TX_EM_PEAK_EN_LANE = 1; 
	reg_ANA_TX_EM_PO_EN_LANE = 1;		
	reg_ANA_TX_EM_PRE_EN_LANE = 1;
	
	if(txffe_force_en==0) {
		if(reg_PIN_PHY_GEN_TX_RD_LANE_3_0> 1){ 
			do {
				pcie_txffe_overwrite();			
				if(PHY_NS!=ST_INIT) break;
				if(cal_start_on) break;
			}
			while(1);	
		}
		else {			
			reg_TX_EM_PRE_CTRL_LANE_3_0 = 0;
			switch(reg_TX_COEFF_RD_LANE_17_0_b0&0x03) {
			case 0: reg_TX_EM_PO_CTRL_LANE_3_0 = 8; break;
			case 1: reg_TX_EM_PO_CTRL_LANE_3_0 = 5; break;
			case 2: reg_TX_EM_PO_CTRL_LANE_3_0 = 0;	break;	
			}	
		}	
	}
	
}

#endif //SUPPORT_PCIE_TXFFE_WA_FORCE_CTRL
