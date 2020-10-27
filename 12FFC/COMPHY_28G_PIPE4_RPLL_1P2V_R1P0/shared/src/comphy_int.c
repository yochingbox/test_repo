/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \History
*	2019/08/22	Marc Yu,	Initial version
*/
#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#endif


/*#define comphy_int_in0 (reg_MCU_DEBUG4_LANE_7_0 & 0x01)*/
/*#define comphy_int_in1 (reg_MCU_DEBUG4_LANE_7_0 & 0x02)*/
/*#define comphy_int_out reg_PIN_RESERVED_OUTPUT_TX_LANE_15_0_b0*/
/*#define comphy_int_code ((reg_MCU_DEBUG5_LANE_7_0<<6)|(reg_MCU_DEBUG4_LANE_7_0>>2))*/
/*#define comphy_int_data0 ((reg_MCU_DEBUG5_LANE_7_0>>2)|(reg_MCU_DEBUG6_LANE_7_0<<6))*/
/*#define comphy_int_data1 ((reg_MCU_DEBUG6_LANE_7_0>>2)|(reg_MCU_DEBUG7_LANE_7_0<<6))*/
/*#define comphy_int_data2 (reg_MCU_DEBUG7_LANE_7_0>>2)*/

// in global.h
//#define comphy_int_in0 (reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0 & 0x01)
#define comphy_int_in1 (reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0 & 0x02)
#define comphy_int_out reg_PIN_RESERVED_OUTPUT_TX_LANE_15_0_b0
#define comphy_int_code ((uint8_t)((reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b1<<6)|(reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b0>>2)))
//#define comphy_int_data ((reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1<<14)|(reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0<<6)|(reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b1>>2))
#define comphy_int_data0 ((uint8_t)((reg_PIN_RESERVED_INPUT_TX_RD_LANE_15_0_b1>>2)|(reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0<<6)))
#define comphy_int_data1 ((uint8_t)((reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b0>>2)|(reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1<<6)))
#define comphy_int_data2 (reg_PIN_RESERVED_INPUT_RX_RD_LANE_15_0_b1>>2)

#ifndef SUPPORT_COMPHY_INT
void comphy_int(void) BANKING_CTRL{
        return;
}

#else


static bool poll1_comphy_int_in1(void) {

		timeout_start((uint16_t)10);
		while(!timeout && !comphy_int_in1);
        	timeout_stop;
		if(!timeout) return 1;
		else return 0;
}
static bool poll0_comphy_int_in1(void) {

		timeout_start((uint16_t)5);
		while(!timeout && comphy_int_in1);
        	timeout_stop;
		if(!timeout) return 1;
		else return 0;
}
static bool poll1_comphy_int_in0(void) {

		timeout_start((uint16_t)500);
#if 0
		while(!timeout && !comphy_int_in0 && !reg_RX_INIT_RD_LANE && !reg_TX_TRAIN_ENABLE_RD_LANE);
#else
		while(!timeout && !comphy_int_in0);
#endif
        	timeout_stop;
		if(!timeout&&comphy_int_in0) return 1;
		else return 0;
}


static void wrX(void) {
        *comphyIntWrAddr = ((~comphyIntWrMask) & (*comphyIntWrAddr)) | (comphyIntWrMask&comphyIntWrData);
}

static comphyIntTask(void) {

	uint8_t code,d0,d1,d2,tmp_v;

	code	= comphy_int_code;
	d0	= comphy_int_data0;
	d1	= comphy_int_data1;
	d2	= comphy_int_data2;
	switch(code){
		case 0x13:
			comphyIntWrMask = (comphyIntWrMask & 0xffffff00) | (uint32_t)d0;
			comphyIntWrMask = (comphyIntWrMask & 0xffff00ff) | (((uint32_t)d1) << 8);
			break;
		case 0x14:
			comphyIntWrMask = (comphyIntWrMask & 0xff00ffff) | (((uint32_t)d0) << 16);
			comphyIntWrMask = (comphyIntWrMask & 0x00ffffff) | (((uint32_t)d1) << 24);
			break;
		case 0x11:
			comphyIntWrData = (comphyIntWrData & 0xffffff00) | (uint32_t)d0;
			comphyIntWrData = (comphyIntWrData & 0xffff00ff) | (((uint32_t)d1) << 8);
			break;
		case 0x12:
			comphyIntWrData = (comphyIntWrData & 0xff00ffff) | (((uint32_t)d0) << 16);
			comphyIntWrData = (comphyIntWrData & 0x00ffffff) | (((uint32_t)d1) << 24);
			break;
		case 0x10: 
			comphyIntWrAddr = (volatile __xdata uint32_t *)( (((uint32_t)d1) << 8)| (uint32_t)d0);
			if((d2&1) == 0) wrX();	
			break;
#if 0
		case 0x20: 
			if((d1>>0) & 0x01) reg_TXD_INV_LANE             = (d0>>0) & 0x01;
			if((d1>>1) & 0x01) reg_TXDATA_GRAY_CODE_EN_LANE = (d0>>1) & 0x01;
			if((d1>>2) & 0x01) reg_TXDATA_PRE_CODE_EN_LANE  = (d0>>2) & 0x01;
			if((d1>>3) & 0x01) reg_TXD_MSB_LSB_SWAP_LANE    = (d0>>3) & 0x01;
			if((d1>>4) & 0x01) reg_RXD_INV_LANE             = (d0>>4) & 0x01;
			if((d1>>5) & 0x01) reg_RXDATA_GRAY_CODE_EN_LANE = (d0>>5) & 0x01;
			if((d1>>6) & 0x01) reg_RXDATA_PRE_CODE_EN_LANE  = (d0>>6) & 0x01;
			if((d1>>7) & 0x01) reg_RXD_MSB_LSB_SWAP_LANE    = (d0>>7) & 0x01;
			break;
		case 0x00:
			reg_TX_TRAIN_PAT_SEL_LANE_1_0 = (d0&0x03) + 1;
			if((d0>>2) & 0x01){
				if((d0&0x03) == 0) {
					reg_PT_TX_PATTERN_SEL_LANE_5_0 = 18;
				}//reg_pt_tx_pattern_sel_lane[5:0] = 18;	
				else if((d0&0x03) == 1) reg_PT_TX_PATTERN_SEL_LANE_5_0 = 19 + mcuid;
					
				else if((d0&0x03) == 2) reg_PT_TX_PATTERN_SEL_LANE_5_0 = 28 + mcuid;
				
				reg_PT_PRBS_SEED_LANE_31_0_b0 = (uint8_t)((((uint16_t)d1<<8 | (uint16_t)d0)>>3)&0xff);
				reg_PT_PRBS_SEED_LANE_31_0_b1 = (uint8_t)((((uint16_t)d1<<8 | (uint16_t)d0)>>11)&0xff);
				reg_TX_TRAIN_PAT_FORCE_LANE = 1;
				
				// mcu_reset would get correct pt_tx_pattern_sel
				save_pt_tx_pattern_sel_lane_5_0 = reg_PT_TX_PATTERN_SEL_LANE_5_0;
			}
			break;
#ifdef _RPLL_X4
		case 0x17:
			tmp_v = d1 >> 4;
			switch(tmp_v){
				case 0:// pre2
					if((d2&0x01) == 1) {
						reg_TX_FIR_C1_LANE_5_0 = reg_TO_ANA_TX_FIR_C1_LANE_5_0;
						reg_TX_FIR_C1_FORCE_LANE = 1;
					} 
					else {
						reg_TX_FIR_C1_FORCE_LANE = 0;
						reg_TX_EMPH2_MAX_LANE_4_0 = ((((uint16_t)d1<<8)|(uint16_t)d0)>>6)&0x1F;
						reg_TX_EMPH2_MIN_LANE_4_0 = d0&0x1F;
					}
					break;
				case 1: // pre
					if((d2&0x01) == 1) {
						reg_TX_FIR_C2_LANE_5_0 = reg_TO_ANA_TX_FIR_C2_LANE_5_0;
						reg_TX_FIR_C2_FORCE_LANE = 1;
					} 
					else {
						reg_TX_FIR_C2_FORCE_LANE = 0;
						reg_TX_EMPH0_MAX_LANE_4_0 = ((((uint16_t)d1<<8)|(uint16_t)d0)>>6)&0x1F;
						reg_TX_EMPH0_MIN_LANE_4_0 = d0&0x1F;
					}
					
					break;
				case 2: // main
					if((d2&0x01) == 1) {
						reg_TX_FIR_C3_LANE_5_0 = reg_TO_ANA_TX_FIR_C3_LANE_5_0;
						reg_TX_FIR_C3_FORCE_LANE = 1;
					} 
					else {
						reg_TX_FIR_C3_FORCE_LANE = 0;
						reg_TX_AMP_MAX_LANE_6_0 = ((((uint16_t)d1<<8)|(uint16_t)d0)>>6)&0x3F;
						reg_TX_AMP_MIN_LANE_6_0 = d0&0x3F;
					}
					
					break;
				case 3: // post
					if((d2&0x01) == 1) {
						reg_TX_FIR_C4_LANE_5_0 = reg_TO_ANA_TX_FIR_C4_LANE_5_0;
						reg_TX_FIR_C4_FORCE_LANE = 1;
					} 
					else {
						reg_TX_FIR_C4_FORCE_LANE = 0;
						reg_TX_EMPH1_MAX_LANE_4_0 = ((((uint16_t)d1<<8)|(uint16_t)d0)>>6)&0x1F;
						reg_TX_EMPH1_MIN_LANE_4_0 = d0&0x1F;
					}
					
					break;
			
			}
			break;
#else
		case 0x17:
			tmp_v = d1 >> 4;
			switch(tmp_v){
				case 0:
					if((d2&0x01) == 1) {
						reg_TX_EM_PRE2_CTRL_LANE_4_0 = reg_TO_ANA_TX_FIR_C0_LANE_5_0;
						reg_TX_EM_PRE2_CTRL_FORCE_LANE = 1;
					} 
					else {
						reg_TX_EM_PRE2_CTRL_FORCE_LANE = 0;
						reg_TX_EMPH2_MAX_LANE_4_0 = ((((uint16_t)d1<<8)|(uint16_t)d0)>>6)&0x1F;
						reg_TX_EMPH2_MIN_LANE_4_0 = d0&0x1F;
					}
					break;
				case 1:
					if((d2&0x01) == 1) {
						reg_TX_EM_PRE_CTRL_LANE_4_0 = reg_ETHERNET_MODE_LANE_1_0 == 2 ? reg_TO_ANA_TX_FIR_C1_LANE_5_0 : reg_TO_ANA_TX_FIR_C0_LANE_5_0;
						reg_TX_EM_PRE_CTRL_FORCE_LANE = 1;
					} 
					else {
						reg_TX_EM_PRE_CTRL_FORCE_LANE = 0;
						reg_TX_EMPH0_MAX_LANE_4_0 = ((((uint16_t)d1<<8)|(uint16_t)d0)>>6)&0x1F;
						reg_TX_EMPH0_MIN_LANE_4_0 = d0&0x1F;
					}
					
					break;
				case 2:
					if((d2&0x01) == 1) {
						reg_TX_EM_MAIN_CTRL_LANE_6_0 = reg_ETHERNET_MODE_LANE_1_0 == 2 ? reg_TO_ANA_TX_FIR_C2_LANE_5_0 : reg_TO_ANA_TX_FIR_C1_LANE_5_0;
						reg_TX_EM_MAIN_CTRL_FORCE_LANE = 1;
					} 
					else {
						reg_TX_EM_MAIN_CTRL_FORCE_LANE = 0;
						reg_TX_AMP_MAX_LANE_6_0 = ((((uint16_t)d1<<8)|(uint16_t)d0)>>6)&0x3F;
						reg_TX_AMP_MIN_LANE_6_0 = d0&0x3F;
					}
					
					break;
				case 3:
					if((d2&0x01) == 1) {
						reg_TX_EM_POST_CTRL_LANE_4_0 = reg_ETHERNET_MODE_LANE_1_0 == 2 ? reg_TO_ANA_TX_FIR_C3_LANE_5_0 : reg_TO_ANA_TX_FIR_C2_LANE_5_0;
						reg_TX_EM_POST_CTRL_FORCE_LANE = 1;
					} 
					else {
						reg_TX_EM_POST_CTRL_FORCE_LANE = 0;
						reg_TX_EMPH1_MAX_LANE_4_0 = ((((uint16_t)d1<<8)|(uint16_t)d0)>>6)&0x1F;
						reg_TX_EMPH1_MIN_LANE_4_0 = d0&0x1F;
					}
					
					break;
			
			}
			break;
#endif
#endif
	
	}


}



void comphy_int(void) BANKING_CTRL{
	comphy_int_out  = comphy_int_out & 0xFE;
	while(poll1_comphy_int_in0()){

		if(poll1_comphy_int_in1()){
			short_delay();
		/*	
			reg_MCU_DEBUG0_LANE_7_0	= comphy_int_code;
			reg_MCU_DEBUG1_LANE_7_0	= comphy_int_data0;
			reg_MCU_DEBUG2_LANE_7_0	= comphy_int_data1;
			reg_MCU_DEBUG3_LANE_7_0	= comphy_int_data2;
		*/
			comphyIntTask();
			short_delay();
			comphy_int_out  = comphy_int_out | 0x01;

			if(poll0_comphy_int_in1()){
				comphy_int_out  = comphy_int_out & 0xFE;
				short_delay();
				
			}
			else break;
		}
		else break;
	}	
}
#endif
