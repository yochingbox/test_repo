#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#ifdef SUPPORT_DFE_POWER_SAVING
void dfe_power_saving(void) BANKING_CTRL {

		int16_t temp_current;
//loop on: dfe_backon(); dfe_setoff(); wait_time;
//dfe_setoff() will do ONE DFE then turns off clock and error slices and enters power saving mode
//It takes about 3.5ms max for dfe_set0ff() to complete one DFE
//wait_time range: 256us, 512us, ... 256 * n us, ... 0xFF00 us 
//
//wait_time = 256 * lnx_DFE_POWER_SAVING_CLKOFF_TIME_15_8 = lnx_DFE_POWER_SAVING_CLKOFF_TIME_15_8 << 8
//
//lnx_DFE_POWER_SAVING_CLKOFF_TIME_15_8 = 0x00 (No power saving)
//lnx_DFE_POWER_SAVING_CLKOFF_TIME_15_8 = 0x0E (50% duty cycle)
//
//lnx_DFE_POWER_SAVING_TEMP_DELTA_29_24 = 0x05 (temp change threshold is 5 degree C)
//lnx_DFE_POWER_SAVING_TEMP_DFE_ON_TIME_7_0 = 0xff (when temp changes, do DFE for 0xff<<8 us ~65ms)

		//tsen_dat = read_tsen_ram();
		if (lnx_DFE_POWER_SAVING_CLKOFF_TIME_15_8!=0&&eom_ext_mode==0){

			temp_current = (((int32_t)read_tsen_ram()*394) + 128900 + 500)/1000;
			reg_MCU_DEBUG1_LANE_7_0 = temp_current;
			if((temp_current-lnx_DFE_POWER_SAVING_TEMP_PREVIOUS_23_16)>lnx_DFE_POWER_SAVING_TEMP_DELTA_29_24||(temp_current-lnx_DFE_POWER_SAVING_TEMP_PREVIOUS_23_16)<-lnx_DFE_POWER_SAVING_TEMP_DELTA_29_24) {
				lnx_DFE_POWER_SAVING_TEMP_PREVIOUS_23_16 = temp_current;
				timeout2_stop(DFE_POWER_SAVING_TIMER); 
				dfe_backon();
				timeout2_start(DFE_POWER_SAVING_TIMER,1+((uint32_t)lnx_DFE_POWER_SAVING_TEMP_DFE_ON_TIME_7_0<<8));
				lnx_DFE_POWER_SAVING_TEMP_CHANGED_FLAG = 1;
				reg_MCU_DEBUG0_LANE_7_0 = 0x55;
			}

			else if(((lnx_DFE_POWER_SAVING_DFE_OFF_FLAG==0)&&(lnx_DFE_POWER_SAVING_TEMP_CHANGED_FLAG==0))||((lnx_DFE_POWER_SAVING_DFE_OFF_FLAG==1)&&timeout2_check(DFE_POWER_SAVING_TIMER))){
				timeout2_stop(DFE_POWER_SAVING_TIMER);
				dfe_backon();
				dfe_setoff();
				timeout2_start(DFE_POWER_SAVING_TIMER, (uint32_t)lnx_DFE_POWER_SAVING_CLKOFF_TIME_15_8 << 8);
			//	reg_MCU_DEBUG0_LANE_7_0 = 0x66;
			}

			else if(timeout2_check(DFE_POWER_SAVING_TIMER)&&(lnx_DFE_POWER_SAVING_TEMP_CHANGED_FLAG==1)){
				timeout2_stop(DFE_POWER_SAVING_TIMER);
				dfe_setoff();
				lnx_DFE_POWER_SAVING_TEMP_CHANGED_FLAG = 0;
				reg_MCU_DEBUG0_LANE_7_0 = 0xaa;
			}
		
		}
		else {
//			timeout2_stop(DFE_POWER_SAVING_TIMER); 
			dfe_backon();
			reg_MCU_DEBUG0_LANE_7_0 = 0x88;
		}
}
#endif

