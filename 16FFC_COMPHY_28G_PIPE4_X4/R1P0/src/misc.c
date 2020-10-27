/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file misc.c
* \purpose Miscellaneous functions
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifdef SUPPORT_MCU_FREQ
//mcuclk_mc=MCU_FREQ/15,  N*0.1uSec timer=65535-(mcuclk_mc*t/8) 
void delay(int16_t t) //0.1us unit
{
	register int16_t a;	
	if(t<3) return;
	a = (int16_t)(mcuclk_mc*t);	
	a += 4; a >>= 3;
	if(a<=5) return;
	a = -a;
	
if(BYPASS_DELAY == 0) {
   TMR0 = a+2;  //a+compensation

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
#else
//MC=400M/12=33.3MHz,  NuSec timer=65535-(33*N)    
//MC=450M/12=37.5MHz,  NuSec timer=65535-(38*N)   (ex)1uSec=65535-38=65497(0xffd9) 
//MC=500M/12=41MHz,  NuSec timer=65535-(41*N)   (ex)1uSec=65535-41=65497(0xffd7) 
void delay(int16_t a)
{

if(BYPASS_DELAY == 0) {
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
#endif

void short_delay(void) { //200nS
	__asm
		nop
		nop		
		nop
		nop		
	__endasm;	
}

void short_delay_0(void) {
	//doen't do anything.
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

// Patter matching - 3 toggles in 6 consecutive steps.
// NOTE: If the first sample is 1, this should not count as a toggle
__code uint8_t toggle_pat_tb[] = {
		0x05, //000101
		0x09, //001001
		0x19, //011001
		0x11, //010001
		0x3a, //111010
		0x36, //110110
		0x26, //100110
		0x2e //101110
};
BIT is_toggle_pat( uint8_t val ) {
	uint8_t i;
	for ( i=0; i<8; i++ ) {
		if ( toggle_pat_tb[i] == val )
			return 1;
	}
	return 0;
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
	EA = 0;
	
	DMASEL = DMA0; 
	DMAM0 = 0x66; //01100110
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMASA = (uint16_t)src;
	DMATA = (uint16_t)des;
	DMAC = n - 1;
	DMASEL = 0x80; 
	while(DMASEL&0x80);

	EA = 1;
}

void memset0(uint8_t *dest, int n) {

	EA = 0;
	
	DMASEL = DMA1; 
	DMAM0 = 0x64; //10100100
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMASA = (uint16_t)&DFE_CONTROL_2;
	DMATA = (uint16_t)dest;
	DMAC = n - 1;
	DMASEL = 0x81; 
	while(DMASEL&0x80);
	
	EA = 1;
}
#endif

union uu {
	struct {
		uint8_t lo,hi ;
	} s;
	unsigned int val;
} ;


uint16_t u16mul (uint16_t a, uint16_t b) 
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

uint16_t u16div(uint16_t x, uint16_t y) 
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




