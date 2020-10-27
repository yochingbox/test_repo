#ifndef COMMON_H
#define COMMON_H

#include <compiler.h>
#include "sfr_r8051.h"

typedef unsigned char uint8_t;
typedef unsigned int  uint16_t;
typedef unsigned long uint32_t;
typedef signed char   int8_t;
typedef signed int    int16_t;
typedef signed long   int32_t;
typedef unsigned char bool;
typedef __bit           BIT;

//#include "config.h"
#include "phy_reg_c_mcu_cmn.h" 
#include "phy_reg_c_mcu_lane.h"
#include "phy_reg_c_rx_lane.h"
#include "phy_reg_c_xdat_cmn.h"
#include "phy_reg_c_xdat_lane.h" 

#include "global.h"
#include "bank_func_b_list.h"
	
/****************************************
 * Function Declaration
*****************************************/
	void Printf(const char *fmt, ... );
    void Puts(char*);
    void RS_tx(uint8_t tx_buf);
    uint8_t RS_rx(void);
    uint8_t RS_ready(void);
	void uart_monitor(void);

#endif //COMMON_H
