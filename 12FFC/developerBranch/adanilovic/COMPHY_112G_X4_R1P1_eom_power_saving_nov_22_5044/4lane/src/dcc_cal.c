#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#define PU_EOM_ALIGN90_DCC_CMP			reg_PU_EOM_ALIGN90_DCC_CMP_LANE
#define RXDCC_EN_DATACLK                reg_RXDCC_EN_DATACLK_LANE
#define RX_ALIGN90_DD_CAL_BYPASS_EN		reg_RX_ALIGN90_DD_CAL_BYPASS_EN_LANE
#define	RX_DCC3_CAL_BYPASS_EN			reg_RX_DCC3_CAL_BYPASS_EN_LANE
#define	RX_DCC4_CAL_BYPASS_EN			reg_RX_DCC4_CAL_BYPASS_EN_LANE
//#define TIMEOUT_RXDCC_CAL				1000
#define EOM_CLK_EN						reg_EOM_CLK_EN_LANE
#define EOM_RESET_INTP_EXT				reg_EOM_RESET_INTP_EXT_LANE
#define RXDCC_HG_EOMCLK					reg_RXDCC_HG_EOMCLK_LANE
#define RXDCC_EN_EOMCLK					reg_RXDCC_EN_EOMCLK_LANE
#define RX_EOM_DCC_CAL_BYPASS_EN		reg_RX_EOM_DCC_CAL_BYPASS_EN_LANE
//#define TIMEOUT_RXEOMDCC_CAL			1000

#define TXDCC_EN						reg_TXDCC_EN_LANE

// sync on 20191028
void txdcc_cal_ram(void) BANKING_CTRL {

	uint8_t saved_speed_div, time_out_record;

	PHY_STATUS = ST_TXDCC_CAL;

	lnx_TXDCC_CAL_PASS_LANE = 0;
	lnx_TXDCC_CAL_DONE_LANE = 0;

	TXDCC_EN = 1;
	reg_TXCAL_EN_LANE = 1;
	saved_speed_div = reg_TXSPEED_DIV_LANE_2_0;
	time_out_record = 0;
	
	reg_TXDCC_PDIV_EN_LANE = 0;
	reg_TX_ALIGN90_DCC_TOP_START_LANE = 0;
	
	// IPCE_COMPHY-1541: 112G_A/X7121M tx_dcc cont_mode calibration issue
	// Part of r1.0 init script
	//%% Change TXDCC3/4 cal gm min value
	reg_TX_DCC3_CAL_VAL_MIN_MSB_LANE_2_0 = 0x7;
	reg_TX_DCC4_CAL_VAL_MIN_MSB_LANE_2_0 = 0x7;

	//default unified_core_cal settings for highest datarate, 106.25/112/103.125Gbps
	// Init as midas
	reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 0;
	reg_TX_DCC1_CAL_BYPASS_EN_LANE = 0;
	reg_TX_DCC2_CAL_BYPASS_EN_LANE = 1;
	reg_TX_DCC3_CAL_BYPASS_EN_LANE = 0;
	reg_TX_DCC4_CAL_BYPASS_EN_LANE = 0;
	
#if 1
	//for datarate<=56.25Gbps, TX_HALFRATE_EN=1
	//for datarate>56.25Gbps, TX_HALFRATE_EN=0
	if (reg_TX_HALFRATE_EN_LANE == 1)
	{
		reg_TX_ALIGN90_CAL_BYPASS_EN_LANE = 1;
		reg_TX_DCC3_CAL_BYPASS_EN_LANE = 1;
	}
	//for datarate<=12.890625Gbps, TX_SPEED_DIV!=0
	//for datarate>12.890625Gbps, TX_SPEED_DIV=0
	//%in full speed, bypass the DCC2 block (which corrects the duty cycle for low speed clocks). In any other speed, don’t bypass DCC2.
	if (reg_TXSPEED_DIV_LANE_2_0 != 0){
		reg_TX_DCC1_CAL_BYPASS_EN_LANE = 1;
		reg_TX_DCC2_CAL_BYPASS_EN_LANE = 0;
		reg_TXDCC_PDIV_EN_LANE = 1;
	}
#endif

	reg_TX_ALIGN90_DCC_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_TXDCC_CAL);
	while(!reg_TX_ALIGN90_DCC_TOP_DONE_LANE && !timeout);
	if(timeout)
		time_out_record = 1;*/
	delay_ram(T_p5us);
	while(!reg_TX_ALIGN90_DCC_TOP_DONE_LANE);
	reg_TX_ALIGN90_DCC_TOP_START_LANE = 0;

	//if (reg_TX_ALIGN90_CAL_TIMEOUT_RD_LANE || reg_TX_DCC1_CAL_TIMEOUT_RD_LANE || reg_TX_DCC2_CAL_TIMEOUT_RD_LANE || reg_TX_DCC3_CAL_TIMEOUT_RD_LANE || reg_TX_DCC4_CAL_TIMEOUT_RD_LANE)
	/*if (reg_TX_ALIGN90_CAL_TIMEOUT_RD_LANE || reg_TX_DCC1_CAL_TIMEOUT_RD_LANE || reg_TX_DCC4_CAL_TIMEOUT_RD_LANE)
		lnx_TXDCC_CAL_PASS_LANE = 0;
	else
		lnx_TXDCC_CAL_PASS_LANE = 1;*/

	time_out_record = reg_TX_DCC1_CAL_TIMEOUT_RD_LANE;
	time_out_record = time_out_record | reg_TX_DCC4_CAL_TIMEOUT_RD_LANE;

	if(reg_TXSPEED_DIV_LANE_2_0 >= 1)
	{
		time_out_record |= reg_TX_ALIGN90_CAL_TIMEOUT_RD_LANE | reg_TX_DCC3_CAL_TIMEOUT_RD_LANE;
	}
	if ((reg_TXSPEED_DIV_LANE_2_0 == 1) || (reg_TXSPEED_DIV_LANE_2_0 == 0 && reg_RX_HALFRATE_EN_LANE == 0) )
		time_out_record |= reg_TX_DCC2_CAL_TIMEOUT_RD_LANE;

	if(time_out_record == 0)
		lnx_TXDCC_CAL_PASS_LANE = 1;
	else
		lnx_TXDCC_CAL_PASS_LANE = 0;


#if 1
	lnx_cal_tx_align90_result_msb_lane = reg_TX_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_tx_align90_result_lsb_lane = reg_TX_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0;

	lnx_cal_tx_dcc1_result_lane = reg_TX_DCC1_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_tx_dcc2_result_lane = reg_TX_DCC2_CAL_RESULT_RD_LANE_5_0;
	lnx_cal_tx_dcc3_result_msb_lane = reg_TX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_tx_dcc3_result_lsb_lane = reg_TX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0;
	lnx_cal_tx_dcc4_result_msb_lane = reg_TX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_tx_dcc4_result_lsb_lane = reg_TX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0;
#endif

	reg_TXCAL_EN_LANE = 0;
	reg_TXSPEED_DIV_LANE_2_0 = saved_speed_div;
	lnx_TXDCC_CAL_DONE_LANE = 1;
}
// sync on 20191007
void rx_clk_cal_init_ram(void) BANKING_CTRL {
	RXDCC_EN_DATACLK = 1;
	
	//default unified_core_cal settings for highest datarate, 106.25/112/103.125 Gbps
    reg_RX_DCC1_CAL_BYPASS_EN_LANE = 0;
    reg_RX_DCC2_CAL_BYPASS_EN_LANE = 0;
    reg_RX_DCC3_CAL_BYPASS_EN_LANE = 0;
    reg_RX_DCC4_CAL_BYPASS_EN_LANE = 0;
    RX_ALIGN90_DD_CAL_BYPASS_EN = 0;
    reg_RX_ALIGN90_DE_CAL_BYPASS_EN_LANE = 0;
    reg_RX_ALIGN90_EE_CAL_BYPASS_EN_LANE = 0;
    // init as midas
	reg_RX_ALIGN90_DE_CAL_SETTING_LANE_2_0 = (0x127 & 0x7);
	reg_RX_ALIGN90_DE_CAL_SETTING_LANE_10_3 = (0x127 & 0x7f8)>>3;
	reg_RX_ALIGN90_DE_CAL_SETTING_LANE_12_11 = (0x127 & 0x1800)>>11;
    
	if (reg_RX_HALFRATE_EN_LANE == 1)
	{
		reg_RX_DCC3_CAL_BYPASS_EN_LANE = 1;
		reg_RX_DCC4_CAL_BYPASS_EN_LANE = 1;
		RX_ALIGN90_DD_CAL_BYPASS_EN = 1;
		reg_RX_ALIGN90_EE_CAL_BYPASS_EN_LANE = 1;
		//%%% Changed from 0X144 to 0X11E by Jackson 8/23/2019 because 1E reference code is close to 90 degree and this matches what is used right now
		reg_RX_ALIGN90_DE_CAL_SETTING_LANE_2_0 = (0x11e & 0x7);
		reg_RX_ALIGN90_DE_CAL_SETTING_LANE_10_3 = (0x11e & 0x7f8)>>3;
		reg_RX_ALIGN90_DE_CAL_SETTING_LANE_12_11 = (0x11e & 0x1800)>>11;
	}
	if ((reg_RXSPEED_DIV_LANE_2_0>>2&0x1)==1) {
		reg_RX_DCC5_CAL_BYPASS_EN_LANE = 1;
		//%%% Added by Jackson 8/23/2019 because 1E reference code is out of range when RXSPEED_DIV[2]=1. Reference code 8F correspond to 69 degree. This reference code is 10 codes away from max range in R2.0, 15 codes away from max range in R1.0
		reg_RX_ALIGN90_DE_CAL_SETTING_LANE_2_0 = (0x18f & 0x7);
		reg_RX_ALIGN90_DE_CAL_SETTING_LANE_10_3 = (0x18f & 0x7f8)>>3;
		reg_RX_ALIGN90_DE_CAL_SETTING_LANE_12_11 = (0x18f & 0x1800)>>11;
	}
	
	// IPCE_COMPHY-1557 cal_phase = RX_ALIGN90_DE_CAL_SETTING[7:0]
	cal_phase = (reg_RX_ALIGN90_DE_CAL_SETTING_LANE_10_3&0x1f)<<3 | reg_RX_ALIGN90_DE_CAL_SETTING_LANE_2_0;
}
// sync on 20191007
void rx_clk_cal_ram(void) BANKING_CTRL {

	PHY_STATUS = ST_RX_CLK_CAL;
	lnx_RX_CLK_CAL_DONE_LANE = 0;
	lnx_RX_CLK_CAL_PASS_LANE = 0;

	rx_clk_cal_init_ram();

	/*if (cmx_RXDCC_DATA_CAL_EXT_EN == 1)
	{
		lnx_RX_CLK_CAL_DONE_LANE = 1;
		return;
	}*/
	reg_RX_CLK_TOP_START_LANE  = 0;
	reg_RX_CLK_TOP_START_LANE  = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_RXDCC_CAL);
	while(!reg_RX_CLK_TOP_DONE_LANE && !timeout);
	if(!timeout)*/
	delay_ram(T_p5us);
	while(!reg_RX_CLK_TOP_DONE_LANE);

	if (reg_RX_ALIGN90_DD_CAL_TIMEOUT_RD_LANE || reg_RX_ALIGN90_DE_CAL_TIMEOUT_RD_LANE || reg_RX_ALIGN90_EE_CAL_TIMEOUT_RD_LANE || \
			reg_RX_DCC1_CAL_TIMEOUT_RD_LANE || reg_RX_DCC2_CAL_TIMEOUT_RD_LANE || reg_RX_DCC3_CAL_TIMEOUT_RD_LANE || reg_RX_DCC4_CAL_TIMEOUT_RD_LANE || reg_RX_DCC5_CAL_TIMEOUT_RD_LANE)
		lnx_RX_CLK_CAL_PASS_LANE = 0;
	else
		lnx_RX_CLK_CAL_PASS_LANE = 1;
	reg_RX_CLK_TOP_START_LANE  = 0;

#if 1
	lnx_cal_rx_align90_de_result_msb_lane = reg_RX_ALIGN90_DE_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_align90_de_result_lsb_lane = reg_RX_ALIGN90_DE_CAL_RESULT_LSB_RD_LANE_6_0;
	lnx_cal_rx_align90_dd_result_msb_lane = reg_RX_ALIGN90_DD_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_align90_dd_result_lsb_lane = reg_RX_ALIGN90_DD_CAL_RESULT_LSB_RD_LANE_6_0;
	lnx_cal_rx_align90_ee_result_msb_lane = reg_RX_ALIGN90_EE_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_align90_ee_result_lsb_lane = reg_RX_ALIGN90_EE_CAL_RESULT_LSB_RD_LANE_6_0;

	lnx_cal_rx_dcc1_result_msb_lane = reg_RX_DCC1_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_dcc1_result_lsb_lane = reg_RX_DCC1_CAL_RESULT_LSB_RD_LANE_5_0;
	lnx_cal_rx_dcc2_result_msb_lane = reg_RX_DCC2_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_dcc2_result_lsb_lane = reg_RX_DCC2_CAL_RESULT_LSB_RD_LANE_5_0;
	lnx_cal_rx_dcc3_result_msb_lane = reg_RX_DCC3_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_dcc3_result_lsb_lane = reg_RX_DCC3_CAL_RESULT_LSB_RD_LANE_5_0;
	lnx_cal_rx_dcc4_result_msb_lane = reg_RX_DCC4_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_dcc4_result_lsb_lane = reg_RX_DCC4_CAL_RESULT_LSB_RD_LANE_5_0;
#endif

	lnx_RX_CLK_CAL_DONE_LANE = 1;
}

static void rx_eom_cal_init_rate() {


	if (reg_RX_HALFRATE_EN_LANE == 0)
	{
		RX_EOM_DCC_CAL_BYPASS_EN = 0;                                       
        reg_RX_EOM_DCC_CAL_SETTING_LANE_2_0 =   (0x448 & 0x0007);           
        reg_RX_EOM_DCC_CAL_SETTING_LANE_10_3 =  (0x448 & 0x07f8) >> 3;      
        reg_RX_EOM_DCC_CAL_SETTING_LANE_12_11 = (0x448 & 0x1800) >> 11;     
        reg_RX_EOM_DCC_CAL_DIR_INV_LANE = 0;                                
		//reg_RX_EOM_DCC_CAL_SINGLE_EN_LANE = 1;                    //Not in pseudo code. Default value: 1
		//reg_RX_EOM_DCC_CAL_CONT_EN_LANE = 1;                      //Not in pseudo code. Default value: 1
		//reg_RX_EOM_DCC_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 = 0;     //Not in pseudo code. Default value: 0
		//reg_RX_EOM_DCC_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 1;       //Not in pseudo code. Default value: 1
		reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 0;
        reg_RX_EOM_PI_CAL_SETTING_LANE_6_0 =  (0x494 & 0x007f);             
        reg_RX_EOM_PI_CAL_SETTING_LANE_12_7 = (0X494 & 0x1f80) >> 7;        
		//reg_RX_EOM_PI_CAL_SINGLE_EN_LANE = 1;                     //Not in pseudo code. Default value: 1
		//RX_EOM_PI_CAL_CONT_EN=0
        reg_RX_EOM_PI_CAL_DIR_INV_LANE = 1;                                 
		//reg_RX_EOM_PI_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 = 0;      //Not in pseudo code. Default value: 0
		//RX_EOM_PI_CAL_CONT_MODE_STEPSIZE[2:0] =1
		reg_RX_EOM_ALIGN90_CAL_BYPASS_EN_LANE = 0;                          
        reg_RX_EOM_ALIGN90_CAL_SETTING_LANE_3_0 =  (0x494 & 0x000f);        
        reg_RX_EOM_ALIGN90_CAL_SETTING_LANE_11_4 = (0x494 & 0x0ff0) >> 4;   
        reg_RX_EOM_ALIGN90_CAL_SETTING_LANE_12 =   (0x494 & 0x1000) >> 12;  
        reg_RX_EOM_ALIGN90_CAL_DIR_INV_LANE = 0;                            
		//reg_RX_EOM_ALIGN90_CAL_SINGLE_EN_LANE = 1;                //Not in pseudo code. Default value: 1
		//reg_RX_EOM_ALIGN90_CAL_CONT_EN_LANE = 1;                  //Not in pseudo code. Default value: 1
		//reg_RX_EOM_ALIGN90_CAL_SINGLE_MODE_STEPSIZE_LANE_2_0 = 0; //Not in pseudo code. Default value: 0
		//reg_RX_EOM_ALIGN90_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 1;   //Not in pseudo code. Default value: 1
	}
	else
	{
        reg_RX_EOM_DCC_CAL_BYPASS_EN_LANE = 0;                              
        reg_RX_EOM_DCC_CAL_SETTING_LANE_2_0 =   (0x448 & 0x0007);           
        reg_RX_EOM_DCC_CAL_SETTING_LANE_10_3 =  (0x448 & 0x07f8) >> 3;      
        reg_RX_EOM_DCC_CAL_SETTING_LANE_12_11 = (0x448 & 0x1800) >> 11;     
        reg_RX_EOM_DCC_CAL_DIR_INV_LANE = 0;                                
		reg_RX_EOM_PI_CAL_BYPASS_EN_LANE = 0;                               
		reg_RX_EOM_PI_CAL_SETTING_LANE_6_0 =  (0X294 & 0x007f);             
		reg_RX_EOM_PI_CAL_SETTING_LANE_12_7 = (0X294 & 0x1f80) >> 7;        
        reg_RX_EOM_PI_CAL_DIR_INV_LANE = 0;                                 
		reg_RX_EOM_ALIGN90_CAL_BYPASS_EN_LANE = 1;
        reg_RX_EOM_ALIGN90_CAL_SETTING_LANE_3_0 =  (0x294 & 0x000f);        
        reg_RX_EOM_ALIGN90_CAL_SETTING_LANE_11_4 = (0x294 & 0x0ff0) >> 4;   
        reg_RX_EOM_ALIGN90_CAL_SETTING_LANE_12 =   (0x294 & 0x1000) >> 12;  
        reg_RX_EOM_ALIGN90_CAL_DIR_INV_LANE = 0;                            
    }

	if (((reg_RXSPEED_DIV_LANE_2_0 >> 2) & 0x1) == 1) { //the PI DCC is not able to be detected when DIV2 is on
        RX_EOM_DCC_CAL_BYPASS_EN = 1;
	}
    else {
        RX_EOM_DCC_CAL_BYPASS_EN = 0;
    }
}

static void rx_eom_power_on_cal_init_ram(void) {
	EOM_CLK_EN = 1;
	EOM_RESET_INTP_EXT = 0;
	RXDCC_HG_EOMCLK = 1;
	RXDCC_EN_EOMCLK = 1;
	PU_EOM_ALIGN90_DCC_CMP = 1;

    rx_eom_cal_init_rate();
}

static void rx_eom_on_demand_cal_init_ram() {
    EOM_CLK_EN = 1;

    //Note that DLL calibration is already continuously running, so only need to
    //set EOM_DLL Bypass to 0
    reg_EOM_DLL_VDDA_CAL_DIR_INV_LANE = 0;
    reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 0;
    reg_EOM_DLL_VDDA_CAL_CONT_MODE_STEPSIZE_LANE_2_0 = 0x4; //set step size to 1

    //Wait for 100 us to allow 4 rounds of EOM_DLL_VDDA_CAL to complete
    delay_ram(T_100us);

    reg_EOM_DLL_VDDA_CAL_BYPASS_EN_LANE = 1;

	RXDCC_EN_EOMCLK = 1;
	PU_EOM_ALIGN90_DCC_CMP = 1;

    rx_eom_cal_init_rate();
}

void rx_eom_cal_ram(enum rx_eom_cal_type_t cal_type) BANKING_CTRL {

	PHY_STATUS = ST_RX_EOM_CAL;

	lnx_RX_EOM_CAL_DONE_LANE = 0;
	lnx_RX_EOM_CAL_PASS_LANE = 0;

    if(cal_type == RX_EOM_POWER_ON_CAL) {
	    rx_eom_power_on_cal_init_ram();
    }
    else if(cal_type == RX_EOM_ON_DEMAND_CAL) {
        rx_eom_on_demand_cal_init_ram();
    }

	/*if(cmx_RXDCC_EOM_CAL_EXT_EN == 1)
	{
		lnx_RX_EOM_CAL_DONE_LANE = 1;
		return;
	}*/

	reg_RX_EOM_TOP_START_LANE = 0;
	reg_RX_EOM_TOP_START_LANE = 1;
	/*timeout = 0;
	timeout_start((uint16_t)TIMEOUT_RXEOMDCC_CAL);
	while(!reg_RX_EOM_TOP_DONE_LANE && !timeout);*/
	delay_ram(T_p5us);
	while(!reg_RX_EOM_TOP_DONE_LANE);
	if(reg_RX_EOM_DCC_CAL_TIMEOUT_RD_LANE || reg_RX_EOM_PI_CAL_TIMEOUT_RD_LANE || reg_RX_EOM_ALIGN90_CAL_TIMEOUT_RD_LANE)
		lnx_RX_EOM_CAL_PASS_LANE = 0;
	else
		lnx_RX_EOM_CAL_PASS_LANE = 1;
	reg_RX_EOM_TOP_START_LANE = 0;

	lnx_cal_rx_eom_dcc_result_lane = reg_RX_EOM_DCC_CAL_RESULT_RD_LANE_6_0;
	lnx_cal_rx_eom_pi_result_lane = reg_RX_EOM_PI_CAL_RESULT_RD_LANE_10_4;
	lnx_cal_rx_eom_align90_result_msb_lane = reg_RX_EOM_ALIGN90_CAL_RESULT_MSB_RD_LANE_2_0;
	lnx_cal_rx_eom_align90_result_lsb_lane = reg_RX_EOM_ALIGN90_CAL_RESULT_LSB_RD_LANE_6_0;

	lnx_RX_EOM_CAL_DONE_LANE = 1;

	PU_EOM_ALIGN90_DCC_CMP = 0;
    //Disable EOM clock after EOM power on calibration to save power.
    //Will only enable EOM clock again when EOM function is called.
    //This is ok here since dll_cal_ram (which sets EOM_CLK_EN = 1)
    //is currently called before rx_eom_cal_ram during power on calibration.
    if(cal_type == RX_EOM_POWER_ON_CAL) {
	    EOM_CLK_EN = 0;
    }
}










