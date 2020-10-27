/*! 
 \file  printf.c
 
 \brief
    
 
 \date
    12/11/2013
    
 \par Description: 
     
     
 \author Heejeong Ryu  <hryu@marvell.com> Copyright(c) 2013 Marvell, Santa Clara USA.   
 */
#include "common.h"
#include <stdarg.h>

#ifdef _LAB
#define _outch(c) uart_tx(c) 

__code uint8_t Hex[] = "0123456789ABCDEF";
   
void Parse( const char *fmt, va_list ap )
{
#if 1
	char  ch, i;
	long  value = 0;
	BIT   fl_zero;
	unsigned char  fl_len;
	unsigned char  cnt, out_cnt;
	unsigned long  mask=1;
	char *ptr;

	out_cnt = 255;
	while(out_cnt-->0) {
		
		switch( ch = *fmt++ ) {
			case 0:		return;
			case '%':	if( *fmt != '%' ) break;
					fmt++;
			default:	_outch( ch );
					continue;
		}

		fl_zero = 0;
		cnt = 0;
		ch = *fmt++;

		if( ch=='0' ) {
			fl_zero = 1;
			ch = *fmt++;
			cnt = ch - '0';
			ch = *fmt++;
		}
		else if( ch>='0' && ch<='9' ) {
			cnt = ch - '0';
			ch = *fmt++;
		}

		fl_len = 2;

		switch(ch) {
		case 'l':
		case 'L':	ch = *fmt++;	fl_len = 4;	break;
		case 'b':
		case 'B':	ch = *fmt++;	fl_len = 1;	break;
		}		

		switch( ch ) {

			case 'd':
			case 'u':

				switch (fl_len) {
				case 1:
					if( ch=='d' ) value = (char)va_arg( ap, char );
					else          value = (uint8_t)va_arg( ap, uint8_t );
					break;

				case 2:
					if( ch=='d' ) value = (int)va_arg( ap,  int );
					else          value = (uint16_t)va_arg( ap, uint16_t );
					break;

				case 4:
					if( ch=='d' ) value = (long)va_arg( ap, long );
					else          value = (uint32_t)va_arg( ap, uint32_t );
					break;
				}

				if( value<0 ) {
					_outch('-');
					value = value*(-1);
				}

				if(cnt==0) {
					if( value==0 ) { _outch('0'); continue; }

					for(cnt=0, mask=1; cnt<10; cnt++) {
						if( (value/mask)==0 ) break;
						mask = mask*10;
					}
				}

				for(i=0, mask=1; i<cnt-1; i++) mask = mask*10;

				while(1) {
					ch = (value / mask) + '0';
					if( ch=='0' && fl_zero==0 && mask!=1 ) ch=' ';
					else fl_zero = 1;
					_outch(ch);

					value = value % (mask);
					mask = mask / 10;
					
					if( mask==0 )
						break;
				}
				continue;

			case 'x':
				switch (fl_len) {
				case 1:	value = (uint8_t)va_arg( ap, uint8_t );	break;
				case 2:	value = (uint16_t)va_arg( ap, uint16_t );break;
				case 4:	value = (uint32_t)va_arg( ap, uint32_t );break;
				}

				if(cnt==0) cnt = fl_len*2;

				for(i=0; i<cnt; i++) {
					_outch( Hex[(value >> (cnt-i-1)*4) & 0x000f] );
				}
				continue;
			
			case 's':

				ptr = (char *)va_arg( ap, char* );
				while(*ptr!='\0')
					_outch(*ptr++);
				continue;

			//case 'c':
			//	value = va_arg( ap, char );
			//		_outch((uint8_t)value);
			//	continue;

			default:
				value = (uint16_t)va_arg( ap, int );
				continue;
		}
	}
	#endif
}
void Printf(const char *fmt, ... )
{	
  va_list ap;
	if(lnx_UART_EN_LANE==0) return; //TODO
  va_start(ap, fmt);
  Parse( fmt, ap);
  va_end(ap);
}
#endif

