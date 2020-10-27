/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cmd_if.c
* \purpose main top
* \History
*	12/20/2017 Heejeong Ryu		Initial 
*/

#include "common.h"

//#ifdef _28G_X2

#ifdef _28G_X4_R2P1
#ifdef USE_BANKING
#pragma codeseg BANK4
#pragma constseg BANK4
#endif
#endif //_28G_X4_R2P1

//command_type list
#define CMD_TYPE_TRAIN			0x40
#define CMD_TYPE_DFE			0x70

//command_code list

#define CMD_TYPE_APTA			0x60

#define CMD_TYPE_ANA0			0x80
#define CMD_TX_FFE_SET			0x0000
#define CMD_TX_FFE_GET			0x0001
#define CMD_TX_SLEW_RATE_SET  	0x0006
#define CMD_TX_SLEW_RATE_GET  	0x0007
#define CMD_TX_SSC_SET	 		0x0008
#define CMD_TX_SSC_GET	 		0x0009
#define CMD_TX_MARGIN_SET		0x000A
#define CMD_TX_MARGIN_GET		0x000B

#define CMD_TYPE_ANA1			0x81
#define CMD_TX_REMOTE_PRESET_INX_SET	0x0000 
#define CMD_TX_REMOTE_PRESET_INX_GET	0x0001
#define CMD_TX_PRESET_SET		0x0002
#define CMD_TX_PRESET_GET		0x0003
#define CMD_TX_LOCAL_PRESET_INX_SET	0x0004
#define CMD_TX_LOCAL_PRESET_INX_GET	0x0005

#define CMD_TYPE_ANA2			0x82
#define CMD_RX_CDR_BW_SET	 	0x0000
#define CMD_RX_CDR_BW_GET	 	0x0001
#define CMD_RX_FFE_SET  		0x0002
#define CMD_RX_FFE_GET  		0x0003
#define CMD_RX_DFE_RES_SET      0x0004
#define CMD_RX_DFE_RES_GET      0x0005
#define CMD_SQ_THRS_RATIO_SET   0x0006
#define CMD_SQ_THRS_RATIO_GET   0x0007

#define CMD_TYPE_CTRL			0x83
#define CMD_BYPASS_CTLE_TRAIN_SET 0x0000
#define CMD_BYPASS_CTLE_TRAIN_GET 0x0001
#define CMD_BYPASS_CTLE_R_CTRL_SET 0x0002
#define CMD_BYPASS_CTLE_R_CTRL_GET 0x0003
#define CMD_BYPASS_CTLE_C_CTRL_SET 0x0004
#define CMD_BYPASS_CTLE_C_CTRL_GET 0x0005

#define CMD_TYPE_CAL			0x84
#define CMD_RX_IMP_CAL			0x000
#define CMD_TX_IMP_CAL			0x001

//status
#define CMD_ST_OK				0
#define CMD_ST_INVALID_CMD  	1
#define CMD_ST_NA			   	2 //Not Ready to take this command or Not valid in this stage
//define CMD_ST_RSV				3
#define CMD_ST_INVALID_VALUE 	4

#ifdef SUPPORT_CMD_IF
void cmd_if(void) CMD_BANK {
	uint8_t cmd_type, cmd_code;
	uint8_t result, gen;
	bool en_debug;

#ifdef _28G_X2
	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1; 
	reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
#endif	
	
	reg_MCU_DEBUG0_LANE_7_0 = 0x14;	

	if(PHY_MCU_REMOTE_REQ_LANE==0) {
		lnx_PHY_MCU_LOCAL_ACK_LANE = 0;
		return;	
	}		

	result = CMD_ST_NA;
	cmd_type = lnx_PHY_REMOTE_CTRL_COMMAND_TYPE_LANE_7_0;
	cmd_code = lnx_PHY_REMOTE_CTRL_COMMAND_CODE_LANE_15_0_b0;
	en_debug = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b3&0x80)==0x80;

	PHY_LOCAL_VALUE_LANE.VAL = PHY_REMOTE_CTRL_VALUE_LANE.VAL; 
	
	gen = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b3&0xf);
	#ifdef _SATA_SERDES_BUILD
	if(phy_mode==SERDES) { 
		gen = min(reg_PIN_PHY_GEN_TX_RD_LANE_3_0, cmx_PHY_GEN_MAX_3_0);
		gen = get_gen_memory_index(gen);
	}	
	#endif
	if(gen>=5) 	 { 
		result = CMD_ST_INVALID_VALUE;
		goto finish0;
	}	
	
	if(en_debug) gen = 0x80;

reg_MCU_DEBUG0_LANE_7_0 = 0x13;	
reg_MCU_DEBUG1_LANE_7_0 = cmd_type;
reg_MCU_DEBUG2_LANE_7_0 = cmd_code;
	MCU_DEBUG_LANE.VAL = PHY_REMOTE_CTRL_VALUE_LANE.VAL; 

	if(cmd_type == CMD_TYPE_APTA) {
		if(reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE==0) goto finish0;	
		return;
	}	
	
	if(cmd_type == CMD_TYPE_ANA0) { //ana_ctrl
		switch(cmd_code) {
		case CMD_TX_FFE_GET: 			
		case CMD_TX_FFE_SET:		result = cmd_tx_ffe(gen, cmd_code); break;	
		case CMD_TX_SLEW_RATE_GET:
		case CMD_TX_SLEW_RATE_SET:  result = cmd_tx_slew_rate(gen, cmd_code);		break;	
		case CMD_TX_SSC_GET:
		case CMD_TX_SSC_SET:		result = cmd_ssc(gen, cmd_code); 		break; 		
		case CMD_TX_MARGIN_GET:
		case CMD_TX_MARGIN_SET:		result = cmd_tx_margin(cmd_code);	break;	
		}		
	}	
	else if(cmd_type == CMD_TYPE_ANA1) { //ana_ctrl
		switch(cmd_code) {
		case CMD_TX_REMOTE_PRESET_INX_SET:
		case CMD_TX_REMOTE_PRESET_INX_GET:	result = cmd_remote_tx_preset_index(cmd_code);	break;	
		case CMD_TX_PRESET_GET:
		case CMD_TX_PRESET_SET:				result = cmd_tx_preset(cmd_code);	break;	
		case CMD_TX_LOCAL_PRESET_INX_SET:
		case CMD_TX_LOCAL_PRESET_INX_GET:	result = cmd_local_tx_preset_index(cmd_code);	break;	
		}		
	}	
	else if(cmd_type == CMD_TYPE_ANA2) { //ana_ctrl
		switch(cmd_code) {
		case CMD_RX_CDR_BW_GET:
		case CMD_RX_CDR_BW_SET:	 	result = cmd_rx_cdr_bw(gen, cmd_code);	break;	
		case CMD_RX_FFE_GET: 
		case CMD_RX_FFE_SET:  		result = cmd_rx_ffe(gen, cmd_code); break;	
		case CMD_RX_DFE_RES_GET:
		case CMD_RX_DFE_RES_SET:  	result = cmd_dfe_res(gen, cmd_code); break;	
		case CMD_SQ_THRS_RATIO_GET:
		case CMD_SQ_THRS_RATIO_SET:  result = cmd_sq_thrs_ratio(gen, cmd_code); break;					
		}		
	}	
	else if(cmd_type == CMD_TYPE_CTRL) { 
		switch(cmd_code) {
		case CMD_BYPASS_CTLE_TRAIN_GET:
		case CMD_BYPASS_CTLE_TRAIN_SET:	result = cmd_bypass_ctle_train(gen, cmd_code); break;	
		case CMD_BYPASS_CTLE_R_CTRL_GET:
		case CMD_BYPASS_CTLE_R_CTRL_SET: result = cmd_bypass_ctle_r_ctrl(cmd_code); break;	
		case CMD_BYPASS_CTLE_C_CTRL_GET:
		case CMD_BYPASS_CTLE_C_CTRL_SET:	result = cmd_bypass_ctle_c_ctrl(cmd_code); break;	
		}		
	}	
	else if(cmd_type == CMD_TYPE_CAL) { //cal
		switch(cmd_code) {
		case CMD_RX_IMP_CAL: 
			if((lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x03)==mcuid) result = cmd_rx_imp_cal();	break;
		case CMD_TX_IMP_CAL: 
		    if((lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x03)==mcuid) result = cmd_tx_imp_cal();	break;	
		}		
	}		

finish0:	
	lnx_PHY_LOCAL_STATUS_LANE_7_0 = result;
	lnx_PHY_MCU_LOCAL_ACK_LANE = 1;				
		
	reg_MCU_DEBUG0_LANE_7_0 = 15;	
	reg_MCU_DEBUG1_LANE_7_0 = lnx_PHY_LOCAL_STATUS_LANE_7_0;
	MCU_DEBUG_LANE.VAL = PHY_LOCAL_VALUE_LANE.VAL; 
}

uint8_t cmd_tx_ffe(uint8_t gen, uint8_t cmd_code) CMD_BANK {

	uint8_t peak;
	if(gen==0x80) {//current
	
		if(cmd_code==CMD_TX_FFE_GET) {
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = LINK_TRAIN_MODE0.BT.B0; //[7:4]em_po
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = LINK_TRAIN_MODE0.BT.B1; //[7:4]em_peak [3:0]em_pre
			
			if(reg_ANA_TX_EM_PEAK_EN_LANE) lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x08;
			if(reg_ANA_TX_EM_PRE_EN_LANE)  lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x04; 
			if(reg_ANA_TX_EM_PO_EN_LANE)   lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x02;
			if(txffe_force_en)    		   lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x01;
		}
		else {		
			reg_TX_EM_CTRL_REG_EN_LANE = 1;
			LINK_TRAIN_MODE0.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //[7:4]em_po
			LINK_TRAIN_MODE0.BT.B1 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1; //[7:4]em_peak [3:0]em_pre
			reg_ANA_TX_EM_PEAK_EN_LANE = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x08)==0x08;
			reg_ANA_TX_EM_PRE_EN_LANE = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x04)==0x04;
			reg_ANA_TX_EM_PO_EN_LANE = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x02)==0x02;			
			txffe_force_en = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x01)==0x01;
		}	
	}	
	else {
		if(cmd_code==CMD_TX_FFE_GET) {			
			//lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = txffe_save[gen][0]; //[7:4]em_po
			//lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = txffe_save[gen][1];  //[7:4]em_peak [3:0]em_pre	
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = speedtable[gen][spdoft_tx_em_po_ctrl_lane]<<4;			
			if(tx_em_peak_en_g&(0x01<<gen)) 
				lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x08;
			if(speedtable[gen][spdoft_tx_em_pre_en_lane])  lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x04; 
			if(speedtable[gen][spdoft_tx_em_po_en_lane])   lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x02;
			if(txffe_save[gen][0]&0x01) lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= 0x01;	//txffe_force_en	
			switch(gen) {	
			case 0: peak = lnx_TX_EM_PEAK_CTRL_G0_LANE_3_0; break;
			case 1: peak = lnx_TX_EM_PEAK_CTRL_G1_LANE_3_0; break;
			case 2: peak = lnx_TX_EM_PEAK_CTRL_G2_LANE_3_0; break;
			case 3: peak = lnx_TX_EM_PEAK_CTRL_G3_LANE_3_0; break;
			case 4: peak = lnx_TX_EM_PEAK_CTRL_G4_LANE_3_0; break;			
			}
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = peak<<4;
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 |= speedtable[gen][spdoft_tx_em_pre_ctrl_lane];
		}
		else {
			//txffe_save[gen][0] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //[7:4]em_po
			//txffe_save[gen][1] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1; //[7:4]em_peak [3:0]em_pre
			//TRAIN_CONTROL_9.BT.B3 |= (0x01<<gen); //changed
			speedtable[gen][spdoft_tx_em_po_ctrl_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0>>4; //[7:4]em_po
			if((lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x08)==0x08) 
				tx_em_peak_en_g |= 0x01<<gen;
			else 
				tx_em_peak_en_g &= ~(0x01<<gen);
			speedtable[gen][spdoft_tx_em_pre_en_lane]  = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x04)==0x04;
			speedtable[gen][spdoft_tx_em_po_en_lane]   = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x02)==0x02;			
			if((lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x01)==0x01)
				txffe_save[gen][0] =  txffe_save[gen][0] | 0x01;			
			else 	
				txffe_save[gen][0] =  txffe_save[gen][0] & 0xfe;
			
			peak = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1>>4)&0x0f;
			switch(gen) {	
			case 0: lnx_TX_EM_PEAK_CTRL_G0_LANE_3_0 = peak;  break;
			case 1: lnx_TX_EM_PEAK_CTRL_G1_LANE_3_0 = peak;  break;
			case 2: lnx_TX_EM_PEAK_CTRL_G2_LANE_3_0 = peak;  break;
			case 3: lnx_TX_EM_PEAK_CTRL_G3_LANE_3_0 = peak;  break;
			case 4: lnx_TX_EM_PEAK_CTRL_G4_LANE_3_0 = peak;  break;			
			}
			speedtable[gen][spdoft_tx_em_pre_ctrl_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1&0x0f; //[7:4]em_peak [3:0]em_pre
		}		
	}	
	return 0;
}

uint8_t cmd_dfe_res(uint8_t gen, uint8_t cmd_code) CMD_BANK {

	if(gen==0x80) {//current
	
		if(cmd_code==CMD_RX_DFE_RES_GET) {
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = UPHY14_TRX_ANAREG_BOT_20.BT.B0 & 0x1f;; //dfe_res_f0/f1/f234			
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 |= (UPHY14_TRX_ANAREG_BOT_21.BT.B0 & 0xe0); //FLOATING/F8TO15/F567
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_INT_DFE_EN_LANE;
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = reg_EN_DFE_FLOATING_LANE;
		}
		else {			
			UPHY14_TRX_ANAREG_BOT_20.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //dfe_res_f0/f1/f234
			UPHY14_TRX_ANAREG_BOT_21.BT.B0 &= 0x1f;
			UPHY14_TRX_ANAREG_BOT_21.BT.B0 |= (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0xe0); //FLOATING/F8TO15/F567
			reg_DFE_EN_LANE = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x01;	dfe_dis = ~reg_DFE_EN_LANE;  dfe_dis = reg_DFE_DIS_LANE;  
			if(lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2 & 0x01)
				reg_EN_DFE_FLOATING_LANE = 1;
			else 
				reg_EN_DFE_FLOATING_LANE = 0;
		}	
	}	
	else {
		if(cmd_code==CMD_RX_DFE_RES_GET) {
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = rc_save[gen][0];//dfe_res
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = speedtable[gen][spdoft_reg_dfe_dis_lane]==0; 
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = ((DFE_TEST_4.BT.B3&(0x01<<gen))!=0)? 1:0;
		}
		else {
			rc_save[gen][0] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; 
			speedtable[gen][spdoft_reg_dfe_dis_lane] = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1&0x1)==0; 
			dfe_res_save_en |= 0x01<<gen;
			if(lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2 & 0x01) {
				DFE_TEST_4.BT.B3 |= (0x01<<gen);
			}	
			else {
				DFE_TEST_4.BT.B3 &= ~(0x01<<gen);				
			}
		}		
	}	
	return 0;
}

uint8_t cmd_rx_ffe(uint8_t gen, uint8_t cmd_code) CMD_BANK {

	if(gen==0x80) {//current
	
		if(cmd_code==CMD_RX_FFE_GET) {
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = UPHY14_TRX_ANAREG_TOP_128.BT.B0; //ffe_cap1/res1
			//lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = UPHY14_TRX_ANAREG_BOT_0.BT.B0; //ffe_cap2/res2/E
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = UPHY14_TRX_ANAREG_TOP_129.BT.B0; //ffe_cap2/res2/O
		}
		else {			
			UPHY14_TRX_ANAREG_TOP_128.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //ffe_cap1/res1
			//UPHY14_TRX_ANAREG_BOT_0.BT.B0   = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1; //ffe_cap2/res2/E
			UPHY14_TRX_ANAREG_BOT_0.BT.B0   = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/E
			UPHY14_TRX_ANAREG_TOP_129.BT.B0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/O
		}	
	}	
	else {
		if(cmd_code==CMD_RX_FFE_GET) {
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = rc_save[gen][1]; //ffe_cap1/res1
			//lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = rc_save[gen][3]; //rc_save[gen][2]; //ffe_cap2/res2/E
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = rc_save[gen][3]; //ffe_cap2/res2/O
		}
		else {
			rc_save[gen][1] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; //ffe_cap1/res1
			//rc_save[gen][2] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1; //ffe_cap2/res2/E
			rc_save[gen][2] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/E
			rc_save[gen][3] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2; //ffe_cap2/res2/O
			TRAIN_CONTROL_9.BT.B1 |= (0x01<<gen);
		}		
	}	
	return 0;
}


uint8_t cmd_sq_thrs_ratio(uint8_t gen, uint8_t cmd_code) CMD_BANK {
    uint16_t temp;
  
	if(gen==0x80) {//current
	
		if(cmd_code==CMD_SQ_THRS_RATIO_GET) {
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = sq_thrs_ratio;
		}
		else {		
			temp = lnx_CAL_SQ_THRESH_LANE_7_0 & 0x1f;
			sq_thrs_ratio = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x3f;
			if(sq_thrs_ratio==0) 
				reg_SQ_THRESH_LANE_5_0 = lnx_CAL_SQ_THRESH_LANE_7_0;	
			else {	
				temp = (temp * sq_thrs_ratio)>>5;
				reg_SQ_THRESH_LANE_5_0 = (lnx_CAL_SQ_THRESH_LANE_7_0&0x20) | ((uint8_t)temp); 
			}
		}	
	}	
	else {
		if(cmd_code==CMD_SQ_THRS_RATIO_GET) {
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = sq_thrs_ratio_tb[gen];			
		}
		else {
			sq_thrs_ratio_tb[gen] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x3f;				
			sq_thrs_ratio_gen_en |= (0x1 << gen);
		}		
	}	
	return 0;
}

uint8_t cmd_tx_slew_rate(uint8_t gen, uint8_t cmd_code) CMD_BANK {

	if(gen==0x80) {//current ana
		if(cmd_code==CMD_TX_SLEW_RATE_GET) {
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_SLEWCTRL0_LANE_1_0;
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_SLEWCTRL1_LANE_1_0;
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = reg_SLEWRATE_EN_LANE_1_0;			
		}
		else {
			reg_SLEWCTRL0_LANE_1_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x3;
			reg_SLEWCTRL1_LANE_1_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x3;
			reg_SLEWRATE_EN_LANE_1_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2 & 0x3;			
		}	
	}	
	else {

		if(cmd_code==CMD_TX_SLEW_RATE_SET) {
			speedtable[gen][spdoft_slewctrl0_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x03;
			speedtable[gen][spdoft_slewctrl1_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x03;
			speedtable[gen][spdoft_slewrate_en_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2 & 0x3;
		}	
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = speedtable[gen][spdoft_slewctrl0_lane];
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = speedtable[gen][spdoft_slewctrl1_lane];
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = speedtable[gen][spdoft_slewrate_en_lane];
	}
	return 0;
}

uint8_t cmd_bypass_ctle_train(uint8_t gen, uint8_t cmd_code) CMD_BANK {
	
	if(gen==0x80) {//current
		if(cmd_code==CMD_BYPASS_CTLE_TRAIN_GET) 
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = bypass_ctle_train_on;			
		else 	
			bypass_ctle_train_on = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x01;
	}
	else {
		if(cmd_code==CMD_BYPASS_CTLE_TRAIN_GET) {
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = (TRAIN_CONTROL_17.BT.B3 & (0x01<<gen))!=0;
		}
		else {
			
			if(lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x01)
				TRAIN_CONTROL_17.BT.B3 |= (0x01<<gen);
			else 
				TRAIN_CONTROL_17.BT.B3 &= ~(0x01<<gen);				
		}	
	}

	return 0;
}

uint8_t cmd_bypass_ctle_r_ctrl(uint8_t cmd_code) CMD_BANK {

	if(cmd_code==CMD_BYPASS_CTLE_R_CTRL_GET) {
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = lnx_BYPASS_FFE_R_CTRL_LANE;		
	}
	else {
		lnx_BYPASS_FFE_R_CTRL_LANE = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x01;
	}	

	return 0;
}

uint8_t cmd_bypass_ctle_c_ctrl(uint8_t cmd_code) CMD_BANK {
	
	if(cmd_code==CMD_BYPASS_CTLE_C_CTRL_GET) {
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = lnx_BYPASS_FFE_C_CTRL_LANE;		
	}
	else {
		lnx_BYPASS_FFE_C_CTRL_LANE = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x01;
	}	

	return 0;
}

uint8_t cmd_rx_cdr_bw(uint8_t gen, uint8_t cmd_code) CMD_BANK {

	if(gen==0x80) {//current ana
		if(cmd_code==CMD_RX_CDR_BW_GET) {
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_RX_SELMUFI_LANE_2_0|(reg_RX_SELMUFF_LANE_2_0<<4);
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_REG_SELMUPI_LANE_3_0|(reg_REG_SELMUPF_LANE_3_0<<4);			
		}
		else {
			reg_RX_SELMUFI_LANE_2_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x07;
			reg_RX_SELMUFF_LANE_2_0 = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x70)>>4;
			reg_REG_SELMUPI_LANE_3_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x0f;
			reg_REG_SELMUPF_LANE_3_0 = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0xf0)>>4;
		}	
	}	
	else {
		if(cmd_code==CMD_RX_CDR_BW_SET) {
			speedtable[gen][spdoft_rx_selmufi_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x07;
			speedtable[gen][spdoft_rx_selmuff_lane] = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 & 0x70)>>4;
			speedtable[gen][spdoft_reg_selmupi_lane] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0x0f;
			speedtable[gen][spdoft_reg_selmupf_lane] = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1 & 0xf0)>>4;
		}	
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = speedtable[gen][spdoft_rx_selmufi_lane]|(speedtable[gen][spdoft_rx_selmuff_lane]<<4);
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = speedtable[gen][spdoft_reg_selmupi_lane]|(speedtable[gen][spdoft_reg_selmupf_lane]<<4);
	}
	return 0;
}	

uint8_t cmd_tx_margin(uint8_t cmd_code) CMD_BANK {

	if(phy_mode== PCIE) return CMD_ST_NA;
	
	if (cmd_code==CMD_TX_MARGIN_SET) {
		reg_TX_MARGIN_LANE_2_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0&0x07;
	}
	lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_TX_MARGIN_LANE_2_0;
	
	return 0;
}	


uint8_t cmd_remote_tx_preset_index(uint8_t cmd_code) CMD_BANK {
	if(phy_mode==PCIE || phy_mode==USB) return CMD_ST_NA;	
		
	if(cmd_code==CMD_TX_REMOTE_PRESET_INX_SET) {
		if( lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 > 3 || lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0==0) return CMD_ST_INVALID_VALUE;
		lnx_spdoft_tx_preset_index_lane = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
	}
	lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = lnx_spdoft_tx_preset_index_lane;
	return 0;	
	
}
	
/*
uint8_t cmd_tx_preset(uint8_t cmd_code) CMD_BANK {
	uint8_t inx;

	inx = 0;
	
	if(phy_mode==PCIE || phy_mode==USB) {
		return CMD_ST_INVALID_CMD;
	}
	
	inx = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b3 & 0x0f;
	if(inx==0 || inx>5) return CMD_ST_INVALID_VALUE;		
	
	if(cmd_code==CMD_TX_PRESET_SET) {		
		local_tx_preset_tb[inx][1] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1;
		local_tx_preset_tb[inx][0] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
	}	
	
	lnx_PHY_LOCAL_VALUE_LANE_31_0_b3 = inx+1;
	lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = tx_tb[inx].peak;
	lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = tx_tb[inx].pre;
	lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = tx_tb[inx].post;

	return 0;	
}	
*/

uint8_t cmd_tx_preset(uint8_t cmd_code) CMD_BANK {
	uint8_t inx;

	inx = 0;
	
	if(phy_mode==PCIE || phy_mode==USB) {
		return CMD_ST_INVALID_CMD;
	}
	
	inx = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b3 & 0x0f;
	if( inx > 5 || inx==0) return CMD_ST_INVALID_VALUE;
	
	if(cmd_code==CMD_TX_PRESET_SET) {		
		local_tx_preset_tb[inx][1] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1;
		local_tx_preset_tb[inx][0] = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
	}	
	
	lnx_PHY_LOCAL_VALUE_LANE_31_0_b3 = inx;
	lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = local_tx_preset_tb[inx][1];
	lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = local_tx_preset_tb[inx][0];

	return 0;	
}	

uint8_t cmd_local_tx_preset_index(uint8_t cmd_code) CMD_BANK {
	if(phy_mode==PCIE || phy_mode==USB) return CMD_ST_NA;	
		
	if(cmd_code==CMD_TX_LOCAL_PRESET_INX_SET) {
		if( lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0 > 5 || lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0==0) return CMD_ST_INVALID_VALUE;
		cmx_LOCAL_TX_PRESET_INDEX_3_0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
	}	
	lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = cmx_LOCAL_TX_PRESET_INDEX_3_0;
	return 0;	
	
}	

uint8_t cmd_ssc(uint8_t gen,  uint8_t cmd_code) CMD_BANK {
	
	if(gen==0x80) { //current ana

		if(cmd_code==CMD_TX_SSC_GET) {			
			lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = reg_SSC_EN_LANE;			
			if(use_ring_pll) {				
				lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_SSC_DSPREAD_TX_RING;
				#ifdef _28G_X2
				lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_SSC_AMP_RING_6_0;		
				#endif
				#ifdef _28G_X4_R2P1
				lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 |= reg_SSC_STEP_RING_10_0_b1<<4;
				lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_SSC_STEP_RING_10_0_b0; 
				#endif
			}
			else {	
				lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = reg_SSC_DSPREAD_TX; 		
				#ifdef _28G_X2
				lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_SSC_AMP_6_0;			
				#endif
				#ifdef _28G_X4_R2P1
				lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 |= reg_SSC_STEP_10_0_b1<<4;
				lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = reg_SSC_STEP_10_0_b0; 
				#endif
			}										
		}
		else {
			reg_SSC_EN_FM_REG_LANE = 1;
			if(lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2&0x01) {
				reg_SSC_EN_LANE = 1;
			}
			else {
				reg_SSC_EN_LANE = 0;
			}	
			
			if(use_ring_pll) {
				reg_SSC_DSPREAD_TX_RING	=  lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1&0x01;
				#ifdef _28G_X2
				reg_SSC_AMP_RING_6_0 =  lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;		
				#endif
				#ifdef _28G_X4_R2P1
				reg_SSC_STEP_RING_10_0_b1 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1>>4;
				reg_SSC_STEP_RING_10_0_b0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; 
				#endif
			}
			else {	
				reg_SSC_DSPREAD_TX 	=  lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1&0x01;
				#ifdef _28G_X2
				reg_SSC_AMP_6_0	=  lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
				#endif
				#ifdef _28G_X4_R2P1
				reg_SSC_STEP_10_0_b1 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1>>4;
				reg_SSC_STEP_10_0_b0 = lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0; 
				#endif
			}				
		}
	}	
	else {
		if(cmd_code==CMD_TX_SSC_SET) {
			cmx_TX_SSC_CTRL_SEL = 1; //1:cmd_if, 0:reg/pin
			train_save_tb[gen].ssc_en = ((lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2&0x01)==0x01);	
			#ifdef _28G_X2
			tx_tb[gen].ssc_amp = 	lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
			#endif	
			#ifdef _28G_X4_R2P1
			train_save_tb[gen].ssc_step = (lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1<<3)|lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0;
			#endif
			tx_tb[gen].ssc_dspread = 	lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1;			
		}			
		#ifdef _28G_X2
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 = tx_tb[gen].ssc_dspread;
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = tx_tb[gen].ssc_amp;
		#endif
		#ifdef _28G_X4_R2P1
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b0 = (uint8_t)train_save_tb[gen].ssc_step;
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b1 |= (train_save_tb[gen].ssc_step>>4)&0x70;
		#endif
		lnx_PHY_LOCAL_VALUE_LANE_31_0_b2 = train_save_tb[gen].ssc_en;
	}
	return 0;	
}	

uint8_t cmd_rx_imp_cal(void) CMD_BANK {
	uint8_t error_flg;

	error_flg = 0;
	if(reg_PIN_PLL_READY_RX_LANE==0) error_flg = CMD_ST_NA;
	else {
		reg_RXIMPCAL_EN	= 1;
		rximp_cal();
		reg_RXIMPCAL_EN	= 0;
		PHY_STATUS = ST_NORMAL;
	}
	
	return error_flg;
}	

uint8_t cmd_tx_imp_cal(void) CMD_BANK {
	uint8_t error_flg;

	error_flg = 0;
	if(reg_PIN_PLL_READY_RX_LANE==0) error_flg = CMD_ST_NA;
	else {
		reg_TXIMPCAL_EN	= 1;
		tximp_cal();
		reg_TXIMPCAL_EN	= 0;
		PHY_STATUS = ST_NORMAL;
	}
	
	return error_flg;
}	
#endif //SUPPORT_CMD_IF

//#endif //28G_X2

