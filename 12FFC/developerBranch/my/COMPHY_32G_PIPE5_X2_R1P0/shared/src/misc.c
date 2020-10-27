/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file misc.c
* \purpose Miscellaneous functions
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifndef USE_DMA_DFE
void memcpy_sw(uint8_t *des, uint8_t *src, int n) {
	int i;

	for(i=0; i<n; i++) {
		*des++ = *src++;
	}	
}

void memset0_sw(uint8_t *dest, int n) {
	int i;
	
	for(i=0; i<n; i++) {
		dest[i] = 0;
	}	
}
#endif

/********************************************************************************/
/* The function to filter out fractional noise in the calibration indicator.    */
/* parameters:	cnt, the address of the accumulator for a specific calibration; */
/*				cal_out: the calibration output;  							    */
/*				step_size: the step to update the dac.						    */
/********************************************************************************/
/* not used
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
*/

union uu {
	struct {
		uint8_t lo,hi ;
	} s;
	unsigned int val;
} ;

uint16_t u16mul_ram(uint16_t a, uint16_t b) //BANKING_CTRL
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

//void short_delay_ram(void) BANKING_CTRL { //100nS @400MHz
void short_delay_ram(void) { //100nS @400MHz
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

//int8_t max_ram(int8_t a, int8_t b) BANKING_CTRL{
int8_t max_ram(int8_t a, int8_t b) {
    return a>b?a:b;
}

//int8_t min_ram(int8_t a, int8_t b) BANKING_CTRL{
int8_t min_ram(int8_t a, int8_t b) {
    return a<b?a:b;
}

