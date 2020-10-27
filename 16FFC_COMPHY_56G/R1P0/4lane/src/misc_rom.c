/******************************************************************
* 	        Marvell Semiconductor
*******************************************************************
* \file misc.c
* \purpose Miscellaneous functions
* \History
*	10/13/2015 Heejeong Ryu		Initial
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

int8_t max(int8_t a, int8_t b) BANKING_CTRL {
    return a>b?a:b;
}

int8_t min(int8_t a, int8_t b) BANKING_CTRL {
    return a<b?a:b;
}

void delay(int16_t a) BANKING_CTRL
{
	if(BYPASS_DELAY == 0) {
		/* Timer 0 is initialized with the value from the main */
		//MC=400M/12=33.3MHz,  NuSec timer=65535-(33*N)
		//MC=450M/12=37.5MHz,  NuSec timer=65535-(38*N)   (ex)1uSec=65535-38=65497(0xffd9)
		//MC=500M/12=41MHz,  NuSec timer=65535-(41*N)   (ex)1uSec=65535-41=65497(0xffd7)
		TMR0 = a + 2; //a+compensation

		/* Start Timer 0 */
		TR0 = 1;

		/* LOOP around until Timer 0 overflows */
		while (TF0 != 1) {};

		/* Stop Timer 0 and clear overflow flag */
		TR0 = 0;
		TF0 = 0;
	}
	else {
		if(( PHY_STATUS == ST_POSEQ && BYPASS_POWERON_DELAY ) ||
				( BYPASS_DELAY>=4 )) {
			//bypass delay
		}
		else {
			a>>=BYPASS_DELAY;
			TMR0 = a;
			TR0 = 1;
			while (TF0 != 1) {};
			TR0 = 0;
			TF0 = 0;
		}
	}
}


uint8_t sign_abs_up(uint8_t dcc_cnt) BANKING_CTRL {
	uint8_t result;

	if (dcc_cnt == 63) {  //sign = 1, abs = 1_1111
		result = 63;
	}
	else if (dcc_cnt == 0) { //sign = 0, abs = 0_0000
		result = 32;       //sign = 1, abs = 0_0000
	}
	else if (dcc_cnt >= 32) { //sign = 1, abs >= 0_0000
		result = dcc_cnt + 1;
	}
	else {                    //from sign = 0, abs = 1_1111, to sign = 0, abs = 00000
		result = dcc_cnt - 1;
	}

	return result;
}

uint8_t sign_abs_dn(uint8_t dcc_cnt) BANKING_CTRL {
	uint8_t result;

	if (dcc_cnt == 31) {  //sign = 0, abs = 1_1111
		result = 31;
	}
	else if (dcc_cnt == 32) { //sign = 1, abs = 0_0000
		result = 0;       //sign = 0, abs = 0_0000
	}
	else if (dcc_cnt > 32) { //sign = 1, abs > 0_0000
		result = dcc_cnt - 1;
	}
	else {                    //from sign = 0, abs = 1_1111, to sign = 0, abs = 00000
		result = dcc_cnt + 1;
	}

	return result;
}

// Patter matching - 3 toggles in 6 consecutive steps.
// NOTE: If the first sample is 1, this should not count as a toggle
//__code uint8_t toggle_pat_tb[] = {
//		0x05, //000101
//        0x0d, //001101
//        0x1d, //011101
//		0x09, //001001
//		0x19, //011001
//		0x11, //010001
//		0x3a, //111010
//        0x32, //110010
//        0x22, //100010
//		0x36, //110110
//		0x26, //100110
//		0x2e //101110
//};
//BIT is_toggle_pat( uint8_t val ) {
//	uint8_t i;
//	for ( i=0; i<8; i++ ) {
//		if ( toggle_pat_tb[i] == val )
//			return 1;
//	}
//	return 0;
//}

BIT is_toggle_pat( uint8_t val, uint8_t output_cnt  ) BANKING_CTRL {
	uint8_t toggle_cnt = 0;
	BIT prev_state = ( val & 0x01 );	// [0] state
	BIT new_state = ( val & 0x02 );		// [1] state
	uint8_t mask = 0x02;	// Current bit mask
	// loop through bit [2] to [5], last mask of bit [5] is 0x20
	while ( mask < 0x40 && output_cnt > 1 ) {
		if ( new_state != prev_state ) {
			++toggle_cnt;
			prev_state = new_state;
		}
		mask <<= 1;
		--output_cnt;
		new_state = val & mask;
	}
	return toggle_cnt > 2;
}

void set_test_pattern(uint8_t pt_4t_en) BANKING_CTRL {
	save_local_ana_tx2rx_lpbk_en_lane  =  reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE;
	save_pt_tx_pattern_sel_lane_5_0_b0 =  reg_PT_TX_PATTERN_SEL_LANE_5_0_b0;
	save_pt_tx_pattern_sel_lane_5_0_b1 =  reg_PT_TX_PATTERN_SEL_LANE_5_0_b1;
	save_pt_en_lane 				   =  reg_PT_EN_LANE;
	save_pt_tx_clk_en_lane             =  reg_PT_TX_CLK_EN_LANE;

	reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = 1;
	if( pt_4t_en ) {
		reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 0x03; // 4T pattern = 0x0b
		reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 0x02;
	}
	else { //PRBS7
		reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 0x00; //PRBS7:0x10
		reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 0x04;
	}

	reg_PT_EN_LANE = 1;
	reg_PT_TX_CLK_EN_LANE = 1;
}

void recover_test_pattern(void) BANKING_CTRL {
	reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = save_pt_tx_pattern_sel_lane_5_0_b0;
	reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = save_pt_tx_pattern_sel_lane_5_0_b1;
	reg_PT_EN_LANE                    = save_pt_en_lane;
	reg_PT_TX_CLK_EN_LANE             = save_pt_tx_clk_en_lane;
	reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = save_local_ana_tx2rx_lpbk_en_lane;
}

/**
 * \module Read TSEN
 *
 * \param
 *    <NONE>
 * \return
 *    <NONE>
 * \note  Used TSensor continue measure mode:
 *        TSEN_ADC_CAL[1:0] = 2'b10: Automatic self-offset-cal enforced, TSENE_ADC in normal mode
*/
int16_t read_tsen(void) BANKING_CTRL {
	int16_t dat;

	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.
#ifndef SIM_ENV
	if(reg_PWRON_SEQ &&  BYPASS_DELAY==0) {
		while(reg_TSEN_ADC_RDY==0);
	}
#endif

	reg_TSEN_ADC_RD_REQ = 1;

	if( reg_TSEN_ADC_DATA_9_0_b1 & 0x02 ) {
		dat = 0xfc00 | (reg_TSEN_ADC_DATA_9_0_b1<<8) | reg_TSEN_ADC_DATA_9_0_b0;
	}
	else {
		dat = (reg_TSEN_ADC_DATA_9_0_b1<<8) | reg_TSEN_ADC_DATA_9_0_b0;
	}

	if(dat==0&& reg_TSEN_ADC_RDY==0) dat = -234; //return 0xfef0; //2f0=18'

	//reg_TSEN_ADC_RD_REQ = 0; //don't disable!
#ifdef _LAB
	//if(PHY_STATUS>ST_POSEQ) {
	//	DBG_Printf("\r\ntemp=%d", dat);
	//}
#endif
	return dat;
}

uint16_t u16div(uint16_t x, uint16_t y) BANKING_CTRL
{
	uint16_t reste = 0;
	uint8_t count = 16;
	BIT c;

	do
	{
		c = ( x >> 15 ) & 1;
		x <<= 1;
		reste <<= 1;
		if (c)
			reste |= 1;

		if (reste >= y)
		{
			reste -= y;
			// x <- (result = 1)
			x |= 1;
		}
	}
	while (--count);
	return x;
}

union uu {
	struct {
		uint8_t lo,hi ;
	} s;
	unsigned int val;
} ;

uint16_t u16mul (uint16_t a, uint16_t b) BANKING_CTRL
{
	register union uu x;
	register union uu y;
	union uu t;
	x.val = a;
	y.val = b;

	t.val = x.s.lo * y.s.lo;
	t.s.hi += (x.s.lo * y.s.hi) + (x.s.hi * y.s.lo);

	return t.val;
}

