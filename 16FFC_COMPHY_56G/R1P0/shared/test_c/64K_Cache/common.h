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
	
/****************************************
 * Function Declaration
*****************************************/
	void Printf(const char *fmt, ... );
    void Puts(char*);
    void RS_tx(uint8_t tx_buf);
    uint8_t RS_rx(void);
    uint8_t RS_ready(void);
	void uart_monitor(void);

#include "func_b_0.h"
#include "func_b_1.h"
#include "func_b_2.h"
#include "func_b_3.h"
#include "func_b_4.h"
#include "func_b_5.h"
#include "func_b_6.h"
#include "func_b_7.h"
#include "func_b_8.h"
#include "func_b_9.h"
#include "func_b_10.h"
#include "func_b_11.h"
#include "func_b_12.h"
#include "func_b_13.h"
#include "func_b_14.h"
#include "func_b_15.h"
#include "func_b_16.h"
#include "func_b_17.h"
#include "func_b_18.h"
#include "func_b_19.h"
#include "func_b_20.h"
#include "func_b_21.h"
#include "func_b_22.h"
#include "func_b_23.h"
#include "func_b_24.h"
#include "func_b_25.h"
#include "func_b_26.h"
#include "func_b_27.h"
#include "func_b_28.h"
#include "func_b_29.h"
#include "func_b_30.h"
#include "func_b_31.h"



#endif //COMMON_H
