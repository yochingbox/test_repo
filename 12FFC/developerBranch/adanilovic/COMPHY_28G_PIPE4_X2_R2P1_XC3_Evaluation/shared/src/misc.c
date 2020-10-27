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
    reg_MCU_DEBUG1_LANE_7_0 = 0x80;

	for(i=0; i<n; i++) {
		*des++ = *src++;
	}	
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;
}

void memset0_sw(uint8_t *dest, int n) {
	int i;
    reg_MCU_DEBUG1_LANE_7_0 = 0x81;
	
	for(i=0; i<n; i++) {
		dest[i] = 0;
	}	
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;
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

