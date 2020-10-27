/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file uart.c
* \purpose 
* \History
*	11/21/2015 Heejeong Ryu		Initial 
*/
#include "common.h"
#include <stdarg.h>
#include "ver.h"

/****************************************
 -- UART Functions
****************************************/
#ifdef _LAB

void uart_tx(uint8_t tx_buf)
{
   while(uart_rx_busy);

   ES = 0;
   SBUF = tx_buf;
   uart_rx_busy = 1;
   ES = 1;
}
uint8_t uart_rx(void)
{
   uint8_t ret;

   ES = 0;

   ret = uart_rx_buf[uart_rx_out];
   uart_rx_out++;
   if(uart_rx_out >= UART_RX_BUF_MAX)
       uart_rx_out = 0;
   ES = 1;
   
   return ret;
}

bool uart_rx_ready(void)
{
   if(uart_rx_in == uart_rx_out) return 0;
   else return 1;
}

void putchar(uint8_t x){
    SBUF = x;  while(!TI); TI = 0;
}

void Puts(char* s){
    while(*s!=0) // \0
        uart_tx(*s++);      
}

void uart_monitor(void)
{
	uint8_t ch;
	
	if( !uart_rx_ready() ) return;
	ch = uart_rx();
	
	switch( ch ) {
		case 'v':
			DBG_Printf("\r\n MCUPhy Firmware Version %0d.%0d.%0d.%0d",MAJOR_VER,MINOR_VER,PATCH_VER,BUILD_VER);
			DBG_Printf("\tBuilt: %s-%s\n\r",__DATE__, __TIME__);
			break;
		default: 
			break;	
	}
	Prompt();
}

#endif