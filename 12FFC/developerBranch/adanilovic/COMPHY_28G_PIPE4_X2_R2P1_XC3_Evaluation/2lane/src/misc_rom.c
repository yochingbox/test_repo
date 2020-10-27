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

/*
 *  delay01()
 *    t - one unit equal to 1/10 uSec. I.e. to delay 1usec, t = 10.
 *
 *  delay01 uses timer0 to setup the delay. The timer frequency is 1/12th of the MCU frequency.
 *  For the delay of t, the time delay, a = t/10*MCU_frequency/12 = t*MCU_frequency/(2*5 * 2*2*3)
 *  mcuclk_mc = MCU_frequency / 15
 *  so we have a = t * mcuclk_mc / 8
 */
void delay01(int16_t t) BANKING_CTRL{
	register int16_t a;
	int16_t i;

	if (t < 3) {
		// just to get here, it takes more than 200ns, so just return if the delay is 200 nSec or less.
		return;
	} else if (t < 11) {
		for (i = 3; i < t; i++) {
			__asm
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
			__endasm;
		}
		return;
	}
	a = u16mul(mcuclk_mc, t); //elapse time 675nSec
	a += 4; a >>= 3; // divide by 8
	if (a <= 25) return;
	a = -a;

	if (BYPASS_DELAY == 0) {
		TMR0 = a + 25;  //a+compensation

		/* Start Timer 0 */
		TR0 = 1;

		/* LOOP around until Timer 0 overflows */
		while (TF0 != 1) {};

		/* Stop Timer 0 and clear overflow flag */
		TR0 = 0;
		TF0 = 0;
	} else {
		if(( PHY_STATUS == ST_POSEQ && BYPASS_POWERON_DELAY ) ||
		   ( BYPASS_DELAY>=4 )) {
			//bypass delay
		} else {
			a >>= BYPASS_DELAY;
			TMR0 = a;
			TR0 = 1;
			while (TF0 != 1) {};
			TR0 = 0;
			TF0 = 0;
		}
	}
}

#if 0
void delay(int16_t a) BANKING_CTRL
{
	if(BYPASS_DELAY == 0) {
		/* Timer 0 is initialized with the value from the main */
		//MC=400M/12=33.3MHz,  NuSec timer=65535-(33*N)
		//MC=450M/12=37.5MHz,  NuSec timer=65535-(38*N)   (ex)1uSec=65535-38=65497(0xffd9)
		//MC=500M/12=41MHz,  NuSec timer=65535-(41*N)   (ex)1uSec=65535-41=65497(0xffd7)
		TMR0 = a + 2; //a+compensation
	}
	else {
		if(( PHY_STATUS == ST_POSEQ && BYPASS_POWERON_DELAY ) ||
				( BYPASS_DELAY>=4 )) {
			//bypass delay
			return;
		}
		else {
			TMR0 = a>>BYPASS_DELAY;
		}
	}

	/* Start Timer 0 */
	TR0 = 1;

	/* LOOP around until Timer 0 overflows */
	while (TF0 != 1) {
		if(PHY_NS!=ST_INIT) break;
	};

	/* Stop Timer 0 and clear overflow flag */
	TR0 = 0;
	TF0 = 0;

}
#endif

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
BIT is_num_toggle_pat( uint8_t val, uint8_t output_cnt, uint8_t target_toggles  ) BANKING_CTRL {
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
	return toggle_cnt >= target_toggles;
}

BIT is_toggle_pat( uint8_t val, uint8_t output_cnt  ) BANKING_CTRL {
	return is_num_toggle_pat( val, output_cnt, 3 );
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

	if(reg_MCU_COMMAND0_LANE_31_0_b0==0) {
		while(reg_TSEN_ADC_RDY==0);
	}

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

void short_delay(void) BANKING_CTRL { //100nS @400MHz
	__asm
		nop
		nop
		nop
		nop
		nop
		nop
		nop
	__endasm;
}
void short_delay_0(void) BANKING_CTRL{
	//doesn't do anything.
}

int8_t max(int8_t a, int8_t b) BANKING_CTRL{
    return a>b?a:b;
}

int8_t min(int8_t a, int8_t b) BANKING_CTRL{
    return a<b?a:b;
}

int8_t clamp(int8_t a, int8_t ub, int8_t db) BANKING_CTRL{
    return a<db?db:a>ub?ub:a;
}

uint8_t clamp_u8(uint8_t a, uint8_t ub, uint8_t db) BANKING_CTRL{
    //assert ub>db
	//Printf("\r\n ++(clamp_u8): %d %d %d", a, ub, db);
    return a<db?db:a>ub?ub:a;
}

int16_t clamp16(int16_t a, int16_t ub, int16_t db) BANKING_CTRL{
    return a<db?db:a>ub?ub:a;
}

int8_t abs(int8_t a) BANKING_CTRL{
    return a>=0?a:-a;
}

int16_t abs16(int16_t a) BANKING_CTRL{
    return a>=0?a:-a;
}

//-------------------------------------
// memcpy
//
// Note:
//dmam0[7:6]  Target space code: 00: Program Memory 01: External Data Memory 10: On-Chip Data Memory (IRAM) 11 : Special Function Registers
//dmam0[5:4]  Target address control: 00: Auto-modification disabled (address remains unchanged) 10 : Auto-increment 11 : Auto-decrement
//dmam0[3:2]  Source space code: 00: Program Memory 01 : External Data Memory 10 : On-Chip Data Memory (IRAM) 11 : Special Function Registers
//dmam0[1:0]  Source address control: 00 : Auto-modification disabled (address remains unchanged) 10 : Auto-increment 11 : Auto-decrement
//
//-------------------------------------
void memcpy(uint8_t *des, uint8_t *src, int n) BANKING_CTRL{

    reg_MCU_DEBUG1_LANE_7_0 = 0x77;
    memcpy_sw(des, src, n);
	/*DMASEL = DMA0; */
	/*DMAM0 = 0x66; //01100110*/
	/*DMAM1 = 0x1f;*/
	/*DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;*/
	/*DMASA = (uint16_t)src;*/
	/*DMATA = (uint16_t)des;*/
	/*DMAC = n - 1;*/
	/*DMASEL = 0x80; */
	/*while(DMASEL&0x80);*/
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

}

void memcpy_prom_to_xdat(uint32_t des, uint32_t src, uint16_t n) BANKING_CTRL{

    reg_MCU_DEBUG1_LANE_7_0 = 0x78;
    memcpy_sw(des, src, n);
	/*DMASEL = DMA0; */
	/*DMAM0 = 0x62; //01100010*/
	/*DMAM1 = 0x1f;*/
	/*DMAT2 = 0; DMAC2 = 0;*/
	/*DMAS2 = (uint8_t)(src>>16);*/
	/*DMASA = (uint16_t)src;*/
	/*DMATA = (uint16_t)des;*/
	/*DMAC = n - 1;*/
	/*DMASEL = 0x80; */
	/*while(DMASEL&0x80);*/
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

}

void memset0(uint8_t *dest, int n) BANKING_CTRL{

    reg_MCU_DEBUG1_LANE_7_0 = 0x79;
    memset0_sw(dest, n);
	/*DMASEL = DMA1; */
	/*DMAM0 = 0x64; //10100100*/
	/*DMAM1 = 0x1f;*/
	/*DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;*/
	/*DMASA = (uint16_t)&DFE_CONTROL_2;*/
	/*DMATA = (uint16_t)dest;*/
	/*DMAC = n - 1;*/
	/*DMASEL = 0x81; */
	/*while(DMASEL&0x80);*/
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;
}

uint8_t conv_thermo_2_bi(uint8_t val) BANKING_CTRL{
	uint8_t index = 0;
	
	while(val!=0) {
		val >>= 1; index++;
	}
	return index;
}

