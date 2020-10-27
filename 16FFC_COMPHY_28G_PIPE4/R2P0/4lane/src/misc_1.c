/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file misc.c
* \purpose Miscellaneous functions
* \History
*	10/5/2017 Heejeong Ryu		Initial 
*/
#include "common.h"

/*
 *  delay01()
 *    t - one unit equal to 1/10 uSec. I.e. to delay 1usec, t = 10.
 *
 *  delay01 uses timer0 to setup the delay. The timer frequency is 1/12th of the MCU frequency.
 *  For the delay of t, the time delay, a = t/10*MCU_frequency/12 = t*MCU_frequency/(2*5 * 2*2*3)
 *  mcuclk_mc = MCU_frequency / 15
 *  so we have a = t * mcuclk_mc / 8
 */
void delay01(int16_t t) {
	register int16_t a;
	int16_t i;

	if (t < 3) {
		// just to get here, it takes more than 200ns, so just return if the delay is less than 300ns.
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
	
	if(BYPASS_DELAY == 0) {
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

void short_delay(void) { //100nS @400MHz
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

void short_delay_0(void) {
	//doesn't do anything.
}

int8_t max(int8_t a, int8_t b){
    return a>b?a:b;
}

int8_t min(int8_t a, int8_t b){
    return a<b?a:b;
}

int8_t clamp(int8_t a, int8_t ub, int8_t db){
    return a<db?db:a>ub?ub:a;
}

uint8_t clamp_u8(uint8_t a, uint8_t ub, uint8_t db){
    //assert ub>db
	//Printf("\r\n ++(clamp_u8): %d %d %d", a, ub, db);
    return a<db?db:a>ub?ub:a;
}

int16_t clamp16(int16_t a, int16_t ub, int16_t db){
    return a<db?db:a>ub?ub:a;
}

int8_t abs(int8_t a){
    return a>=0?a:-a;
}

int16_t abs16(int16_t a){
    return a>=0?a:-a;
}

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

uint8_t conv_thermo_2_bi(uint8_t val) {
	uint8_t index = 0;
	
	while(val!=0) {
		val >>= 1; index++;
	}
	return index;
}
