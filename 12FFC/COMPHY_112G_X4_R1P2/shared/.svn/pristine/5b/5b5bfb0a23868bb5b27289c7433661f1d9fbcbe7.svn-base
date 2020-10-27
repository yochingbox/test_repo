/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file misc3.c
* \purpose Miscellaneous functions
* \History
*	10/13/2015 Heejeong Ryu		Initial 
* If a function is placed here for memory reasons, please specify the file it supposed to be in.
*/
#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

// must put this function in bank3!
uint16_t get_program_memory_bank3(uint16_t addr) BANKING_CTRL{
	__asm
	clr 	a
	movc	a,@a+dptr
	mov		r1,a
	
	mov		a,#0x01
	movc	a,@a+dptr
	mov		r2,a
	
	// output
	mov		dpl,r1
	mov		dph,r2
	__endasm;
}

#ifdef _12FFC_COMPHY_112G_X4_R1P2
#endif //!_12FFC_COMPHY_112G_X4_R1P2

