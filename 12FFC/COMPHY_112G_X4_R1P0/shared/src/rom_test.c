#include "common.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

void rom_test1(uint8_t i) BANKING_CTRL  {

	reg_MCU_DEBUG5_LANE_7_0 = i;
	return;
}
uint8_t rom_test2(uint8_t i) BANKING_CTRL  {

	reg_MCU_DEBUG5_LANE_7_0 = i;
	return(i+1);
}
