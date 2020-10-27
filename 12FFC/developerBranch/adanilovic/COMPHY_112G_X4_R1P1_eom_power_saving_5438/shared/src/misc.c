/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file misc.c
* \purpose Miscellaneous functions
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#ifndef DSP_BUILD
void short_delay(void) BANKING_CTRL  { //200nS
}
#endif

void short_delay_0(void) BANKING_CTRL  {
	//doen't do anything.
}

int8_t clamp(int8_t a, int8_t ub, int8_t db) BANKING_CTRL {
    return a<db?db:a>ub?ub:a;
}

uint8_t clamp_u8(uint8_t a, uint8_t ub, uint8_t db) BANKING_CTRL {
    //assert ub>db
	//Printf("\r\n ++(clamp_u8): %d %d %d", a, ub, db);
    return a<db?db:a>ub?ub:a;
}

int16_t clamp16(int16_t a, int16_t ub, int16_t db) BANKING_CTRL {
    return a<db?db:a>ub?ub:a;
}

int8_t abs(int8_t a) BANKING_CTRL {
    return a>=0?a:-a;
}

int16_t abs16(int16_t a) BANKING_CTRL {
    return a>=0?a:-a;
}

#ifdef DSP_BUILD
int8_t max_ram(int8_t a, int8_t b) BANKING_CTRL  {
    return a>b?a:b;
}

int8_t min_ram(int8_t a, int8_t b) BANKING_CTRL  {
    return a<b?a:b;
}
#else
/********************************************************************************/
/* The function to filter out fractional noise in the calibration indicator.    */
/* parameters:	cnt, the address of the accumulator for a specific calibration; */
/*				cal_out: the calibration output;  							    */
/*				step_size: the step to update the dac.						    */
/********************************************************************************/
uint8_t fractional_noise_filter(uint8_t * cnt, uint8_t cal_out, uint8_t step_size) BANKING_CTRL {
#ifdef NO_REDUCE_CODE
	if (cal_out == 1)
	{
		*cnt = *cnt - 1;
	}
	else if(cal_out == 0)
	{
		*cnt = *cnt + 1;
	}

	if (*cnt == 0)							// step_size number of 1 accumulated
	{
		*cnt = step_size;
		return 1;
	}
	else if (*cnt >= (step_size << 1))		// step_size number of 0 accumulated
	{
		*cnt = step_size;
		return 0;
	}
	return 0xf;								// to indicate no action should be done
#endif
}

uint8_t conv_thermo_2_bi(uint8_t val) BANKING_CTRL  {
	uint8_t index = 0;

	while(val!=0) {
		val >>= 1; index++;
	}
	return index;
}

#ifndef USE_DMA_DFE
void memcpy(uint8_t *des, uint8_t *src, int n) BANKING_CTRL  {
	int i;

	for(i=0; i<n; i++) {
		*des++ = *src++;
	}
}

void memset0(uint8_t *dest, int n) BANKING_CTRL  {
	int i;

	for(i=0; i<n; i++) {
		dest[i] = 0;
	}
}
#else
void memcpy(uint8_t *des, uint8_t *src, int n) BANKING_CTRL  {

	DMASEL = DMA0;
	DMAM0 = 0x66; //01100110
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMASA = (uint16_t)src;
	DMATA = (uint16_t)des;
	DMAC = n - 1;
	DMASEL = 0x80;
	while(DMASEL&0x80);

}

void memset0(uint8_t *dest, int n) BANKING_CTRL  {

	DMASEL = DMA1;
	DMAM0 = 0x64; //10100100
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMASA = (uint16_t)&DFE_CONTROL_2;
	DMATA = (uint16_t)dest;
	DMAC = n - 1;
	DMASEL = 0x81;
	while(DMASEL&0x80);
}

int8_t max_ram(int8_t a, int8_t b) BANKING_CTRL  {
    return a>b?a:b;
}

int8_t min_ram(int8_t a, int8_t b) BANKING_CTRL  {
    return a<b?a:b;
}

union uu {
	struct {
		uint8_t lo,hi ;
	} s;
	unsigned int val;
} ;

uint16_t u16mul_ram (uint16_t a, uint16_t b) BANKING_CTRL 
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

void delay_ram(int16_t t) BANKING_CTRL 
{
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
	a = u16mul_ram(mcuclk_mc, t); //elapse time 675nSec
	a += 4; a >>= 3; // divide by 8
	if (a <= 25) return;
	a = -a;

	if (BYPASS_DELAY == 0) {
		TMR0 = a + 25;  //a+compensation

		/* Start Timer 0 */
		TR0 = 1;

		/* LOOP around until Timer 0 overflows */
		while(TF0 != 1) {};

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
			while(TF0 != 1) {};
			TR0 = 0;
			TF0 = 0;
		}
	}
}



void set_test_pattern_ram(uint8_t pt_4t_en) BANKING_CTRL  {
#ifdef NO_REDUCE_CODE
	save_local_ana_tx2rx_lpbk_en_lane  =  reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE;
/////////////fixed cross-byte reg
//	save_pt_tx_pattern_sel_lane_5_0_b0 =  reg_PT_TX_PATTERN_SEL_LANE_5_0_b0;
//	save_pt_tx_pattern_sel_lane_5_0_b1 =  reg_PT_TX_PATTERN_SEL_LANE_5_0_b1;
	save_pt_tx_pattern_sel_lane_5_0 =  reg_PT_TX_PATTERN_SEL_LANE_5_0;

	save_pt_en_lane 				   =  reg_PT_EN_LANE;
	save_pt_tx_clk_en_lane             =  reg_PT_TX_CLK_EN_LANE;

	reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = 1;
	if( pt_4t_en ) {
/////////////fixed cross-byte reg
//		reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 0x03; // 4T pattern = 0x0b
//		reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 0x02;
		reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x0B;
	}
	else { //PRBS7
/////////////fixed cross-byte reg
//		reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = 0x00; //PRBS7:0x10
//		reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = 0x04;
		reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x10;
	}

	reg_PT_EN_LANE = 1;
	reg_PT_TX_CLK_EN_LANE = 1;
#endif
}

void recover_test_pattern_ram(void) BANKING_CTRL  {
#ifdef NO_REDUCE_CODE
/////////////fixed cross-byte reg
//	reg_PT_TX_PATTERN_SEL_LANE_5_0_b0 = save_pt_tx_pattern_sel_lane_5_0_b0;
//	reg_PT_TX_PATTERN_SEL_LANE_5_0_b1 = save_pt_tx_pattern_sel_lane_5_0_b1;
	reg_PT_TX_PATTERN_SEL_LANE_5_0 = save_pt_tx_pattern_sel_lane_5_0;

	reg_PT_EN_LANE                    = save_pt_en_lane;
	reg_PT_TX_CLK_EN_LANE             = save_pt_tx_clk_en_lane;
	reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = save_local_ana_tx2rx_lpbk_en_lane;
#endif
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
int16_t read_tsen_ram(void) BANKING_CTRL  {
	int16_t dat;

	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.
//#ifndef SIM_ENV
	if(reg_PWRON_SEQ_LANE &&  BYPASS_DELAY==0) {
		//while(reg_TSEN_ADC_RDY==0);
	}
//#endif

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

uint16_t u16div_ram(uint16_t x, uint16_t y) BANKING_CTRL 
{
#ifdef NO_REDUCE_CODE
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
	while(--count);
	return x;
#endif
}

#endif
#endif

#if 0
void timerStart(void) BANKING_CTRL{
	save_dfe_PO_status = lnx_DFE_POWER_SAVING_CLKOFF_TIME_15_8;
	lnx_DFE_POWER_SAVING_CLKOFF_TIME_15_8 = 0;
	dfe_backon();
	timerMSB = 0;
	timer2_msb = 0;
	T2CON = 0x60;
	TF2 = 0;
	TMR2 = 0;
	ET2 = 1;
	T2CON = 0x62;
}

void timerStop(void) BANKING_CTRL{
//	T2CON=0x60; 
	TF2 = 0;
	reg_MCU_DEBUG4_LANE_7_0 = TMR2;
	reg_MCU_DEBUG5_LANE_7_0 = TMR2>>8;
	reg_MCU_DEBUG6_LANE_7_0 = timerMSB;
//	ET2 = 0;
	lnx_DFE_POWER_SAVING_CLKOFF_TIME_15_8=save_dfe_PO_status;
}
#endif

void timer2_init() BANKING_CTRL{
	timerMSB = 0;
	timer2_msb = 0;
	T2CON = 0x60;
	TF2 = 0;
	TMR2 = 0;
	ET2 = 1;
	T2CON = 0x62;
}

// TH2 TL2
uint32_t get_time() BANKING_CTRL{
	uint32_t current_time = 0;
//	EA=0; // do not block int in case missing msb inc
	T2CON = 0x60; // if using other guard instead, make sure TH2 is always correct
	current_time = (uint32_t)timer2_msb<<16 | (uint32_t)TMR2&0xffff;
	T2CON = 0x62;
//	EA=1;
	return current_time;
}

// Users make sure timer_index<MAX_TIMERS
// Please user explicit type conversion on duration (uint32_t)!
void timeout2_start(uint8_t timer_index, uint32_t duration) BANKING_CTRL{
	timeout2_timers[timer_index].start_time = get_time();
	timeout2_timers[timer_index].duration = duration;
	#if 0
	switch(timer_index){
		case DFE_POWER_SAVING_TIMER:
			lnx_MCU_RESERVEDX04_LANE_7_0 = duration&0xff;
			lnx_MCU_RESERVEDX05_LANE_7_0 = duration>>8&0xff;
			lnx_MCU_RESERVEDX06_LANE_7_0 = duration>>16&0xff;
			lnx_MCU_RESERVEDX07_LANE_7_0 = duration>>24&0xff;
			break;
	}
	#endif
}

// timeout or timeout2_running==0, return 1
uint8_t timeout2_check(uint8_t timer_index) BANKING_CTRL{
	uint32_t time = get_time();
	if(time-timeout2_timers[timer_index].start_time > timeout2_timers[timer_index].duration){
//		DBG_Printf("%lu-%lu>%lu\r\n",time,timeout2_timers[timer_index].start_time,timeout2_timers[timer_index].duration);
		return 1;
	}else
		return 0;
}
// in common.h:
//#define timeout2_running(a) (timeout2_timers[a].duration != 0)
//#define timer2_start(a) timeout2_start((a),1L)
//#define timer2_stop(a) timeout2_stop(a)
void timeout2_stop(uint8_t timer_index) BANKING_CTRL{
	uint32_t time = timer2_check(timer_index);
	if(timeout2_running(timer_index)){
		timeout2_timers[timer_index].duration = 0;
		
		switch(timer_index){
		case TRAINING_TIMER:
			reg_MCU_DEBUG4_LANE_7_0 = time&0xff;
			reg_MCU_DEBUG5_LANE_7_0 = time>>8&0xff;
			reg_MCU_DEBUG6_LANE_7_0 = time>>16&0xff;
			break;
		#if 1
		case DFE_POWER_SAVING_TIMER:
			lnx_MCU_RESERVEDX00_LANE_7_0 = time&0xff;
			lnx_MCU_RESERVEDX01_LANE_7_0 = time>>8&0xff;
			lnx_MCU_RESERVEDX02_LANE_7_0 = time>>16&0xff;
			lnx_MCU_RESERVEDX03_LANE_7_0 = time>>24&0xff;
			break;
		#endif
		}
		
	}
}

uint32_t timer2_check(uint8_t timer_index) BANKING_CTRL{
	uint32_t time = get_time();
	return time-timeout2_timers[timer_index].start_time;
}

