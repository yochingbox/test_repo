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
	TMOD  = 0x51; //mode1, ct1 

    // -- Configure Serial Port
	#ifdef _LAB
	// MODE1, baud rate = 2^SMOD * Fclk / (64 * (2^10 - s0rel)) = 57600 bps
	PCON = 0x88; //SMOD=1
	ADCON = 0x80;
	SCON = 0x50; //0101_0000  mode 1: 8-bit 1start/1Stop
	S0RELH = 0x03;
	S0RELL = 0x27; 
	#endif
	
    // -- Configure IRQ
	IP0   = 0x1c; 
	IP1   = 0x06;
    ET1   = 1;
	ET2   = 1;
    EX0   = 1;
    EX1   = 1;
    IEN1  = 0x3f; //EX6|5|4|3|2|7=1
	T2CON = 0x78;//x60; //EX2/EX3:RISE, (Timer2)
	IEN2  = 0x3e; //EX12|11|10|9|8=1
	CCEN = 0;

	#ifdef _LAB
	ES = 1; 
	uart_rx_busy = 0;
	uart_rx_in = 0;
	uart_rx_out = 0;
	#endif
	
	do_wake = 0;
	do_train = 0;
	do_rxtrain = 0;
	do_rxinit = 0;
	tx_init_bit = 0;
	train_comp = 0; 
	do_rx_apta = 0; do_tx_apta = 0;
	timeout = 1;
	timeout2 = 1;

}

