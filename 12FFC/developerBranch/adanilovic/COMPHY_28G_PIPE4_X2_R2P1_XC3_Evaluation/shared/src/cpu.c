/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cpu.c
* \purpose cpu initialize
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
#include "interrupt.h"
#pragma constseg CSEG
void cpu_init(void) {

    TCON  = 0x05; //EX0/EX1=FALL   
	TMOD  = 0x51; //mode1, ct1 

    // -- Configure Serial Port
	#ifdef _LAB
	// MODE1, baud rate = 2^SMOD * Fclk / (64 * (2^10 - s0rel)) = 57600 bps
	PCON = 0x88; //SMOD=1
	ADCON = 0x80;
	SCON = 0x50; //0101_0000  mode 1: 8-bit 1start/1Stop
	
	#ifdef BPS57600
	S0RELH = 0x03; //57600 
	S0RELL = 0x27; 
	#else
	S0RELH = 0x03; //115200
	S0RELL = 0x93; 
	#endif
	#endif
	
    // -- Configure IRQ
	IPL0   = 0x18; 
	IPH0   = 0x02;
	IPL1   = 0x38; 
	IPH1   = 0x0c; 
	IPL2   = 0x0E;
	IPH2   = 0x03;
    ET1   = 1;
	ET2   = 1;
    EX0   = 1;
    EX1   = 1;
	ET0   = 0;
	//IEN0 = 0x2b; //0010 1101
	//IEN0 = 0x2d; //ET2|ET1|EX1|EX0 
    IEN1  = 0xFC; //EX6|5|4|3|2|7=1
    timer__timer2_init();
	IEN2  = 0x1F; //EX12|11|10|9|8=1
	//CCEN = 0; //compare/capture enable default=0 

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
	//tx_init_bit = 0;
	train_comp = 0;  
	do_rx_apta = 0; do_tx_apta = 0;
	timeout = 1;
	timeout2 = 1;
	tx_remote_ctrl_on = 0;
	//cont_cal_on = 0;
	ctrl_cdr_phase_on = 0;
	g_fw_flags = 0;
}

