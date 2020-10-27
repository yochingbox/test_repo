/*******************************sT***********************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file tsen_adc.c
* \purpose Driver for TSEN_ADC r2p0 http://ipdoc.marvell.com/ceips/ProPhys.php?projrev=S668186/R2.0
* \History
*   09/21/2020 Yan Zhang    Add support to adc mode
*   09/10/2020 Yan Zhang    Add support to tsen mode
*	08/28/2020 Yan Zhang    Seperated from misc.c 
*/
#include "common.h"


#define TEMP_MODE 1
#define ADC_MODE 0

#ifdef _112G_ADC
#define SUPPORT_ADC_MODE
#endif

void wait_tsen_rdy(void);
void tsen_config_temp(void);
void tsen_init_to_temp(void);
int16_t tsen_data_concatenate(uint8_t data_b1, uint8_t data_b0);
int16_t tsen_read_data(void);
int16_t tsen_data_to_temp(int16_t data);

#ifdef SUPPORT_ADC_MODE
void tsen_config_adc(void);
void tsen_mode_sw(bool mode);
int16_t tsen_data_to_vol(int16_t data);
#endif

/////////////////////////////////////
// TSEN_ADC Interface functions
/////////////////////////////////////
#ifdef _56G_5NM
void tsen_on(void) {
	tsen_init_to_temp();
	wait_for(reg_TSEN_ADC_RDY, 2000); // Zhendong asked FW to use timeout
}
int16_t read_tsen(void)  {
	int16_t data;
	int8_t value;

	// Wait for tsen finish self-offset calibration and ready
	#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0
	if(reg_PWRON_SEQ_LANE &&  BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
	#else
	if(reg_PWRON_SEQ_TX_LANE && reg_PWRON_SEQ_RX_LANE && BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
	#endif
		wait_tsen_rdy();
	}

	data = tsen_read_data();
	value = tsen_data_to_temp(data);
	
	cmx_TEMP_RD_2C_7_0 = (uint8_t)value;
	cmx_TEMP_RDY = 1;
	return value;
}
#endif //_56G_5NM

#ifdef _112G_ADC
void tsen_on(void) {
	tsen_init_to_temp();
}
int16_t read_tsen(bool mode) {
	int16_t data, value;

	wait_tsen_rdy();
	if (cur_tsen_mode != mode) {
		cur_tsen_mode = mode;
		tsen_mode_sw(mode);
	}
	wait_tsen_rdy();

	data = tsen_read_data();
	
	if (mode == TEMP_MODE) {
		value = (int16_t)tsen_data_to_temp(data);
	} else {
		value = tsen_data_to_vol(data);
	}
	return value;
}
#endif //_112G_ADC

////////////////////////////////////
// TSEN_ADC internal functions
///////////////////////////////////
void wait_tsen_rdy(void) {
	while(reg_TSEN_ADC_RDY == 0);
}

void tsen_config_temp(void) {
	reg_TSEN_ADC_MODE_1_0   = 0;    // Internal sensor
	reg_TSEN_ADC_OSR_1_0    = 2;    // Over Sample Rate (OSR) Select; 11b: OSR = 256
	reg_TSEN_ADC_CAL_1_0    = 2;    // Automatic self-offset-cal enforced, TSENE_ADC in normal mode
	reg_TSEN_CH_SEL_2_0		= 0;	// Force TSEN to use channel 0 for TEMP

}

// This funciont does not wait for tsen to be ready
void tsen_init_to_temp(void) {
	// Disale and reset tsen
	reg_ANA_TSEN_ADC_EN     = 0;
	reg_ANA_TSEN_ADC_START = 0;
	reg_ANA_TSEN_ADC_RESET  = 1;
	delay(T_20us);

	tsen_config_temp();
	
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
}

int16_t tsen_data_concatenate(uint8_t data_b1, uint8_t data_b0) {
	int16_t data;

	data_b1 &= 0x0F;    // Only lowest 4 bits of data_b1 is valid
	data = (((uint16_t)data_b1) << 8) + data_b0;

	// Correct the sign of the 12-bit signed data in the 16-bit space
	data = data << (16 - 12);
	data = data >> (16 - 12);

	return data;
}

int16_t tsen_read_data(void) {
	uint8_t data_b0, data_b1;
	int16_t data;

	data_b1 = reg_TSEN_ADC_DATA_15_0_b1;
	data_b0 = reg_TSEN_ADC_DATA_15_0_b0;

	delay(T_2us);

	if(data_b1 != reg_TSEN_ADC_DATA_15_0_b1 || data_b0 != reg_TSEN_ADC_DATA_15_0_b0) {
		delay(T_2us);
		data_b1 = reg_TSEN_ADC_DATA_15_0_b1;
		data_b0 = reg_TSEN_ADC_DATA_15_0_b0;
	}
	
	data = tsen_data_concatenate(data_b1, data_b0);
	return data;
}

// T(celsius) = data * tsene_gain + tsene_offset
#define TSEN_FACTOR     1000
#define TSEN_GAIN       93
#define TSEN_OFFSET     114500
int16_t tsen_data_to_temp(int16_t data) {
	int32_t temp = ((int32_t)data * TSEN_GAIN + TSEN_OFFSET) / TSEN_FACTOR;
	return (int16_t)temp;
}

////////////////////////////////////////
// Unit tests
////////////////////////////////////////
void test_tsen_data_read_temp() {
	int8_t test_value[]	= { -40,	-20,	0,      20,	    40,	    60,	    80,	    100,	120	};
	int16_t test_data[]	= { -1653,	-1446,	-1237,	-1028,	-809,	-594,	-376,	-156,	63	};	
	uint8_t data_b1, data_b0;
	int16_t data;
	int i;
	
	reg_MCU_DEBUG0_LANE_7_0 = 1;
	reg_MCU_DEBUG0_LANE_7_0 = 0xBE;
	for (i = 0; i < 9; i++) {
		data_b1 = (uint8_t)(test_data[i] >> 8) & 0x5F;
		data_b0 = (uint8_t)test_data[i];
		data = tsen_data_concatenate(data_b1, data_b0);
		reg_MCU_DEBUG0_LANE_7_0 = test_data[i] >> 8;
		reg_MCU_DEBUG1_LANE_7_0 = data_b1;
		reg_MCU_DEBUG2_LANE_7_0 = data >> 8;


		reg_MCU_DEBUG3_LANE_7_0 = test_value[i];
		reg_MCU_DEBUG4_LANE_7_0 = tsen_data_to_temp(data);
		reg_MCU_DEBUG5_LANE_7_0 = test_value[i] - tsen_data_to_temp(data);
	}
	reg_MCU_DEBUG0_LANE_7_0 = 1;
	reg_MCU_DEBUG0_LANE_7_0 = 0xED;
}

void test_read_tsen_data() {
	int16_t data;
	int8_t i;

	reg_MCU_DEBUG0_LANE_7_0 = 3;
	reg_MCU_DEBUG0_LANE_7_0 = 0xBE;
	for (i = 0; i < 4; i++) {
		data = tsen_read_data();
		reg_MCU_DEBUG1_LANE_7_0 = data >> 8;
		reg_MCU_DEBUG2_LANE_7_0 = data;
	}
	reg_MCU_DEBUG0_LANE_7_0 = 3;
	reg_MCU_DEBUG0_LANE_7_0 = 0xED;
}


////////////////////////////////////////
// ADC MODE Support runner
////////////////////////////////////////
#ifdef SUPPORT_ADC_MODE

void tsen_config_adc(void) {
	reg_TSEN_ADC_MODE_1_0 = 1;      // remote ADC input
	reg_TSEN_ADC_OSR_1_0 = 0;       // OSR = 64
	reg_TSEN_ADC_CAL_1_0    = 2;    // Automatic self-offset-cal enforced, TSENE_ADC in normal mode
	reg_ADC_CH_SEL_1_0		= 0;	// Force TSEN to use channel 0 for ADC
}

// This function does not wait for tsen to be ready
void tsen_mode_sw(bool mode){
	while(reg_TSEN_ADC_RDY == 0);
	delay(T_5us);
	reg_ANA_TSEN_ADC_EN = 0;
	reg_ANA_TSEN_ADC_START = 0;
	delay(T_5us);
	reg_ANA_TSEN_ADC_RESET = 1;
	delay(T_3us);
	reg_ANA_TSEN_ADC_RESET = 0;

	if (mode == TEMP_MODE) tsen_config_temp();
	else tsen_config_adc();
	delay(T_2us);

	reg_ANA_TSEN_ADC_EN = 1;
	reg_ANA_TSEN_ADC_START = 1;
}

// V(mV) = data * ADC_GAIN
#define ADC_FACTOR 100
#define ADC_GAIN -59
int16_t tsen_data_to_vol(int16_t data) {
	int32_t vol = (int32_t)data * ADC_GAIN / ADC_FACTOR;
	return (int16_t)vol;
}

void test_tsen_data_read_vol() {
	int8_t test_value[]	= { 900 	};
	int16_t test_data[]	= { -1526 	};	
	uint8_t data_b1, data_b0;
	int16_t data;
	int16_t value;
	int i;
	
	reg_MCU_DEBUG0_LANE_7_0 = 2;
	reg_MCU_DEBUG0_LANE_7_0 = 0xBE;
	for (i = 0; i < 1; i++) {
		data_b1 = (uint8_t)(test_data[i] >> 8) & 0x0F; // Use and arbitrary mask for 15~12 bits to emulate Z
		data_b0 = (uint8_t)test_data[i];
		data = tsen_data_concatenate(data_b1, data_b0);
		reg_MCU_DEBUG0_LANE_7_0 = test_data[i] >> 8;
		reg_MCU_DEBUG1_LANE_7_0 = data_b1;
		reg_MCU_DEBUG2_LANE_7_0 = data >> 8;


		reg_MCU_DEBUG3_LANE_7_0 = test_value[i] >> 8;
		reg_MCU_DEBUG4_LANE_7_0 = test_value[i];

		value = tsen_data_to_vol(data);
		reg_MCU_DEBUG5_LANE_7_0 = value >> 8;
		reg_MCU_DEBUG6_LANE_7_0 = value;
		reg_MCU_DEBUG7_LANE_7_0 = test_value[i] - value;
	}
	reg_MCU_DEBUG0_LANE_7_0 = 2;
	reg_MCU_DEBUG0_LANE_7_0 = 0xED;
}
#endif // SUPPORT_ADC_MODE


////////////////////////////////////////
// Test runner
////////////////////////////////////////
void tsen_adc_ctrl_run(void) {
	int16_t value;
	reg_TP_EN = 1;
	reg_MCU_DEBUG0_LANE_7_0 = 0;
	reg_MCU_DEBUG0_LANE_7_0 = 0xBE;
	
	test_tsen_data_read_temp();
	#ifdef SUPPORT_ADC_MODE
	test_tsen_data_read_vol();
	#endif
	
	if (reg_ANA_TSEN_ADC_RESET == 1 && mcuid == MCU_LANE0) tsen_on();
	wait_tsen_rdy();

	#ifdef _56G_5NM
	value = read_tsen();
	reg_MCU_DEBUG2_LANE_7_0 = value >> 8;
	reg_MCU_DEBUG3_LANE_7_0 = value;
	#endif // _56G_5NM

	#ifdef _112G_ADC
	value = read_tsen(TEMP_MODE);
	reg_MCU_DEBUG2_LANE_7_0 = value >> 8;
	reg_MCU_DEBUG3_LANE_7_0 = value;
	value = read_tsen(ADC_MODE);
	reg_MCU_DEBUG6_LANE_7_0 = value >> 8;
	reg_MCU_DEBUG7_LANE_7_0 = value;
	value = read_tsen(TEMP_MODE);
	reg_MCU_DEBUG4_LANE_7_0 = value >> 8;
	reg_MCU_DEBUG5_LANE_7_0 = value;
	#endif // _112G_ADC
	
	reg_MCU_DEBUG0_LANE_7_0 = 0;
	reg_MCU_DEBUG0_LANE_7_0 = 0xED;
}