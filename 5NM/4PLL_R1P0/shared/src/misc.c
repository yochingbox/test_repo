/*******************************sT***********************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file misc.c
* \purpose Miscellaneous functions
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

void short_delay(void) { //200nS
	__asm
		nop
		nop		
		nop
		nop		
	__endasm;	
}

#if 0
void short_delay_0(void) {
	//doesn't do anything.
}
#endif

void short_delay_4g(void) {
	int i = 10;
	while(i-->0) {
		short_delay();	
	}	
}

/*
 *  delay()
 *    t - one unit equal to 1/10 uSec. I.e. to delay 1usec, t = 10.
 *
 *  delay uses timer0 to setup the delay. The timer frequency is 1/12th of the MCU frequency.
 *  For the delay of t, the time delay, a = t/10*MCU_frequency/12 = t*MCU_frequency/(2*5 * 2*2*3)
 *  mcuclk_mc = MCU_frequency / 15
 *  so we have a = t * mcuclk_mc / 8
 */
static void delay_internal(int16_t t, bool force_delay) {
	register int16_t a;
		
	if( (( mcuid != MCU_CMN && PHY_STATUS == ST_POSEQ && cmx_BYPASS_POWER_ON_DELAY ) || ( BYPASS_DELAY>=4 )) &&
             ( force_delay == false )) { 
			//bypass delay
			return;
	}
	else if( (( mcuid == MCU_CMN && PHY_STATUS_CMN == ST_POSEQ && cmx_BYPASS_POWER_ON_DELAY ) ||
		      ( BYPASS_DELAY>=4 )) &&
              ( force_delay == false )) { 
			//bypass delay
			return;
	}

	t = t - 8; //elimilate the 0.8us overhead becuase of funciton call, cache miss and branching
	if (mcuid == MCU_CMN) a = cmx_MCUCLK_MC_7_0*t;
	else a = mcuclk_mc*t;


	a >>= 3; // divide by 8
	a = -a;

	if ((BYPASS_DELAY == 0) || (force_delay == true)) {
		TMR0 = a;

		/* Start Timer 0 */
		TR0 = 1;

		/* LOOP around until Timer 0 overflows */
		while (TF0 != 1) {};

		/* Stop Timer 0 and clear overflow flag */
		TR0 = 0;
		TF0 = 0;
	} else {
		a >>= BYPASS_DELAY;
		TMR0 = a;
		TR0 = 1;
		while (TF0 != 1) {};
		TR0 = 0;
		TF0 = 0;

	}
}

void force_delay(int16_t t) {
  t -= 2; // Calling the function, branching and return use 200ns+ 
  if(t <= 8) { // Do not check bypass if t <= 10. Use loops to delay instead of timers
    while(t-->0){
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
      __endasm;
    }
    return;
  }
  delay_internal(t, true);
}

void delay(int16_t t) {
  t -= 2; // Calling the function, branching and return use 200ns+ 
  if(t <= 8) { // Do not check bypass if t <= 10. Use loops to delay instead of timers
    while(t-->0){
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
      __endasm;
    }
    return;
  }
  delay_internal(t, false);
}

int8_t clamp(int8_t a, int8_t ub, int8_t db){
    return a<db?db:a>ub?ub:a;
}

#if 0
uint8_t clamp_u8(uint8_t a, uint8_t ub, uint8_t db){
    //assert ub>db
	//Printf("\r\n ++(clamp_u8): %d %d %d", a, ub, db);
    return a<db?db:a>ub?ub:a;
}
#endif

int16_t clamp16(int16_t a, int16_t ub, int16_t db){
    return a<db?db:a>ub?ub:a;
}

int8_t abs(int8_t a){
    return a>=0?a:-a;
}

int16_t abs16(int16_t a){
    return a>=0?a:-a;
}

int8_t max(int8_t a, int8_t b) {
    return a>b?a:b;
}

int8_t min(int8_t a, int8_t b) {
    return a<b?a:b;
}

#if 0
uint8_t conv_thermo_2_bi(uint8_t val) {
	uint8_t index = 0;

	while(val!=0) {
		val >>= 1; index++;
	}
	return index;
}
#endif


__code uint8_t gray2bin[] = {0, 1, 3, 2, 7, 6, 4, 5, 15, 14, 12, 13, 8, 9, 11, 10};
__code uint8_t bin2gray[] = {0, 1, 3, 2, 6, 7, 5, 4, 12, 13, 15, 14, 10, 11, 9, 8, };

uint8_t conv_gray2bin(uint8_t gray) {
	return gray2bin[gray];
}

uint8_t conv_bin2gray(uint8_t bin) {
	return bin2gray[bin];
}

#ifndef USE_DMA_DFE
void memcpy(uint8_t *des, uint8_t *src, int n) {
	int i;

	for(i=0; i<n; i++) {
		*des++ = *src++;
	}
}

void memset0(uint8_t *dest, int n) {
	int i;

	for(i=0; i<n; i++) {
		dest[i] = 0;
	}
}
#else
void memcpy(uint8_t *des, uint8_t *src, int n) {

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

void memset0(uint8_t *dest, int n) {

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

#endif


void timer2_init() {
	//timerMSB = 0;
	timer2_msb = 0;
	T2CON = 0x60;
	TF2 = 0;
	TMR2 = 0;
	ET2 = 1;
	T2CON = 0x62;
}

// TH2 TL2
uint32_t get_time() {
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
void timeout2_start(uint8_t timer_index, uint32_t duration) {
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
uint8_t timeout2_check(uint8_t timer_index) {
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
void timeout2_stop(uint8_t timer_index) {
	uint32_t time = timer2_check(timer_index);
	if(timeout2_running(timer_index)){
		timeout2_timers[timer_index].duration = 0;
	
		//reg_MCU_DEBUG4_LANE_7_0 = time&0xff;
		//reg_MCU_DEBUG5_LANE_7_0 = time>>8&0xff;
		//reg_MCU_DEBUG6_LANE_7_0 = time>>16&0xff;
		#if 0
		switch(timer_index){
		case DFE_POWER_SAVING_TIMER:
			lnx_MCU_RESERVEDX00_LANE_7_0 = time&0xff;
			lnx_MCU_RESERVEDX01_LANE_7_0 = time>>8&0xff;
			lnx_MCU_RESERVEDX02_LANE_7_0 = time>>16&0xff;
			lnx_MCU_RESERVEDX03_LANE_7_0 = time>>24&0xff;
			break;
		}
		#endif
	}
}

uint32_t timer2_check(uint8_t timer_index) {
	uint32_t time = get_time();
	return time-timeout2_timers[timer_index].start_time;
}

