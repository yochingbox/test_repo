/******************************************************************
 * 	        Marvell Semiconductor
 *******************************************************************
 * \file squelch_cal.c
 * \purpose SQ CAL
 * \History
 *	10/15/2015 Heejeong Ryu		Initial
 */
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

/**
 * \module squelch_cal
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
#define SQ_OUT       		reg_ANA_RX_SQ_OUT_RD_LANE
#define SQ_CAL_MODE  		1
#define SQ_SEL_IN    		2
#define SQ_OFFSET_CAL_EN	reg_SQ_OFFSET_CAL_EN_LANE
#define SQ_THRESH_CAL_EN	reg_SQ_THRESH_CAL_EN_LANE
#define SQ_CAL_PU   	 	reg_ANA_PU_SQ_LANE // ANA_PU_SQ_LANE register is PU_SQ in the design spec
#define SQ_CAL_EN   	 	reg_SQ_CAL_PU_LANE // SQ_CAL_PU_LANE register is SQ_CAL_EN in the design spec
#define SQ_OFFSET 			reg_SQ_OFFSET_LANE_4_0
#define SQ_REFTHR    		reg_SQ_REFTHR_LANE_4_0
#define SQ_THRESH    		reg_SQ_THRESH_LANE_5_0
#define OFFSETCAL_SEL		reg_SQ_OFFSETCAL_SEL_LANE_1_0 

//#define thr_sel	reg_MCU_DEBUG2_LANE_7_0
//#define thr_cnt	reg_MCU_DEBUG3_LANE_7_0

void squelch_cal() BANKING_CTRL {
	uint8_t dir;
	int8_t  sq_cnt;
	uint8_t thr_sel, thr_cnt; 	
	bool up;
	int8_t  loop_cnt;
	int8_t  thr1, thr2;
	int8_t final_offset;
	int8_t offset2;
	BIT over_loop_cnt = 0;	// Indicating if the loop is exited when loop count is over the limit
	uint8_t output_cnt;

	lnx_SQ_CAL_DONE_LANE = 0;

	if( cmx_SQ_CAL_EXT_EN ) {
		SQ_OFFSET = lnx_CAL_SQ_OFFSET_LANE_7_0;
		SQ_THRESH = lnx_CAL_SQ_THRESH_LANE_7_0;
		lnx_SQ_CAL_DONE_LANE = 1;
		return;
	}
	
	PHY_STATUS = ST_SQ_CAL;

	lnx_SQ_CAL_PASS_LANE = 0;

	sq_cnt = 0;
	loop_cnt = 0;
	final_offset = 0;

	SQ_CAL_PU = 1;
	delay( Tus );
	SQ_CAL_EN = 1;
	delay( Tus );
	SQ_OFFSET_CAL_EN = 1;
	// SQ_THRESH_CAL_EN = 0;
	SQ_THRESH = 0x20;
	SQ_OFFSET = 0x10;
	// SQ_REFTHR = 0x10; // TBD: Not in spec
	OFFSETCAL_SEL = 0x3;
	delay( Tus );

	//--
	thr_cnt = 0;
	do {
		thr_sel = 1;
		do {
			OFFSETCAL_SEL = thr_sel;

			dir    = 0;
			sq_cnt = 0;        
			loop_cnt = 0; 
			output_cnt = 0;
			while ( ( loop_cnt < 64 ) && ( sq_cnt != 32 ) && ( sq_cnt != -32 ) ) {
				SQ_THRESH = ( sq_cnt < 0 ) ? -sq_cnt : ( sq_cnt + 0x20 );	// Bit[6] is sign bit, 1 = pos
				delay( T_p5us );
				up = SQ_OUT;
				dir = (dir << 1 ) | up;
				++output_cnt;
				if ( is_toggle_pat( dir, output_cnt ) )
					break;
				else
					up ? --sq_cnt : ++sq_cnt;
				loop_cnt ++;        
			} // end of while loop_cnt < 64
			if ( loop_cnt >= 64 )
				over_loop_cnt = 1;
			if ( thr_sel == 0x1 )
				thr1 = sq_cnt;
			else
				thr2 = sq_cnt;
		} while ( thr_sel++ < 2 );	

		if ( thr_cnt == 0 ) {
			// 1st: final_offset = thr2 - thr1;
			// - If thr2 is larger than thr1 (final_offset>0), SQ_OFFSET[ 4 ] = 0,
			// - If thr2 is smaller than thr1, SQ_OFFSET[ 4 ] = 1, absolute value of offset1 to SQ_OFFSET[3:0]
			// then: final_offset = -final_offset;	// Prepared to set to SQ_OFFSET, this is "offset1"
			final_offset = thr1 - thr2;	// This is offset1
			// check boundaries
			final_offset = final_offset > 15 ? 15 : ( final_offset < - 15 ? -15 : final_offset );
		}
		else {
			// 1st : offset2 = thr2 - thr1;	// This is offset2
			offset2 = thr2 - thr1;
			// check boundaries
			offset2 = offset2 > 15 ? 15 : ( offset2 < - 15 ? -15 : offset2 );
			// - if thr2 > thr1, subtract the absolute value of offset2 from SQ_OFFSET[4:0]
			// - if thr2 < thr1, add the absolute value of offset2 to SQ_OFFSET[4:0]
			// last modified final_offset is equal to SQ_OFFSET[4:0]
			// then: final offset = final_offset - offset2
			final_offset = final_offset - offset2; // Final offset
			// check boundaries
			final_offset = final_offset > 15 ? 15 : ( final_offset < - 15 ? -15 : final_offset );
		}
		// Write the SQ_OFFSET with calculated value (both loops)
		if ( final_offset > 0 )
			SQ_OFFSET = ( final_offset & 0x0F ) | 0x10;
		else
			SQ_OFFSET = ( -final_offset ) & 0x0F;
	} while ( thr_cnt++ < 1 );

	// -- threshold voltage calibration
	OFFSETCAL_SEL = 0x03;
	SQ_THRESH = 0x20;
	SQ_OFFSET_CAL_EN = 0;
	delay( Tus );
	SQ_THRESH_CAL_EN = 1;
	delay(Tus);

	thr_cnt=0;
	do {
		sq_cnt = 0;
		loop_cnt = 0;  
		dir    = 0;
		output_cnt = 0;
		SQ_REFTHR = ( 0 == thr_cnt ) ? 0x07 : 0x17;	// SQ_REFTHR = 00111b and then 10111b
		while ( ( loop_cnt < 64 ) && ( sq_cnt != 32 ) && ( sq_cnt != -32 ) ) {
			SQ_THRESH = ( sq_cnt < 0 ) ? -sq_cnt : ( sq_cnt + 0x20 );	// Bit[6] is sign bit, 1 = pos
			delay( T_p5us );
			up = SQ_OUT;
			dir = ( dir << 1 ) | up;
			++output_cnt;
			if ( is_toggle_pat( dir, output_cnt ) )
				break;
			up ? --sq_cnt : ++sq_cnt;
			loop_cnt ++;
		}
		if ( loop_cnt >= 64 )
			over_loop_cnt = 1;
		if ( thr_cnt == 0 )
			thr1 = sq_cnt;
		else
			thr2 = sq_cnt;
	}  while( thr_cnt++ < 1 );
	sq_cnt = ( thr1 + thr2 ) >> 1;
	SQ_THRESH = ( sq_cnt < 0 ) ? -sq_cnt : ( sq_cnt + 0x20 );

	SQ_THRESH_CAL_EN = 0;
	delay( Tus );
	SQ_CAL_EN = 0;
	OFFSETCAL_SEL  = 0x3;

	lnx_CAL_SQ_OFFSET_LANE_7_0 = SQ_OFFSET;
	lnx_CAL_SQ_THRESH_LANE_7_0 = SQ_THRESH;

	lnx_SQ_CAL_DONE_LANE = 1;
	lnx_SQ_CAL_PASS_LANE = ( 0 == over_loop_cnt );  // Pass = 1 indicates no timeout (toggled or reached boundaries)
}
#else
void rx_sq_ofst_init(void) BANKING_CTRL {

	reg_SQ_CAL_EN_LANE = 1;
	reg_SQ_OFFSET_CAL_EN_LANE = 1;
	reg_SQ_THRESH_CAL_EN_LANE = 0;

	//reg_SQ_CAL_INDV_EXT_EN_LANE = 1;
	reg_SQ_CAL_RESULT_EXT_LANE_5_0 = 0x20;
	reg_SQ_OFFSET_LANE_4_0 = 0x10;
}

void rx_sq_ofst_cal(void) BANKING_CTRL {
	int8_t thr1, thr2, ofst;

	PHY_STATUS = ST_SQ_OFST_CAL;

	lnx_SQ_OFST_CAL_DONE_LANE = 0;
	lnx_SQ_OFST_CAL_PASS_LANE = 1;
	rx_sq_ofst_init();

	reg_SQ_OFFSETCAL_SEL_LANE_1_0 = 1;
	reg_RX_SQ_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_SQ_OFST_CAL);*/
	while (!reg_RX_SQ_TOP_DONE_LANE);
	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_OFST_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;

	if ((reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x20) == 0)
	{
		thr1 = reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x1f;
	}
	else
	{
		thr1 = -(reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x1f);
	}

	reg_SQ_OFFSETCAL_SEL_LANE_1_0 = 2;
	reg_RX_SQ_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_SQ_OFST_CAL);
	while (!reg_RX_SQ_TOP_DONE_LANE && !timeout);
	if(timeout)*/
	while (!reg_RX_SQ_TOP_DONE_LANE);
	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_OFST_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;

	if ((reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x20) == 0)
	{
		thr2 = reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x1f;
	}
	else
	{
		thr2 = -(reg_SQ_CAL_RESULT_RD_LANE_5_0 & 0x1f);
	}

	if (thr1 >= thr2)
	{
		reg_SQ_OFFSET_LANE_4_0 = ((thr1 - thr2) & 0xf) | 0x10;
	}
	else
	{
		reg_SQ_OFFSET_LANE_4_0 = ((thr1 - thr2) & 0xf);
	}
	lnx_SQ_OFST_CAL_DONE_LANE = 1;
}

void rx_sq_thresh_init(void) BANKING_CTRL {
	reg_SQ_CAL_EN_LANE = 1;
	reg_SQ_OFFSET_CAL_EN_LANE = 0;
	reg_SQ_THRESH_CAL_EN_LANE = 1;
	reg_SQ_CAL_INDV_EXT_EN_LANE = 0;
}

void rx_sq_thresh_cal(void) BANKING_CTRL {
	uint8_t thr1, thr2;

	PHY_STATUS = ST_SQ_THRESH_CAL;

	lnx_SQ_THRESH_CAL_DONE_LANE = 0;
	lnx_SQ_THRESH_CAL_PASS_LANE = 1;
	rx_sq_thresh_init();

	reg_SQ_REFTHR_LANE_4_0 = 0x07;
	reg_RX_SQ_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_SQ_THRESH_CAL);
	while (!reg_RX_SQ_TOP_DONE_LANE && !timeout);
	if(timeout)*/

	while (!reg_RX_SQ_TOP_DONE_LANE);

	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_THRESH_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;

	thr1 = reg_SQ_CAL_RESULT_RD_LANE_5_0;

	reg_SQ_REFTHR_LANE_4_0 = 0x17;
	reg_RX_SQ_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_SQ_THRESH_CAL);
	while (!reg_RX_SQ_TOP_DONE_LANE && !timeout);
	if(timeout)*/
	while (!reg_RX_SQ_TOP_DONE_LANE);
	if(reg_SQ_CAL_TIMEOUT_RD_LANE)
		lnx_SQ_THRESH_CAL_PASS_LANE = 0;
	reg_RX_SQ_TOP_START_LANE = 0;

	thr2 = reg_SQ_CAL_RESULT_RD_LANE_5_0;

	reg_SQ_CAL_RESULT_EXT_LANE_5_0 = (thr1 + thr2) >> 1;
	reg_SQ_CAL_INDV_EXT_EN_LANE = 1;

	lnx_SQ_THRESH_CAL_DONE_LANE = 1;
	reg_SQ_CAL_EN_LANE = 0;
}
#endif
