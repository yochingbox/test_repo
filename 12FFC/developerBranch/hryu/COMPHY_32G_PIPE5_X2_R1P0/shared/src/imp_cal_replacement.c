/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_cal.c
* \purpose IMP calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*	03/07/2017 Danny Wu		Updated rximp_cal design algorithm and interface signals
*       03/08/2017 Danny Wu		Updated tximp_cal design algorithm and interface signals
*       03/13/2017 Danny Wu             Added timeout disable features and timeout register read indicators
*       03/15/2017 Danny Wu             Added external enable feature for rximp_cal and tximp_cal designs
*       04/06/2017 Danny Wu             Optimized design code
*       04/10/2017 Danny Wu             Added new feature: toggle_impcal_out_req
*       04/11/2017 Danny Wu             Added phytest control for turning on PT TX with 4T pattern during tximp_cal
*       04/12/2017 Danny Wu             Removed toggle
*       04/14/2017 Danny Wu             Saved previous PT settings and restore it back after tximp_cal ends
*       04/17/2017 Heejeong Ryu         Optimized.
*/
#include "common.h"
// Code banking configuration, do not remove
//#ifdef USE_BANKING
//#pragma codeseg BANK4
//#pragma constseg BANK4
//#endif

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
#ifdef SUPPORT_EXT_MEM

#define RX_IMPCAL_EN                    reg_RXIMPCAL_EN_LANE
#define RXIMP_IVREF			reg_RXIMP_IVREF_4_0
#define IMPCAL_RX_LANE			reg_IMPCAL_RX_LANE_4_0

#define TXRX_IMPCALOUT                  reg_ANA_CMN_IMPCAL_OUT_RD 
#define TXRXIMP_CKCAL                   reg_TRX_IMPCAL_CLK

#define TX_IMPCAL_EN			reg_TX_IMPCAL_EN_LANE
#define TX_IMPCAL_SIDE			reg_TX_IMPCAL_SIDE_LANE
#define TXIMP_TUNEN			reg_TXIMP_TUNEN_LANE_3_0
#define TXIMP_TUNEN0			reg_TXIMP_TUNEN0_LANE_2_0
#define TXIMP_TUNEP			reg_TXIMP_TUNEP_LANE_3_0
#define TXIMP_TUNEP0			reg_TXIMP_TUNEP0_LANE_2_0
#define TX_IMPCAL_BOT			reg_TX_IMPCAL_BOT_LANE
#define RCALP_2ND_EN			reg_RCAL_2ND_EN_LANE
#define TX_VREF_TXDRV_SEL		reg_TX_VREF_TXDRV_SEL_LANE_2_0
#define TXIMPCAL_DRVAMP_2_0		reg_TXIMPCAL_DRVAMP_2_0
#define IMPCAL_OUT_REQ			reg_ANA_CMN_IMPCAL_OUT_REQ
#define PT_EN				reg_PT_EN_LANE
#define	PT_TX_PATTERN_SEL_1_0		reg_PT_TX_PATTERN_SEL_LANE_5_0_b0
#define	PT_TX_PATTERN_SEL_5_2		reg_PT_TX_PATTERN_SEL_LANE_5_0_b1

__code uint8_t tximp_thermo_tb_ram[] = {
  0x0, //000
  0x1, //001 
  0x3, //011
  0x7, //111
};

//uint8_t toggle_impcal_out_req_ram( void ) BANKING_CTRL {
uint8_t toggle_impcal_out_req_ram( void ) {
	uint8_t comp_out;
	
	comp_out = 0;
	TXRXIMP_CKCAL = 1;
	delay01(50); //resets analog comparator
	TXRXIMP_CKCAL = 0;
	delay01(20); //analog settling time
	
	IMPCAL_OUT_REQ = 1;
	IMPCAL_OUT_REQ = 0;
	
	if(TXRX_IMPCALOUT) comp_out = 1;
	
	return comp_out;
}


//void tximp_cal_ram( void ) BANKING_CTRL {
void tximp_cal_ram( void ) {
	uint8_t i, cnt, dir; 
	uint8_t min_reached_n, max_reached_n, min_reached_p, max_reached_p;
	uint8_t tximp_h, tximp_l;
	uint16_t sum, ave=0, ave_0=0;
        bool ana_tximpcal_out, pre_val;

	lnx_TXIMP_CAL_DONE_LANE = 0;

	if( cmx_TXIMP_CAL_EXT_EN == 1 ) {
		TXIMP_TUNEN = lnx_CAL_TXIMP_TUNEN_LANE_7_0;
		TXIMP_TUNEN0 = lnx_CAL_TXIMP_TUNEN0_LANE_7_0;
		TXIMP_TUNEP = lnx_CAL_TXIMP_TUNEP_LANE_7_0;
		TXIMP_TUNEP0 = lnx_CAL_TXIMP_TUNEP0_LANE_7_0;
        
		lnx_TXIMP_CAL_DONE_LANE = 1;
		return;
	}
	
	PHY_STATUS = ST_TXIMP_CAL;

	lnx_TXIMP_CAL_PASS_LANE = 0;
	lnx_TXIMP_CAL_TIMEOUT_LANE = 0;

	//Turn on phytest with 4T pattern
	set_test_pattern_ram(1);

	TXIMPCAL_DRVAMP_2_0 = TX_VREF_TXDRV_SEL;

	delay01(100); //10us delay between reg_TXIMPCAL_EN and reg_TX_IMPCAL_EN_LANE

	TX_IMPCAL_EN = 1;

	//Step 1: NMOS branch
	TX_IMPCAL_BOT = 1;
	
	sum = 0;

	for(i=0; i<2; i++) {
		if(i==1) TX_IMPCAL_SIDE = 1;
		else TX_IMPCAL_SIDE = 0;

		TXIMP_TUNEN = 0x8; // 4'b1000	
		TXIMP_TUNEN0 = 0x7; // 3'b111 (1/6LSB of TXIMP_TUNEN)

		tximp_h = 8; tximp_l = 3;

		cnt = 0;

		pre_val = toggle_impcal_out_req_ram();

		min_reached_n = 0;
		max_reached_n = 0;

		do {
			ana_tximpcal_out = toggle_impcal_out_req_ram();

			if ( ana_tximpcal_out != pre_val ) break; //exit at first toggle

			if( tximp_h == 0x0) min_reached_n += 1;
			else if( tximp_h == 0xf) max_reached_n += 1;

	        	if( ana_tximpcal_out == 0 ) {
				max_reached_n = 0;
				if( min_reached_n == 0) tximp_h--; //decrement DAC value with underflow protection
				else if ( min_reached_n == 2 ) break; //exit calibration when DAC value is 0x0 with analog result at 0 for 2 consecutive samples
		        }
		        else {
				min_reached_n = 0;
				if( max_reached_n == 0) tximp_h++; //increment DAC value with overflow protection
				else if ( max_reached_n == 2 ) break; //exit calibration when DAC value is 0xf with analog result at 1 for 2 consecutive samples	
		        }
				
			TXIMP_TUNEN = tximp_h;
			
		} while( (cnt++<16) | (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps
		
		if( cnt >= 16 ) {
			lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
		}
		else if( ana_tximpcal_out == 1 && max_reached_n == 0 ) { //previously toggled from 0->1
			tximp_h++;
			TXIMP_TUNEN = tximp_h;
		}

		cnt = 0;
		dir = 0;

                do {
			if( tximp_l == 0x0 ) break; //exit once thermal code reaches 000

			ana_tximpcal_out = toggle_impcal_out_req_ram();

	        	if( ana_tximpcal_out == 0 ) {
				if( tximp_l > 0 ) tximp_l--;
		        }
		        else {
				if( tximp_l < 3 ) tximp_l++;
		        }

			TXIMP_TUNEN0 = tximp_thermo_tb_ram[tximp_l];
			
			dir = (dir << 1 ) | ana_tximpcal_out;
			if ( is_toggle_pat_ram( dir, cnt + 1 ) ) break;

		} while( (cnt++<16) | (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps

		if( cnt >= 16 ) {
			lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
		}

		sum += tximp_h * 6;
		sum += tximp_l;

	} //end for loop

	// ave = (uint16_t)((sum >> 1) / 6); //ave = (sum / 2) / 6
	//ave_0 = (uint16_t)((sum - (ave * 12)) >> 1);
	ave = u16div_ram( sum >> 1,  6); //ave = (sum / 2) / 6
	ave_0 = (uint16_t)((sum - u16mul_ram(ave, 12)) >> 1);
	lnx_CAL_TXIMP_TUNEN_LANE_7_0 = (uint8_t)(ave & 0x0f);	
	
	tximp_l = ave_0 > 2 ? 3 : ave_0;  //how about 5/6, 4/6 ??
	lnx_CAL_TXIMP_TUNEN0_LANE_7_0 = tximp_thermo_tb_ram[ tximp_l ];

	TXIMP_TUNEN0 = lnx_CAL_TXIMP_TUNEN0_LANE_7_0;
	TXIMP_TUNEN = lnx_CAL_TXIMP_TUNEN_LANE_7_0;

	//Step 2: PMOS branch
	TX_IMPCAL_BOT = 0;		

	sum = 0;
	
	for(i=0; i<4; i++) {
		if(i==1|i==3) TX_IMPCAL_SIDE = 1; //1'b1 during iteration i = 1, 3
		else TX_IMPCAL_SIDE = 0; //1'b0 during iteration i = 0, 2

		if(i==2|i==3) RCALP_2ND_EN = 1; //1'b1 during iteration i = 2, 3
		else RCALP_2ND_EN = 0; //1'b0 during iteration i = 0, 1

		TXIMP_TUNEP = 0x8; // 4'b1000
		TXIMP_TUNEP0 = 0x0; // 3'b000 (1/6LSB of TXIMP_TUNEP)

		tximp_h = 8; tximp_l = 0;

		cnt = 0;

		pre_val = toggle_impcal_out_req_ram();

		min_reached_p = 0;
		max_reached_p = 0;

		do {
			ana_tximpcal_out = toggle_impcal_out_req_ram();

			if ( ana_tximpcal_out != pre_val ) break; //exit at first toggle

			if( tximp_h == 0x0) min_reached_p += 1;
			else if( tximp_h == 0xf) max_reached_p += 1;

	        	if( ana_tximpcal_out == 0 ) {
				max_reached_p = 0;
				if( min_reached_p == 0) tximp_h--; //decrement DAC value with underflow protection
				else if ( min_reached_p == 2 ) break; //exit calibration when DAC value is 0x0 with analog result at 0 for 2 consecutive samples
		        }
		        else {
				min_reached_p = 0;
				if( max_reached_p == 0) tximp_h++; //increment DAC value with overflow protection
				else if ( max_reached_p == 2 ) break; //exit calibration when DAC value is 0xf with analog result at 1 for 2 consecutive samples	
		        }
				
			TXIMP_TUNEP = tximp_h;
			
		} while( (cnt++<16) | (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps

		if( cnt >= 16 ) {
			lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
		}
		else if( ana_tximpcal_out == 0 && min_reached_p == 0 ) { //previously toggled from 1->0
			tximp_h--;
			TXIMP_TUNEP = tximp_h;
		}

		cnt = 0;
		dir = 0;

                do {
			if( tximp_l == 3 ) break; //exit once thermal code reaches 111

			ana_tximpcal_out = toggle_impcal_out_req_ram();

	        	if( ana_tximpcal_out == 0 ) {
				if( tximp_l > 0 ) tximp_l--;
		        }
		        else {
				if( tximp_l < 3 ) tximp_l++;
		        }

			TXIMP_TUNEP0 = tximp_thermo_tb_ram[tximp_l];

			dir = (dir << 1 ) | ana_tximpcal_out;
			if ( is_toggle_pat_ram( dir, cnt + 1 ) ) break;

		} while( (cnt++<16) | (cmx_TXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 16 steps

		if( cnt >= 16 ) {
			lnx_TXIMP_CAL_TIMEOUT_LANE = 1;
		}

		sum += tximp_h* 6;
		sum += tximp_l;
		
	} //end for loop

	// ave = (uint16_t)((sum >> 2) / 6); //ave = (sum / 2) / 6
	// ave_0 = (uint16_t)((sum - (ave * 24)) >> 2);
	ave = u16div_ram( sum >> 2, 6 ); //ave = (sum / 2) / 6
	ave_0 = (uint16_t)((sum - u16mul_ram(ave, 24)) >> 2);
	lnx_CAL_TXIMP_TUNEP_LANE_7_0 =(uint8_t)(ave & 0x0f);

	tximp_l = ave_0 > 2 ? 3 : ave_0;
	lnx_CAL_TXIMP_TUNEP0_LANE_7_0 = tximp_thermo_tb_ram[ tximp_l ];

	TXIMP_TUNEP = lnx_CAL_TXIMP_TUNEP_LANE_7_0;
	TXIMP_TUNEP0 = lnx_CAL_TXIMP_TUNEP0_LANE_7_0;

	if( lnx_TXIMP_CAL_TIMEOUT_LANE == 0 ) {
		lnx_TXIMP_CAL_PASS_LANE = 1;
	}

	TX_IMPCAL_BOT = 0;
	TX_IMPCAL_SIDE = 0;
	RCALP_2ND_EN = 0;
	TX_IMPCAL_EN = 0;

	recover_test_pattern_ram();

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
//void rximp_cal_ram( void ) BANKING_CTRL {
void rximp_cal_ram( void ) {
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

	delay01(100); //10us delay between reg_RXIMPCAL_EN and reg_RX_IMPCAL_EN_LANE
	RX_IMPCAL_EN = 1;

	RXIMP_IVREF = 0x0c;
    rximp = 0x0c;
	
	cnt = 0;

	min_reached = 0;
	max_reached = 0;
	dir = 0;

	do {
		ana_rximpcal_out = toggle_impcal_out_req_ram();

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
		if ( is_toggle_pat_ram( dir, cnt + 1 ) ) {
			if( ana_rximpcal_out == 0 ) rximp++; //result will be the bigger value of the toggling values
			break;
		}

		RXIMP_IVREF = rximp;
		
	} while ( (cnt++ < 40) | (cmx_RXIMP_CAL_TIMEOUT_DIS == 1) ); //timeout after 40 steps
	
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

//uint16_t u16div_ram(uint16_t x, uint16_t y) BANKING_CTRL
uint16_t u16div_ram(uint16_t x, uint16_t y)
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

#endif //SUPPORT_EXT_MEM
