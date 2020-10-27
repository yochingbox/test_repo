/*******************************sT***********************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file tsen_adc.c
* \purpose Miscellaneous functions
* \History
*	08/28/2020 Yan Zhang    Seperated from misc.c 
*/
#include "common.h"


/**
 * \module Read TSEN
 *
 * \param
 *    <NONE>
 * \return
 *    <NONE>
 * \note  Used TSensor continue measure mode:
 *        TSEN_ADC_CAL[1:0] = 2'b10: Automatic self-offset-cal enforced, TSENE_ADC in normal mode
*/

#define TSEN_FACTOR     1000
#define TSEN_GAIN       93
#define TSEN_OFFSET     114500
int32_t tsen_data_to_temp(uint8_t data_b1, uint8_t data_b0) {
	int16_t data;
    	
	data = (((uint16_t)data_b1) << 8) + data_b0;
	data = data << (16 - 12);
	data = data >> (16 - 12);

	if(data==0 && reg_TSEN_ADC_RDY==0) data = -75;

	#ifdef _LAB
	//if(PHY_STATUS>ST_POSEQ) {
	//	DBG_Printf("\r\ntemp=%d", data);
	//}
	#endif

	// T(celsius) = data * tsene_gain + tsene_offset
	return ((int32_t)data * TSEN_GAIN + TSEN_OFFSET) / TSEN_FACTOR;
}

void tsen_data_test() {
	int8_t temp_cel[]	= { -40,	-20,	0,	20,	40,	60,	80,	100,	120	};
	int16_t temp_data[]	= { -1653,	-1446,	-1237,	-1028,	-809,	-594,	-376,	-156,	63	};	
	int i;

	reg_MCU_DEBUG0_LANE_7_0 = 0xBE;
	for (i = 0; i < 9; i++) {
		reg_MCU_DEBUG0_LANE_7_0 = temp_cel[i];
		reg_MCU_DEBUG1_LANE_7_0 = (uint8_t)tsen_data_to_temp((uint8_t)(temp_data[i] >> 8), (uint8_t)(temp_data[i] & 0xFF));	
	}
	reg_MCU_DEBUG0_LANE_7_0 = 0xED;

}

#define TSEN_TEST_CLI_CODE 0x13
void wait_tsen_rdy(void) {
	#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	if(reg_PWRON_SEQ_LANE &&  BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
	#else
	if(reg_PWRON_SEQ_TX_LANE && reg_PWRON_SEQ_RX_LANE && BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
	#endif
		while(reg_TSEN_ADC_RDY==0);
	}

	if (lnx_CLI_CMD_LANE_7_0 == TSEN_TEST_CLI_CODE) while(reg_TSEN_ADC_RDY == 0);
}

void tsen_config(void) {
	reg_TSEN_ADC_MODE_1_0   = 0;    // Internal sensor
	reg_TSEN_ADC_OSR_1_0    = 2;    // Over Sample Rate (OSR) Select; 11b: OSR = 256
	reg_TSEN_ADC_CAL_1_0    = 2;    // Automatic self-offset-cal enforced, TSENE_ADC in normal mode
	reg_TSEN_ADC_AVG_BYPASS	= 1;	// Disable average mode for tsen reading 
}

void tsen_on(void) {
	// Disale and reset tsen
	reg_ANA_TSEN_ADC_EN     = 0;
	reg_ANA_TSEN_ADC_RESET  = 1;
	delay(T_20us);

	tsen_config();
	
	// Pull up req lines to release data register
	#ifdef reg_TSEN_ADC_RD_LANE_REQ_CH0
	reg_TSEN_ADC_RD_LANE_REQ_CH0    = 1;
	reg_TSEN_ADC_RD_LANE_REQ_CH1    = 1;
	reg_TSEN_ADC_RD_LANE_REQ_CH2    = 1;
	reg_TSEN_ADC_RD_LANE_REQ_CH3    = 1;
	#endif
	reg_TSEN_ADC_RD_REQ             = 1;


	// Disable reset and reenable tesn
	reg_ANA_TSEN_ADC_RESET  = 0;
	reg_ANA_TSEN_ADC_EN     = 1;
	delay(T_100us);
	delay(T_32us);
	reg_ANA_TSEN_ADC_START  = 1;

	// Wait until tsen finish self-offset calibration and ready
	wait_tsen_rdy();
}


int8_t read_tsen(void)  {
	uint8_t data_15_0_b1, data_15_0_b0;
	int32_t temp_cel;

	wait_tsen_rdy();

	// reg_MCU_DEBUG2_LANE_7_0 = 0x01;
	data_15_0_b1 = reg_TSEN_ADC_DATA_15_0_b1;
	data_15_0_b0 = reg_TSEN_ADC_DATA_15_0_b0;

	if (data_15_0_b1 != reg_TSEN_ADC_DATA_15_0_b1 || data_15_0_b0 != reg_TSEN_ADC_DATA_15_0_b0) {
 		// reg_MCU_DEBUG2_LANE_7_0 = 0xFF; 
		data_15_0_b1 = reg_TSEN_ADC_DATA_15_0_b1;
		data_15_0_b0 = reg_TSEN_ADC_DATA_15_0_b0;
	}
	
	reg_MCU_DEBUG0_LANE_7_0 = data_15_0_b0;
	reg_MCU_DEBUG1_LANE_7_0 = data_15_0_b1;
	// reg_MCU_DEBUG2_LANE_7_0 = 0x00;

	temp_cel = tsen_data_to_temp(data_15_0_b1, data_15_0_b0);
	cmx_TEMP_RD_2C_7_0 = (uint8_t)temp_cel;
	cmx_TEMP_RDY = 1;
	return (int16_t)temp_cel;
}

void tsen_adc_ctrl_run(void) BANKING_CTRL{
	int8_t i;

	reg_MCU_DEBUG0_LANE_7_0 = 0xBE;
	tsen_data_test();
	for (i = 0; i < 4; i++) read_tsen();
	reg_MCU_DEBUG0_LANE_7_0 = 0xED;
} 

