/******************************************************************
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

/********************************************************************************/
/* The function to filter out fractional noise in the calibration indicator.    */
/* parameters:	cnt, the address of the accumulator for a specific calibration; */
/*				cal_out: the calibration output;  							    */
/*				step_size: the step to update the dac.						    */
/********************************************************************************/
uint8_t fractional_noise_filter(uint8_t * cnt, uint8_t cal_out, uint8_t step_size){

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
}

uint8_t conv_thermo_2_bi(uint8_t val) {
	uint8_t index = 0;
	
	while(val!=0) {
		val >>= 1; index++;
	}
	return index;
}
