/******************************************************************
 * 	        Marvell Semiconductor
 *******************************************************************
 * \file vdd_cal.c
 * \purpose VDD calibration
 * \History
 *	10/15/2015 Heejeong Ryu		Initial
 */
#include "common.h"

/**
 * \module VDD Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
 */
#define PROCESS_VALUE                           reg_ANA_PROCESS_VALUE_3_0
#define VREF_VDDACAL_SEL                        reg_VREF_VDDACAL_SEL_2_0
#define TRXDCCIN_SEL                            reg_TRXDCCIN_SEL_LANE_2_0
#define CAL_VDD_CONTINUOUS_MODE                 lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE 
#define SLEW_CTRL_EN                            reg_SLEWRATE_EN_LANE_1_0
#define tag_sellv_xx_default                    0x08
#define PU_TX                                   reg_ANA_PU_TX_LANE
#define PU_RX                                   reg_ANA_PU_RX_LANE
#define ANA_IDLE                                reg_PIN_TX_IDLE_RD_LANE
#define HIVDDR                                  reg_ANA_TRX_TXDCC_DN_RD_LANE
#define tag_MIN_VALUE                           0
#define tag_MAX_VALUE                           15
#define tag_MAX_RUN								32
#define SQ_OUT 									reg_ANA_RX_SQ_OUT_RD_LANE
#define rate 									pll_rate	//cmx_PLL_RATE_SEL_3_0
#define TXDCC_CLK 		 						reg_TRXDCC_CAL_CLK100KHZ_LANE

#ifdef SUPPORT_VDD_CAL
enum {
	SELLV_TXCLK,SELLV_TXDATA,SELLV_TXPRE,
	SELLV_RXEOMCLK, SELLV_RXDATACLK, SELLV_RXSAMPLER
};

void set_vdd_cal( uint8_t sel, uint8_t val ) {

	switch(mcuid) {
	case MCU_LANE0:
		switch(sel) {
		case SELLV_TXCLK:    reg_SELLV_TXCLK_CH0_3_0 = val;  break;
		case SELLV_TXDATA:   reg_SELLV_TXDATA_CH0_3_0 = val; break;
		case SELLV_TXPRE:    reg_SELLV_TXPRE_CH0_3_0 = val;  break;
		case SELLV_RXEOMCLK: reg_SELLV_RXEOMCLK_CH0_3_0 = val; break;
		case SELLV_RXDATACLK:reg_SELLV_RXDATACLK_CH0_3_0 = val; break; 
		case SELLV_RXSAMPLER:reg_SELLV_RXSAMPELR_CH0_3_0 = val; break;
		}
		break;
	case MCU_LANE1:
		switch(sel) {
		case SELLV_TXCLK:    reg_SELLV_TXCLK_CH1_3_0 = val;  break;
		case SELLV_TXDATA:   reg_SELLV_TXDATA_CH1_3_0 = val; break;
		case SELLV_TXPRE:    reg_SELLV_TXPRE_CH1_3_0 = val;  break;
		case SELLV_RXEOMCLK: reg_SELLV_RXEOMCLK_CH1_3_0 = val; break;
		case SELLV_RXDATACLK:reg_SELLV_RXDATACLK_CH1_3_0 = val; break;
		case SELLV_RXSAMPLER:reg_SELLV_RXSAMPELR_CH1_3_0 = val; break;
		}
		break;
	case MCU_LANE2:
		switch(sel) {
		case SELLV_TXCLK:    reg_SELLV_TXCLK_CH2_3_0 = val;  break;
		case SELLV_TXDATA:   reg_SELLV_TXDATA_CH2_3_0 = val; break;
		case SELLV_TXPRE:    reg_SELLV_TXPRE_CH2_3_0 = val;  break;
		case SELLV_RXEOMCLK: reg_SELLV_RXEOMCLK_CH2_3_0 = val; break;
		case SELLV_RXDATACLK:reg_SELLV_RXDATACLK_CH2_3_0 = val; break;
		case SELLV_RXSAMPLER:reg_SELLV_RXSAMPELR_CH2_3_0 = val; break;
		}
		break;
	case MCU_LANE3:
		switch(sel) {
		case SELLV_TXCLK:    reg_SELLV_TXCLK_CH3_3_0 = val;  break;
		case SELLV_TXDATA:   reg_SELLV_TXDATA_CH3_3_0 = val; break;
		case SELLV_TXPRE:    reg_SELLV_TXPRE_CH3_3_0 = val;  break;
		case SELLV_RXEOMCLK: reg_SELLV_RXEOMCLK_CH3_3_0 = val; break;
		case SELLV_RXDATACLK:reg_SELLV_RXDATACLK_CH3_3_0 = val; break;
		case SELLV_RXSAMPLER:reg_SELLV_RXSAMPELR_CH3_3_0 = val; break;
		}
		break;
	}
}

uint8_t get_vdd_cal(uint8_t sel) {
	uint8_t val = 0;
	switch(mcuid) {
	case MCU_LANE0:
		switch(sel) {
		case SELLV_TXCLK: 	  val = reg_SELLV_TXCLK_CH0_3_0 ;  break;
		case SELLV_TXDATA:    val = reg_SELLV_TXDATA_CH0_3_0 ; break;
		case SELLV_TXPRE:     val = reg_SELLV_TXPRE_CH0_3_0 ;  break;
		case SELLV_RXEOMCLK:  val = reg_SELLV_RXEOMCLK_CH0_3_0 ; break;
		case SELLV_RXDATACLK: val = reg_SELLV_RXDATACLK_CH0_3_0 ; break; 
		case SELLV_RXSAMPLER: val = reg_SELLV_RXSAMPELR_CH0_3_0 ; break;
		}
		break;
	case MCU_LANE1:
		switch(sel) {
		case SELLV_TXCLK: 	 val = reg_SELLV_TXCLK_CH1_3_0 ;  break;
		case SELLV_TXDATA:   val = reg_SELLV_TXDATA_CH1_3_0 ; break;
		case SELLV_TXPRE:    val = reg_SELLV_TXPRE_CH1_3_0 ;  break;
		case SELLV_RXEOMCLK: val = reg_SELLV_RXEOMCLK_CH1_3_0 ; break;
		case SELLV_RXDATACLK:val = reg_SELLV_RXDATACLK_CH1_3_0 ; break;
		case SELLV_RXSAMPLER:val = reg_SELLV_RXSAMPELR_CH1_3_0 ; break;
		}
		break;
	case MCU_LANE2:
		switch(sel) {
		case SELLV_TXCLK: 	 val = reg_SELLV_TXCLK_CH2_3_0 ;  break;
		case SELLV_TXDATA:   val = reg_SELLV_TXDATA_CH2_3_0 ; break;
		case SELLV_TXPRE:    val = reg_SELLV_TXPRE_CH2_3_0 ;  break;
		case SELLV_RXEOMCLK: val = reg_SELLV_RXEOMCLK_CH2_3_0 ; break;
		case SELLV_RXDATACLK:val = reg_SELLV_RXDATACLK_CH2_3_0 ; break;
		case SELLV_RXSAMPLER:val = reg_SELLV_RXSAMPELR_CH2_3_0 ; break;
		}
		break;
	case MCU_LANE3:
		switch(sel) {
		case SELLV_TXCLK: 	 val = reg_SELLV_TXCLK_CH3_3_0 ;  break;
		case SELLV_TXDATA:   val = reg_SELLV_TXDATA_CH3_3_0 ; break;
		case SELLV_TXPRE:    val = reg_SELLV_TXPRE_CH3_3_0 ;  break;
		case SELLV_RXEOMCLK: val = reg_SELLV_RXEOMCLK_CH3_3_0 ; break;
		case SELLV_RXDATACLK:val = reg_SELLV_RXDATACLK_CH3_3_0 ; break;
		case SELLV_RXSAMPLER:val = reg_SELLV_RXSAMPELR_CH3_3_0 ; break;
		}
		break;
	}

	return val;
}

uint8_t get_accumulator(uint8_t sel) {
        uint8_t accum = 0;
		switch(sel) {
		case SELLV_TXCLK:     accum = g_txclk_accummulator ;  break;
		case SELLV_TXDATA:    accum = g_txdata_accummulator ; break;
		case SELLV_TXPRE:     accum = g_txpre_accummulator ;  break;
		case SELLV_RXEOMCLK:  accum = g_rxeomclk_accummulator ; break;
		case SELLV_RXDATACLK: accum = g_rxdataclk_accummulator ; break;
		case SELLV_RXSAMPLER: accum = g_rxsampler_accummulator ; break;
	}  
	return accum;
}

void set_cal_result(uint8_t sel, uint8_t val, uint8_t accum) {
	if (rate == 1) {
		switch(sel) {
		case SELLV_TXCLK: 
			lnx_CAL_SELLV_TXCLK_R1_LANE_7_0 = val;  
			g_txclk_accummulator = accum;
			break;
		case SELLV_TXDATA: 
			lnx_CAL_SELLV_TXDATA_R1_LANE_7_0 = val;  
			g_txdata_accummulator = accum;
			break;
		case SELLV_TXPRE: 
			lnx_CAL_SELLV_TXPRE_R1_LANE_7_0 = val;  
			g_txpre_accummulator = accum;
			break;
		case SELLV_RXEOMCLK:
			lnx_CAL_SELLV_RXEOMCLK_R1_LANE_7_0 = val;  
			g_rxeomclk_accummulator = accum;
			break;
		case SELLV_RXDATACLK:
			lnx_CAL_SELLV_RXDATACLK_R1_LANE_7_0 = val; 
			g_rxdataclk_accummulator = accum;
			break;
		case SELLV_RXSAMPLER:
			lnx_CAL_SELLV_RXSAMPLER_R1_LANE_7_0 = val; 
			g_rxsampler_accummulator = accum;
			break;
		}
	}
	else {
		switch(sel) {
                case SELLV_TXCLK: 
                        lnx_CAL_SELLV_TXCLK_R0_LANE_7_0 = val;  
                        g_txclk_accummulator = accum;
                        break;
                case SELLV_TXDATA: 
                        lnx_CAL_SELLV_TXDATA_R0_LANE_7_0 = val;  
                        g_txdata_accummulator = accum;
                        break;
                case SELLV_TXPRE:
                        lnx_CAL_SELLV_TXPRE_R0_LANE_7_0 = val;  
                        g_txpre_accummulator = accum;
                        break;
                case SELLV_RXEOMCLK:
                        lnx_CAL_SELLV_RXEOMCLK_R0_LANE_7_0 = val;  
                        g_rxeomclk_accummulator = accum;
                        break;
                case SELLV_RXDATACLK: 
                        lnx_CAL_SELLV_RXDATACLK_R0_LANE_7_0 = val; 
                        g_rxdataclk_accummulator = accum;
                        break;
                case SELLV_RXSAMPLER:
                        lnx_CAL_SELLV_RXSAMPLER_R0_LANE_7_0 = val; 
                        g_rxsampler_accummulator = accum;
                        break;
                }
	}
}

__code uint8_t vref_vddcaLsel_tb[] = {0x06, 0x05, 0x05, 0x04, 0x04, 0x03, 0x02, 0x01};

void vdd_cal( void ) {
	uint8_t process_value_3_1;
	bool		cal_mode;

	PHY_STATUS = ST_VDD_CAL;

	cal_mode = (CAL_VDD_CONTINUOUS_MODE && reg_PWRON_SEQ==0);
	TRXDCCIN_SEL = TRXDCCIN_SEL & 0x3;
	process_value_3_1 = (PROCESS_VALUE >> 1) && 0x07;

	if (cmx_PROCESS_CAL_EN)
		VREF_VDDACAL_SEL = vref_vddcaLsel_tb[process_value_3_1];
	else
		VREF_VDDACAL_SEL = 0x4;

	if (((cal_mode==1)&&(reg_PIN_PLL_READY_TX_LANE==1)&&(ANA_IDLE==0))||((cal_mode==0)&&((reg_ANA_PLL_CLK_READY==1)||(reg_ANA_PLL_CLK_READY_RING=1)))) {
		reg_CALEN_VDDA_TXCLK_LANE = 1;
		lnx_SELLV_TXCLK_PASS_LANE = vdd_cal_op(SELLV_TXCLK);
		reg_CALEN_VDDA_TXCLK_LANE = 0;

		if (cmx_TXDETECT_CAL_EN == 0) {
			reg_CALEN_VDDA_TXDATA_LANE = 1;
			lnx_SELLV_TXDATA_PASS_LANE = vdd_cal_op(SELLV_TXDATA);
			reg_CALEN_VDDA_TXDATA_LANE = 0;
		}

		reg_CALEN_VDDA_TXPRE_LANE = 1;
		lnx_SELLV_TXPRE_PASS_LANE = vdd_cal_op(SELLV_TXPRE);
		reg_CALEN_VDDA_TXPRE_LANE = 0;
	}

	if (((cal_mode==1)&&(reg_PIN_PLL_READY_RX_LANE==1)&&(SQ_OUT == 0))||((cal_mode==0)&&((reg_ANA_PLL_CLK_READY==1)||(reg_ANA_PLL_CLK_READY_RING=1)))) {
		reg_VDDA_RXCLK_HALF_EN_LANE = 1;

		if (reg_EOM_CLK_EN_LANE == 1) {
			reg_CALEN_VDDA_RXEOMCLK_LANE = 1;
			lnx_SELLV_RXEOMCLK_PASS_LANE = vdd_cal_op(SELLV_RXEOMCLK);
			reg_CALEN_VDDA_RXEOMCLK_LANE =  0;
		}
		reg_CALEN_VDDA_RXDATACLK_LANE = 1;
		lnx_SELLV_RXDATACLK_PASS_LANE = vdd_cal_op(SELLV_RXDATACLK);
		reg_CALEN_VDDA_RXDATACLK_LANE = 0;

		reg_CALEN_VDDA_RXSAMPLER_LANE = 1;
		lnx_SELLV_RXSAMPLER_PASS_LANE = vdd_cal_op(SELLV_RXSAMPLER);
		reg_CALEN_VDDA_RXSAMPLER_LANE = 0;
	}

	lnx_VDD_CAL_DONE_LANE = 1;	 
	
	if( mcuid==MCU_LANE0) cmx_VDD_CAL_DONE_LANE0_RD = 1;
	if( mcuid==MCU_LANE1) cmx_VDD_CAL_DONE_LANE1_RD = 1;
	if( mcuid==MCU_LANE2) cmx_VDD_CAL_DONE_LANE2_RD = 1;
	if( mcuid==MCU_LANE3) cmx_VDD_CAL_DONE_LANE3_RD = 1;
	
}

bool vdd_cal_op (uint8_t sel )
{
	uint8_t		op_done, done_ptn, run_cnt, cal_value, step_size, vdd_cal_accumulator;
	bool		cal_mode;

	cal_value = 0;
	delay(Tus);

	cal_mode = (CAL_VDD_CONTINUOUS_MODE && reg_PWRON_SEQ==0);

	op_done =	0;
	done_ptn=	0; 
	run_cnt=	0;	
	if (cal_mode == 0) //one time
	{
		cal_value = tag_sellv_xx_default;
		set_vdd_cal(sel, tag_sellv_xx_default);
		vdd_cal_accumulator = 0x20;
		step_size = 0x20;
		TXDCC_CLK = 1;
		delay(T_p5us);
		TXDCC_CLK = 0;
		delay(T_p5us);
	}
	else { //continuous
		cal_value = get_vdd_cal(sel);
		vdd_cal_accumulator = get_accumulator(sel);
		step_size = 1;
	}

	while (op_done == 0) {
		done_ptn <<= 1;
		if(HIVDDR == 1)
			vdd_cal_accumulator = vdd_cal_accumulator + step_size;
		else
			vdd_cal_accumulator = vdd_cal_accumulator - step_size;

		if (vdd_cal_accumulator == 0x40) {
			vdd_cal_accumulator = 0x20; //reset accumulator
			done_ptn |= 0x01;
			if (cal_value > tag_MIN_VALUE ) {
				cal_value--;
				set_vdd_cal(sel, cal_value);
				TXDCC_CLK = 1;
				delay(T_p5us);
				TXDCC_CLK = 0;
				delay(T_p5us);
			}
		}
		else if (vdd_cal_accumulator == 0x0) {
			vdd_cal_accumulator = 0x20; //reset accumulator
			if (cal_value < tag_MAX_VALUE) {
				cal_value++;
				set_vdd_cal(sel, cal_value);
				TXDCC_CLK = 1;
				delay(T_p5us);
				TXDCC_CLK = 0;
				delay(T_p5us);
			}
		}

		done_ptn &= 0x0f;

		if ((done_ptn == 0xa) || (done_ptn == 0x5) || (cal_mode == 1) || (run_cnt >= tag_MAX_RUN)) {
			op_done = 1;
		}

		set_vdd_cal(sel, cal_value);

		TXDCC_CLK = 1;
		delay(T_p5us);
		TXDCC_CLK = 0;
		delay(T_40us);

		//DBG_Printf("\r\n\t %d %d %02x %02x", run_cnt, hi_cnt, done_ptn, cal_value);
		run_cnt++;
	}

	set_cal_result(sel, cal_value, vdd_cal_accumulator);	

	return op_done;
}

#else
void vdd_cal( void ){}
#endif

