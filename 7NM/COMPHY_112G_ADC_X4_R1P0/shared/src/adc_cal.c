/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file adc_cal.c
* \purpose ADC calibration
* \History
*	08/08/2019 Minh Tran		Initial 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

#ifdef SUPPORT_ADC_CAL

/**
 * \module ADC_CAL Top
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
 */
void adc_cal(void) BANKING_CTRL {

	if (cmx_ADC_CAL_EXT_EN) {
		lnx_ADC_CAL_DONE_LANE = 1;
		return;
	}

	PHY_STATUS = ST_ADC_CAL;

	lnx_ADC_CAL_DONE_LANE = 0;
	lnx_ADC_CAL_PASS_LANE = 0;

	drv_adc_cal(ADC_CAL_SINGLE_GAO);

	// TODO - save calibration results

	lnx_ADC_CAL_DONE_LANE = 1;
}

void adc_cal_cont(void) BANKING_CTRL {

	if (cmx_ADC_CAL_CONT_EN == 0) {
		return;
	}

	PHY_STATUS = ST_ADC_CAL_CONT;

	drv_adc_cal(ADC_CAL_CONT_GAO);
	drv_adc_cal(ADC_CAL_CONT_SKEW);
}


/*
 * ADC T/H output common mode calibration
 * target of this calibration is make sure that T/H output CM is greater than calibration voltage (default 550mV)
 * But plan to add temperature based table
 */
void adc_cmn_mode_cal(void) BANKING_CTRL {

	int16_t v_th_cm;

	if (cmx_ADC_CMN_MODE_CAL_EXT_EN) {
		lnx_ADC_CMN_MODE_CAL_DONE_LANE = 1;
		return;
	}

	PHY_STATUS = ST_ADC_CMN_MODE_CAL;

	lnx_ADC_CMN_MODE_CAL_DONE_LANE = 0;
	lnx_ADC_CMN_MODE_CAL_PASS_LANE = 0;

	reg_RX_TH_CMSEL_LANE_1_0 = 0; 
	while((reg_MCU_DEBUGA_LANE_7_0=0x1)&&reg_RX_TH_CMSEL_LANE_1_0 < 3) { //For RX_TH_CMSEL < 3
		//Measure TH_CM voltage test point (need to get test point setting for measurement)
		reg_RX_ADC_RSV_LANE_7_0 |= 0x02; // RX_ADC_RSV_LANE[1]=1; enables the source follower for CM measurement
		reg_RX_ADC_TEST_EN_LANE = 1; // ENABLE ADC test path
		reg_RX_ADC_TEST_SEL_LANE_7_0 = 9; // set test selection to 9 decimal
		reg_RX_TEST_EN_LANE = 1; // enable RX test path.
		delay(T_2us); // Wait 2us to allow for CM to settle.
		v_th_cm = read_tsen(0); // 0 - voltage read; 1 - temperature read
		if (v_th_cm > 550) // If TH_CM voltage is > value based on temperature table (550mV for now)
			break; //exit loop
		else reg_RX_TH_CMSEL_LANE_1_0++; // Else increment lane_i.RX_TH_CMSEL_lane[1:0] 
	}
	reg_RX_ADC_RSV_LANE_7_0 &= 0xfd; // RX_ADC_RSV_LANE[1]=0; disables the source follower for CM measurement
	reg_RX_ADC_TEST_EN_LANE = 0; //disable test path
	reg_RX_ADC_TEST_SEL_LANE_7_0 = 0;  //return test selection to default setting
	reg_RX_TEST_EN_LANE = 0; // disable RX test path.


	// TODO - save calibration results

	lnx_ADC_CMN_MODE_CAL_DONE_LANE = 1;
}

__code int16_t adc_vdd_sel_tb[] = {1000, 950, 900, 850, 800, 750, 700, 650};

void adc_vddr_cal(void) BANKING_CTRL {

	int8_t updown;
	int16_t adc_vddr, vref_adc;

	if (cmx_ADC_VDDR_CAL_EXT_EN) {
		lnx_ADC_VDDR_CAL_DONE_LANE = 1;
		return;
	}

	PHY_STATUS = ST_ADC_VDDR_CAL;

	lnx_ADC_VDDR_CAL_DONE_LANE = 0;
	lnx_ADC_VDDR_CAL_PASS_LANE = 0;

	reg_RX_ADC_TEST_EN_LANE = 1; // ENABLE ADC test path
	reg_RX_ADC_TEST_SEL_LANE_7_0 = 3; // set test selection to 3 decimal
	reg_RX_TEST_EN_LANE = 1; // enable RX test path.

	//reg_RX_ADC_VDD_SEL_LANE_2_0 = Value from speed table for given data rate
	vref_adc = adc_vdd_sel_tb[reg_RX_ADC_VDD_SEL_LANE_2_0];
	updown = 0;
	while((reg_MCU_DEBUGA_LANE_7_0=0x2)&&1)
	{
		delay(T_2us); // Wait 2us to allow for ADC_VDD to settle
		adc_vddr = read_tsen(0); // 0 - voltage read; 1 - temperature read
		if (adc_vddr < (vref_adc - 25)) {
			if (updown == 2) break;
			reg_RX_ADC_VDD_SEL_LANE_2_0--; // increasing ADC VDDR
			updown = 1;
		} else if (adc_vddr > (vref_adc + 25)) {
			if (updown == 1) break;
			reg_RX_ADC_VDD_SEL_LANE_2_0++; // decreasing ADC VDDR
			updown = 2;
		} else break;
	}

	reg_RX_ADC_TEST_EN_LANE = 0; //disable test path
	reg_RX_ADC_TEST_SEL_LANE_7_0 = 0;  //return test selection to default setting
	reg_RX_TEST_EN_LANE = 0; // disable RX test path.

	// TODO - save calibration results

	lnx_ADC_VDDR_CAL_DONE_LANE = 1;
}

#endif // SUPPORT_ADC_CAL
