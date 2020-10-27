#include "common.h"
#include "ver.h"

#ifndef GLOBAL_H
#define GLOBAL_H

//extern uint8_t tmp;
extern BIT timeout;
extern BIT uart_rx_busy;

extern __xdata uint8_t uart_rx_in;
extern __xdata uint8_t uart_rx_out;
extern __xdata uint8_t uart_rx_buf[];



#endif
