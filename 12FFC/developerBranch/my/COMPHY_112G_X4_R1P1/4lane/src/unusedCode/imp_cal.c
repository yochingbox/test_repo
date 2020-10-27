/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file imp_cal.c
* \purpose IMP calibration
* \History
*	4/21/2015 Heejeong Ryu		Initial, sync with 28G R2P0 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

/**
 * \module TX IMP Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/

#if 0
#define RX_IMPCAL_EN            reg_RXIMP_CAL_EN_LANE
#define RXIMP_IVREF				reg_RXIMP_IVREF_4_0
#define IMPCAL_RX_LANE			reg_IMPCAL_RX_LANE_4_0

#define TXRX_IMPCALOUT          reg_ANA_CMN_IMPCAL_OUT_RD
#define TXRXIMP_CKCAL           reg_TRX_IMPCAL_CLK

#define TX_IMPCAL_EN			reg_TXIMPCAL_EN_LANE
#define TX_IMPCAL_SIDE			reg_TXIMPCAL_SIDE_LANE
#define TXIMPCAL_SEL_LANE		reg_TXIMPCAL_SEL_LANE_1_0
#define TX_IMPCAL_BOT			reg_TXIMPCAL_BOT_LANE
#define RCALP_2ND_EN			reg_RCAL_2ND_EN_LANE
#define TXIMP_TUNEN_TOP			reg_TXIMP_TUNEN_TOP_LANE_5_0
#define TXIMP_TUNEP_TOP			reg_TXIMP_TUNEP_TOP_LANE_5_0
#define TXIMP_TUNEN_MID			reg_TXIMP_TUNEN_MID_LANE_5_0
#define TXIMP_TUNEP_MID			reg_TXIMP_TUNEP_MID_LANE_5_0
#define TXIMP_TUNEN_BOT			reg_TXIMP_TUNEN_BOT_LANE_5_0
#define TXIMP_TUNEP_BOT			reg_TXIMP_TUNEP_BOT_LANE_5_0

#define TX_VREF_TXDRV_SEL		reg_TX_VREF_TXDRV_SEL_LANE_2_0
#define TXIMPCAL_DRVAMP_2_0		reg_TXIMPCAL_DRVAMP_2_0
#define IMPCAL_OUT_REQ			reg_ANA_CMN_IMPCAL_OUT_REQ

#define TXIMP_TUNE_MAX			0x3f
#define TXIMP_TUNE_MIN			0

enum {
BOT,
MID,
TOP,
};

enum {
NMOS,
PMOS,
};

__code uint8_t tximp_sel_tb[] = {0, 2, 3};

uint8_t  toggle_impcal_out_req( void ) BANKING_CTRL {
	uint8_t comp_out;
	
	comp_out = 0;
	TXRXIMP_CKCAL = 1;
	delay(T_5us); //resets analog comparator
	TXRXIMP_CKCAL = 0;
	delay(T_2us); //analog settling time
	
	IMPCAL_OUT_REQ = 1;
	IMPCAL_OUT_REQ = 0;
	
	if(TXRX_IMPCALOUT) comp_out = 1;
	
	return comp_out;
}

void set_tximp(uint8_t inx, uint8_t p, uint8_t val) BANKING_CTRL {

	if(p==NMOS) {
		switch(inx) {
		case TOP: TXIMP_TUNEN_TOP = val; break;
		case MID: TXIMP_TUNEN_MID = val; break;
		case BOT: TXIMP_TUNEN_BOT = val; break;	
		}
	}
	else {
		switch(inx) {
		case TOP: TXIMP_TUNEP_TOP = val; break;
		case MID: TXIMP_TUNEP_MID = val; break;
		case BOT: TXIMP_TUNEP_BOT = val; break;	
		}	
	}	
}

void save_tximp(uint8_t inx, uint8_t p, uint8_t val) BANKING_CTRL {

	if(p==NMOS) {
		switch(inx) {
		case TOP: lnx_CAL_TXIMP_TUNEN_TOP_LANE_7_0 = val; break;
		case MID: lnx_CAL_TXIMP_TUNEN_MID_LANE_7_0 = val; break;
		case BOT: lnx_CAL_TXIMP_TUNEN_BOT_LANE_7_0 = val; break;	
		}
	}
	else {
		switch(inx) {
		case TOP: lnx_CAL_TXIMP_TUNEP_TOP_LANE_7_0 = val; break;
		case MID: lnx_CAL_TXIMP_TUNEP_MID_LANE_7_0 = val; break;
		case BOT: lnx_CAL_TXIMP_TUNEP_BOT_LANE_7_0 = val; break;	
		}	
	}	
}

void tximp_cal( void ) BANKING_CTRL {
	uint8_t i, cnt, tximp_inx; 
	uint8_t min_reached_n, max_reached_n, min_reached_p, max_reached_p;
	uint8_t tximp_val, tximp_pre;
	uint8_t sum, dir, output_cnt;
	bool ana_tximpcal_out, pre_out;

	lnx_TXIMP_CAL_DONE_LANE = 0;

	if( cmx_TXIMP_CAL_EXT_EN == 1 ) {
		TXIMP_TUNEN_TOP = lnx_CAL_TXIMP_TUNEN_TOP_LANE_7_0;
		TXIMP_TUNEP_TOP = lnx_CAL_TXIMP_TUNEP_TOP_LANE_7_0;
		TXIMP_TUNEN_MID = lnx_CAL_TXIMP_TUNEN_MID_LANE_7_0;
		TXIMP_TUNEP_MID = lnx_CAL_TXIMP_TUNEP_MID_LANE_7_0;
		TXIMP_TUNEN_BOT = lnx_CAL_TXIMP_TUNEN_BOT_LANE_7_0;
		TXIMP_TUNEP_BOT = lnx_CAL_TXIMP_TUNEP_BOT_LANE_7_0;      
		lnx_TXIMP_CAL_DONE_LANE = 1;
		return;
	}
	
	PHY_STATUS = ST_TXIMP_CAL;

	lnx_TXIMP_CAL_PASS_LANE = 0;
	lnx_TXIMP_CAL_TIMEOUT_LANE = 0;

	//Turn on phytest with 4T pattern
	set_test_pattern(1);

	TXIMPCAL_DRVAMP_2_0 = TX_VREF_TXDRV_SEL;

	delay(T_10us); //10us delay between reg_TXIMPCAL_EN and reg_TX_IMPCAL_EN_LANE

	TX_IMPCAL_EN = 1;

	for (tximp_inx=BOT; tximp_inx<=TOP; tximp_inx++) {
	TXIMPCAL_SEL_LANE = tximp_sel_tb[tximp_inx]; 
	
	//Step 1: NMOS branch
	TX_IMPCAL_BOT = 1;
	
	sum = 0;

	for(i=0; i<2; i++) {
		if(i==1) TX_IMPCAL_SIDE = 1;
		else TX_IMPCAL_SIDE = 0;

		tximp_val = 8; 
		set_tximp( tximp_inx, NMOS, 0x08);	

		cnt = 0;

		pre_out = toggle_impcal_out_req();

		min_reached_n = 0;
		max_reached_n = 0;
		dir = 0;
		output_cnt = 0;

		do {
			ana_tximpcal_out = toggle_impcal_out_req();

			tximp_pre = tximp_val;

			dir = (dir<<1)|ana_tximpcal_out;
			output_cnt++;

			if ( is_toggle_pat( dir, output_cnt + 1 ) )
			{
				break;
			}
			//if ( is_toggle_pat( dir, 6 ) ) break;
			//if ( ana_tximpcal_out != pre_out ) break; //exit at first toggle
			//if ((dir&0xf) == 0x5 || (dir&0xf) == 0xa) break;

			if( tximp_val == TXIMP_TUNE_MIN) min_reached_n += 1;
			else if( tximp_val == TXIMP_TUNE_MAX) max_reached_n += 1;

	        if( ana_tximpcal_out == 0 ) {
				max_reached_n = 0;
				if( min_reached_n == 0) tximp_val--; //decrement DAC value with underflow protection
				else if ( min_reached_n == 2 ) break; //exit calibration when DAC value is 0x0 with analog result at 0 for 2 consecutive samples
		    }
		    else {
				min_reached_n = 0;
				if( max_reached_n == 0) tximp_val++; //increment DAC value with overflow protection
				else if ( max_reached_n == 2 ) break; //exit calibration when DAC value is 0xf with analog result at 1 for 2 consecutive samples	
		    }
				
			set_tximp( tximp_inx, NMOS, tximp_val);

		} while( (cnt++<128) || (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps

		if( cnt >= 127 ) {
			lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
		}
		else if( ana_tximpcal_out == 1 && max_reached_n == 0 ) { //previously toggled from 0->1
			tximp_val++;
			set_tximp( tximp_inx, NMOS, tximp_val);
		}

		tximp_val = max((int8_t)tximp_pre, (int8_t)tximp_val);
		sum += tximp_val;
		
	} //end for loop

	tximp_val = (sum+1)>>1;	//round
	save_tximp(tximp_inx, NMOS, tximp_val);
	set_tximp( tximp_inx, NMOS, tximp_val);

	//Step 2: PMOS branch
	TX_IMPCAL_BOT = 0;		

	sum = 0;
	
	for(i=0; i<4; i++) {
		if(i==1|i==3) TX_IMPCAL_SIDE = 1; //1'b1 during iteration i = 1, 3
		else TX_IMPCAL_SIDE = 0; //1'b0 during iteration i = 0, 2

		if(i==2|i==3) RCALP_2ND_EN = 1; //1'b1 during iteration i = 2, 3
		else RCALP_2ND_EN = 0; //1'b0 during iteration i = 0, 1

		tximp_val = 0x37; 
		set_tximp( tximp_inx, PMOS, 0x37);

		cnt = 0;
		pre_out = toggle_impcal_out_req();

		min_reached_p = 0;
		max_reached_p = 0;
		dir = 0;
		output_cnt = 0;

		do {
			ana_tximpcal_out = toggle_impcal_out_req();

			tximp_pre = tximp_val;

			dir = (dir<<1) | ana_tximpcal_out;
			output_cnt++;
			//if ( ana_tximpcal_out != pre_out ) break; //exit at first toggle
			//if ((dir&0xf) == 0x5 || (dir&0xf) == 0xa) break;
			if ( is_toggle_pat( dir, output_cnt + 1 ) )
			{
				break;
			}
			//if ( is_toggle_pat( dir, 6 ) ) break;

			if( tximp_val == TXIMP_TUNE_MIN) min_reached_p += 1;
			else if( tximp_val == TXIMP_TUNE_MAX) max_reached_p += 1;

        	if( ana_tximpcal_out == 0 ) {
				max_reached_p = 0;
				if( min_reached_p == 0) tximp_val--; //decrement DAC value with underflow protection
				else if ( min_reached_p == 2 ) break; //exit calibration when DAC value is 0x0 with analog result at 0 for 2 consecutive samples
	        }
	        else {
				min_reached_p = 0;
				if( max_reached_p == 0) tximp_val++; //increment DAC value with overflow protection
				else if ( max_reached_p == 2 ) break; //exit calibration when DAC value is 0xf with analog result at 1 for 2 consecutive samples	
	        }
				
			set_tximp( tximp_inx, PMOS, tximp_val);

		} while( (cnt++<128) || (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps

		if( cnt >= 127 ) {
			lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
		}
		else if( ana_tximpcal_out == 0 && min_reached_p == 0 ) { //previously toggled from 1->0
			tximp_val--;
			set_tximp( tximp_inx, PMOS, tximp_val);
		}

		tximp_val = min((int8_t)tximp_pre, (int8_t)tximp_val);
		sum += tximp_val;
		
	} //end for loop

	tximp_val = (sum+2)>>2;	//round
	save_tximp(tximp_inx, PMOS, tximp_val);
	set_tximp( tximp_inx, PMOS, tximp_val);

	} //for
	
	if( lnx_TXIMP_CAL_TIMEOUT_LANE == 0 ) {
		lnx_TXIMP_CAL_PASS_LANE = 1;
	}

	TX_IMPCAL_BOT = 0;
	TX_IMPCAL_SIDE = 0;
	RCALP_2ND_EN = 0;
	TX_IMPCAL_EN = 0;

	recover_test_pattern();

	lnx_TXIMP_CAL_DONE_LANE = 1;
}

/**
 * \module RX IMP Calibratio
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  TXRX_IMPCALOUT
 *    Output: RXIMP_IVREF
*/
void rximp_cal( void ) BANKING_CTRL {
	uint8_t cnt, rximp, min_reached, max_reached, dir;
	bool  ana_rximpcal_out;

	lnx_RXIMP_CAL_DONE_LANE = 0;	

	if( cmx_RXIMP_CAL_EXT_EN == 1) {
		IMPCAL_RX_LANE = lnx_CAL_RX_IMP_LANE_7_0;
        
		lnx_RXIMP_CAL_DONE_LANE = 1;
		return;
	}

	PHY_STATUS = ST_RXIMP_CAL;

	lnx_RXIMP_CAL_PASS_LANE = 0;
	lnx_RXIMP_CAL_TIMEOUT_LANE = 0;

	delay(T_10us); //10us delay between reg_RXIMPCAL_EN and reg_RX_IMPCAL_EN_LANE
	RX_IMPCAL_EN = 1;

	RXIMP_IVREF = 0x0c;
    rximp = 0x0c;
	
	cnt = 0;

	min_reached = 0;
	max_reached = 0;
	dir = 0;

	do {
		ana_rximpcal_out = toggle_impcal_out_req();

		if( rximp == 0x00) min_reached += 1;
		else if( rximp == 0x1f) max_reached += 1;

	        if( ana_rximpcal_out == 0 ) {
			max_reached = 0;
			if( min_reached == 0) rximp--; //decrement DAC value with underflow protection
			else if ( min_reached == 2 ) break; //exit calibration when DAC value is 0x00 with analog result at 0 for 2 consecutive samples
	        }
	        else {
			min_reached = 0;
			if( max_reached == 0) rximp++; //increment DAC value with overflow protection
			else if ( max_reached == 2 ) break; //exit calibration when DAC value is 0x1f with analog result at 1 for 2 consecutive samples	
	        }

		dir = (dir << 1 ) | ana_rximpcal_out;
		if ( is_toggle_pat( dir, cnt + 1 ) ) {
			if( ana_rximpcal_out == 0 ) rximp++; //result will be the bigger value of the toggling values
			break;
		}

		RXIMP_IVREF = rximp;
		
	} while ( (cnt++ < 40) || (cmx_RXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 40 steps
	
	if( cnt >= 40 ) {
		lnx_RXIMP_CAL_TIMEOUT_LANE = 1;
	}
	else 
		lnx_RXIMP_CAL_PASS_LANE = 1;

        lnx_CAL_RX_IMP_LANE_7_0 = rximp; 
	IMPCAL_RX_LANE = rximp; 

	RX_IMPCAL_EN = 0;

	lnx_RXIMP_CAL_DONE_LANE = 1;
}
#else
#define RX_IMPCAL_EN_LANE           reg_RXIMP_CAL_EN_LANE
//#define TIMEOUT_RXIMP_CAL			1000
//#define TIMEOUT_TXIMP_CAL			1000


void tximp_cal_init(void) BANKING_CTRL {

	reg_TXIMPCAL_EN = 1;	//global enable signal for tx_impcal
	reg_TXIMPCAL_EN_LANE = 0;
	reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 0;
	reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 0;
	reg_VTH_TXIMPCAL_2_0 = 3;	//target impedance setting
}
void tximp_cal_n(void) BANKING_CTRL {
	uint8_t i, TXIMP_N;

	TXIMP_N = 0;

	//for(i=0, i<4, i+=1)
	//{
		reg_TXIMPCAL_DRVAMP_2_0 = reg_TX_VREF_TXDRV_SEL_LANE_2_0;	//set tx calibration voltage to be the same as tx driver voltage(see tx_impcal doc for detail)

		reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 0;
		reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 1; //bypass p_cal during n_cal
		reg_TXIMPCAL_EN_LANE = 1;
		reg_TXIMPCAL_BOT_LANE = 1;

		for (i=0; i<=1; i++)
		{
			reg_TXIMPCAL_SIDE_LANE = i;
			reg_TX_IMP_N_CAL_RESULT_EXT_LANE_5_0 = 0x20;
			reg_TX_IMP_TOP_START_LANE = 1;
			/*timeout = 0;
			timeout_start((uint16_t)TIMEOUT_TXIMP_CAL);*/
			while (!reg_TX_IMP_TOP_DONE_LANE);
			if (reg_TX_IMP_N_CAL_TIMEOUT_RD_LANE)
				lnx_TXIMP_CAL_PASS_LANE = 0;
			reg_TX_IMP_TOP_START_LANE = 0;

			TXIMP_N = TXIMP_N + reg_TX_IMP_N_CAL_RESULT_RD_LANE_5_0;
		}
		reg_TX_IMP_N_CAL_RESULT_EXT_LANE_5_0 = TXIMP_N >> 1;

		reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 1;
	//}
}

void tximp_cal_p(void) BANKING_CTRL {
	uint8_t i, TXIMP_P;

	TXIMP_P = 0;
	reg_TX_IMP_N_CAL_BYPASS_EN_LANE = 1;
	reg_TX_IMP_P_CAL_BYPASS_EN_LANE = 0; //bypass p_cal during n_cal
	reg_TXIMPCAL_EN_LANE = 1;
	reg_TXIMPCAL_BOT_LANE = 0;

	for (i=0; i<=3; i++)
	{
		reg_TXIMPCAL_SIDE_LANE = (i & 0x1);
		reg_RCAL_2ND_EN_LANE = i>1?1:0;
		reg_TX_IMP_P_CAL_RESULT_EXT_LANE_5_0 = 0x20;
		reg_TX_IMP_TOP_START_LANE = 1;
		/*timeout = 0;
		timeout_start((uint16_t)TIMEOUT_TXIMP_CAL);*/
		while (!reg_TX_IMP_TOP_DONE_LANE);
		if (reg_TX_IMP_P_CAL_TIMEOUT_RD_LANE)
			lnx_TXIMP_CAL_PASS_LANE = 0;
		reg_TX_IMP_TOP_START_LANE = 0;
		TXIMP_P = TXIMP_P + reg_TX_IMP_P_CAL_RESULT_RD_LANE_5_0;
	}
	reg_TX_IMP_P_CAL_RESULT_EXT_LANE_5_0 = TXIMP_P >> 2;

	reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 1;
}

void tximp_ext(void) BANKING_CTRL {
	reg_TX_IMP_N_CAL_RESULT_EXT_LANE_5_0 = 0x20;
	reg_TX_IMP_P_CAL_RESULT_EXT_LANE_5_0 = 0x20;
	reg_TX_IMP_N_CAL_INDV_EXT_EN_LANE = 1;
	reg_TX_IMP_P_CAL_INDV_EXT_EN_LANE = 1;
	reg_TX_IMP_COMN_EXT_EN_LANE = 1;
	reg_TX_IMP_AUTO_ZERO_CLK_EXT_LANE = 1;
	reg_TX_IMP_AUTO_ZERO_CLK_EXT_LANE = 0;

	lnx_TXIMP_CAL_DONE_LANE = 1;
	lnx_TXIMP_CAL_PASS_LANE = 0;
}
#if 0
void tximp_cal( void ) BANKING_CTRL {}
#else
void tximp_cal( void ) BANKING_CTRL {

	PHY_STATUS = ST_TXIMP_CAL;

	lnx_TXIMP_CAL_DONE_LANE = 0;
	lnx_TXIMP_CAL_PASS_LANE = 1;
	//tximp_cal_init();

	/*if( cmx_TXIMP_CAL_EXT_EN == 1 ) {
		tximp_ext();
		return;
	}*/

	tximp_cal_n();
	tximp_cal_p();

	lnx_TXIMP_CAL_DONE_LANE = 1;
	reg_TXIMPCAL_EN_LANE = 0;
	//reg_TXIMPCAL_EN = 0;
}
#endif
#if 0
void rximp_cal( void ) BANKING_CTRL {}
#else
void rximp_cal( void ) BANKING_CTRL {

	PHY_STATUS = ST_RXIMP_CAL;

	lnx_RXIMP_CAL_PASS_LANE = 0;
	lnx_RXIMP_CAL_DONE_LANE = 0;

	/*if( cmx_RXIMP_CAL_EXT_EN == 1)
	{
		lnx_RXIMP_CAL_DONE_LANE = 1;
		return;
	}*/

	RX_IMPCAL_EN_LANE = 1;

	reg_RX_IMP_TOP_START = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_RXIMP_CAL);
	while (!reg_RX_IMP_TOP_DONE && !timeout);
	if (!timeout)*/
	while (!reg_RX_IMP_TOP_DONE);
	if(reg_RX_IMP_CAL_TIMEOUT_RD == 0)
		lnx_RXIMP_CAL_PASS_LANE = 1;
	reg_RX_IMP_TOP_START = 0;

	reg_IMPCAL_RX_LANE_4_0 = reg_RX_IMP_CAL_RESULT_RD_4_0;
	lnx_RXIMP_CAL_DONE_LANE = 1;
	RX_IMPCAL_EN_LANE = 0;
}
#endif
#endif
