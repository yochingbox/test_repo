/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cpu.c
* \purpose cpu initialize
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

void cpu_init(void) {

    CKCON = 0x00; 
    TCON  = 0x05; //EX0/EX1=FALL   
	if(mcuid ==	MCU_CMN) {
		TMOD = 0x61; //timer1 : mode2, ct1		
		TH1 = 0xfe;	
		TL1 = 0xfe;	
	}	
	else TMOD  = 0x51; //mode1, ct1 

    // -- Configure Serial Port
	#ifdef _LAB
	// MODE1, baud rate = 2^SMOD * Fclk / (64 * (2^10 - s0rel)) = 57600 bps
	PCON = 0x88; //SMOD=1
	ADCON = 0x80;
	SCON = 0x50; //0101_0000  mode 1: 8-bit 1start/1Stop
	S0RELH = 0x03;
	S0RELL = 0xe5; //0x93;
	#endif
	
    // -- Configure IRQ
	IP0   = 0x1c; 
	IP1   = 0x06;
    ET1   = 1;
	ET2   = 0;//1;
    EX0   = 1;
    EX1   = 1;
    IEN1  = 0x3f; //EX6|5|4|3|2|7=1
	T2CON = 0x60;//0x78 //EX2/EX3:RISE, (Timer2)
	IEN2  = 0x3e; //EX12|11|10|9|8=1
	CCEN = 0;

	#ifdef _LAB
	if(mcuid != MCU_CMN) {
		ES = 1; 
		uart_rx_busy = 0;
		uart_rx_in = 0;
		uart_rx_out = 0;
	}
	#endif
	
	do_train = 0;
	do_rxtrain = 0;
	timeout = 1;
	timeout2 = 1;
	cont_cal_on = 0;
	tsen_check = 0;

}

