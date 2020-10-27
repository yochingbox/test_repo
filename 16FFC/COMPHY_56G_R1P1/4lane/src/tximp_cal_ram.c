/*
 * tximp_cal_ram.c
 *
 *  Created on: Apr 26, 2018
 *      Author: echeng
 */

#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
//#pragma codeseg BANK2
//#pragma constseg BANK2
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

extern __code uint8_t tximp_sel_tb[];

uint8_t  toggle_impcal_out_req_02( void ) {
#if 0
	uint8_t comp_out;
	uint8_t i, val;

	comp_out = 0;
	TXRXIMP_CKCAL = 1;
	delay(T_5us); //resets analog comparator
	TXRXIMP_CKCAL = 0;

	if(reg_MCU_DEBUG2_LANE_7_0 == 2)
	{
		delay(T_2us);
	}
	else if(reg_MCU_DEBUG2_LANE_7_0 == 4)
	{
		delay(T_4us);
	}
	else if(reg_MCU_DEBUG2_LANE_7_0 == 6)
	{
		delay(T_6us);
	}
	else if(reg_MCU_DEBUG2_LANE_7_0 == 8)
	{
		delay(T_8us);
	}
	else if(reg_MCU_DEBUG2_LANE_7_0 == 10)
	{
		delay(T_10us);
	}
	//delay(T_8us); //analog settling time

	IMPCAL_OUT_REQ = 1;
	IMPCAL_OUT_REQ = 0;

	if(TXRX_IMPCALOUT) comp_out = 1;

	return comp_out;
#endif
}

void tximp_cal_02( void ) {
#if 0
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

		pre_out = toggle_impcal_out_req_02();

		min_reached_n = 0;
		max_reached_n = 0;
		dir = 0;
		output_cnt = 0;

		do {
			ana_tximpcal_out = toggle_impcal_out_req_02();

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
		pre_out = toggle_impcal_out_req_02();

		min_reached_p = 0;
		max_reached_p = 0;
		dir = 0;
		output_cnt = 0;

		do {
			ana_tximpcal_out = toggle_impcal_out_req_02();

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
#endif
}



