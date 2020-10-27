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

void tsen_config(void) {
	reg_TSEN_ADC_MODE_1_0   = 0;    // Internal sensor
	reg_TSEN_ADC_OSR_1_0    = 0;    // Over Sample Rate (OSR) Select; 11b: OSR = 256
        /*reg_TSEN_ADC_MODE_1_0   = 1;    // Continuous mode*/
	reg_TSEN_ADC_CAL_1_0    = 0;    // Automatic self-offset-cal enforced, TSENE_ADC in normal mode
}

void tsen_on(void) {
	// Disale and reset tsen
	reg_ANA_TSEN_ADC_EN     = 0;
	reg_ANA_TSEN_ADC_RESET  = 0;
	delay(T_20us);
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
	delay(T_20us);
	delay(T_20us);
	reg_ANA_TSEN_ADC_START  = 1;

	// Wait until tsen finish self-offset calibration and ready
	while(reg_TSEN_ADC_RDY==0);
}


int8_t read_tsen(void)  {
	uint8_t data_15_0_b1, data_15_0_b0;
	uint16_t data_holder;
	int16_t data;
	int32_t temp_cel;

	// Wait if cmn mcu haven't done initializing tsen ?
	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.
#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	if(reg_PWRON_SEQ_LANE &&  BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
#else
	if(reg_PWRON_SEQ_TX_LANE && reg_PWRON_SEQ_RX_LANE && BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
#endif
		while(reg_TSEN_ADC_RDY==0);
	}

	// Pull down req lines to freeze data register while reading
	#ifdef reg_TSEN_ADC_RD_LANE_REQ_CH0
	if(mcuid == MCU_LANE0) reg_TSEN_ADC_RD_LANE_REQ_CH0 = 0;
	else if(mcuid == MCU_LANE1) reg_TSEN_ADC_RD_LANE_REQ_CH1 = 0;
	else if(mcuid == MCU_LANE2) reg_TSEN_ADC_RD_LANE_REQ_CH2 = 0;
	else if(mcuid == MCU_LANE3) reg_TSEN_ADC_RD_LANE_REQ_CH3 = 0;
	else if(mcuid == MCU_CMN) reg_TSEN_ADC_RD_REQ = 0;
	#else
	reg_TSEN_ADC_RD_REQ = 0;
	#endif

	data_15_0_b1 = reg_TSEN_ADC_DATA_15_0_b1;
	data_15_0_b0 = reg_TSEN_ADC_DATA_15_0_b0;

	// Pull up req lines to release data register
	#ifdef reg_TSEN_ADC_RD_LANE_REQ_CH0	
	if(mcuid == MCU_LANE0) reg_TSEN_ADC_RD_LANE_REQ_CH0 = 1;
	else if(mcuid == MCU_LANE1) reg_TSEN_ADC_RD_LANE_REQ_CH1 = 1;
	else if(mcuid == MCU_LANE2) reg_TSEN_ADC_RD_LANE_REQ_CH2 = 1;
	else if(mcuid == MCU_LANE3) reg_TSEN_ADC_RD_LANE_REQ_CH3 = 1;
	else if(mcuid == MCU_CMN) reg_TSEN_ADC_RD_REQ = 1;
	#else
	reg_TSEN_ADC_RD_REQ = 0;
	#endif

	reg_MCU_DEBUG0_LANE_7_0 = data_15_0_b0;
	reg_MCU_DEBUG1_LANE_7_0 = data_15_0_b1;

	data_holder = ((uint16_t)data_15_0_b1) << 8 + data_15_0_b0;
	data = (int16_t)(data_holder << 4) >> 4;

	if(data==0 && reg_TSEN_ADC_RDY==0) data = -75;

	#ifdef _LAB
	//if(PHY_STATUS>ST_POSEQ) {
	//	DBG_Printf("\r\ntemp=%d", dat);
	//}
	#endif

	// T(celsius)   = data * tsene_gain + tsene_offset
	// tsene_gain   = 0.093 
	// tsene_offset = 114.5
	temp_cel = ((int32_t)data * 93 + 114500) / 1000;
	cmx_TEMP_RD_2C_7_0 = (uint8_t)temp_cel;
	cmx_TEMP_RDY = 1;
	return (int16_t)temp_cel;
}

void tsen_adc_ctrl_run(void) BANKING_CTRL{
	int8_t i;
	for (i = 0; i < 20; i++) read_tsen();
} 

