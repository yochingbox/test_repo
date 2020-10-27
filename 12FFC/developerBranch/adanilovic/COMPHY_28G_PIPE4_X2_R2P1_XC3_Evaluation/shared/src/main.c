/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file main.c
* \purpose main top
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/

#define _DEBUG _DEBUG_MAIN
#include "common.h"

// FW revision embeded in program
static __code __at (0x200) uint8_t gaFwRev[] = {BUILD_VER, PATCH_VER, MINOR_VER, MAJOR_VER };
// PHY mode embeded in program
#ifdef _PCIE_USB_BUILD
static __code __at (0x204) uint8_t gnFwPhyMode = 0x1;
#else
#ifdef _SATA_SERDES_BUILD
static __code __at (0x204) uint8_t gnFwPhyMode = 0x2;
#else
static __code __at (0x204) uint8_t gnFwPhyMode = 0x4;
#endif
#endif

/* Function Declaration */
int _sdcc_external_startup(void);
void int0_isr   (void) __interrupt (0)  __using (2); 
void timer0_isr (void) __interrupt (1)  __using (2);
void int1_isr   (void) __interrupt (2)  __using (2); 
void timer1_isr (void) __interrupt (3)  __using (2);
void timer2_isr (void) __interrupt (5)  __using (2);
void int2_isr   (void) __interrupt (9)  __using (2); 
void int3_isr   (void) __interrupt (10) __using (2); 
void int4_isr   (void) __interrupt (11) __using (2); 
void int5_isr   (void) __interrupt (12) __using (2); 
void int6_isr 	(void) __interrupt (13) __using (2);
void int7_isr 	(void) __interrupt (14)  __using (1);
void int8_isr 	(void) __interrupt (15) __using (2);
void int9_isr 	(void) __interrupt (16) __using (2);
void int10_isr 	(void) __interrupt (17) __using (2);
void int11_isr 	(void) __interrupt (18) __using (2);
void int12_isr 	(void) __interrupt (19) __using (2);
void uart0_isr  (void) __interrupt (4)  __using (2); 

_sdcc_external_startup() {
    return(1);
}


volatile uint32_t perf_test__a_32_bit_idata;
volatile uint32_t perf_test__b_32_bit_idata;
volatile uint32_t perf_test__c_32_bit_idata;
volatile float    perf_test__a_float_idata;
volatile float    perf_test__b_float_idata;
volatile float    perf_test__c_float_idata;
volatile uint8_t  perf_test__data_block1_idata[8];
volatile uint8_t  perf_test__data_block2_idata[8];

void perf_test__init() {

    reg_MCU_DEBUG1_LANE_7_0 = 0x43;
    memset0_sw(perf_test__data_block1_idata, 8);
    memset0_sw(perf_test__data_block2_idata, 8);
    memset0_sw(perf_test__data_block1_xdata, 8);
    memset0_sw(perf_test__data_block2_xdata, 8);
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;
}

void perf_test__cpu_memcpy_idata() {

    int i = 0;
    int j = 0;
    volatile uint8_t * des = perf_test__data_block1_idata;
    volatile uint8_t * src = perf_test__data_block2_idata;
    const int n = 8; 

    reg_MCU_DEBUG1_LANE_7_0 = 0x44;
    for(i = 0; i < 100; i++) {
        des = perf_test__data_block1_idata;
        src = perf_test__data_block2_idata;
        for(j = 0; j < n; j++) {
            *des++ = *src++;
        }	
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;
}

void perf_test__cpu_memcpy_xdata() {

    int i = 0;
    int j = 0;
    volatile uint8_t * des = perf_test__data_block1_xdata;
    volatile uint8_t * src = perf_test__data_block2_xdata;
    const int n = 8; 

    reg_MCU_DEBUG1_LANE_7_0 = 0x45;
    for(i = 0; i < 100; i++) {
        des = perf_test__data_block1_xdata;
        src = perf_test__data_block2_xdata;
        for(j = 0; j < n; j++) {
            *des++ = *src++;
        }	
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;
}

void perf_test__dma_memcpy_idata() {

    int i = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x46;
    for(i = 0; i < 100; i++) {
        memcpy(perf_test__data_block1_idata, perf_test__data_block2_idata, 8);
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;
}

void perf_test__dma_memcpy_xdata() {

    int i = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x47;
    for(i = 0; i < 100; i++) {
        memcpy(perf_test__data_block1_xdata, perf_test__data_block2_xdata, 8);
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;
}

uint32_t perf_test__32_bit_mult_idata() {

    int i = 0;
    perf_test__a_32_bit_idata = 0x11111111;
    perf_test__b_32_bit_idata = 0x22222222;
    perf_test__c_32_bit_idata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x82;
    for(i = 0; i < 100; ++i) {
        perf_test__c_32_bit_idata = perf_test__a_32_bit_idata * perf_test__b_32_bit_idata;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_32_bit_idata;
}

uint32_t perf_test__32_bit_div_idata() {

    int i = 0;
    perf_test__a_32_bit_idata = 0x11111111;
    perf_test__b_32_bit_idata = 0x22222222;
    perf_test__c_32_bit_idata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x83;
    for(i = 0; i < 100; ++i) {
        perf_test__c_32_bit_idata = perf_test__a_32_bit_idata / perf_test__b_32_bit_idata;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_32_bit_idata;
}

uint32_t perf_test__float_mult_idata() {

    int i = 0;
    perf_test__a_float_idata = 123.456e-11;
    perf_test__b_float_idata = 789.123e12;
    perf_test__c_float_idata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x84;
    for(i = 0; i < 100; ++i) {
        perf_test__c_float_idata = perf_test__a_float_idata * perf_test__b_float_idata;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_float_idata;
}

uint32_t perf_test__float_div_idata() {

    int i = 0;
    perf_test__a_float_idata = 123.456e-11;
    perf_test__b_float_idata = 789.123e12;
    perf_test__c_float_idata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x85;
    for(i = 0; i < 100; ++i) {
        perf_test__c_float_idata = perf_test__a_float_idata / perf_test__b_float_idata;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_float_idata;
}

uint32_t perf_test__32_bit_mult_increment_idata() {

    int i = 0;
    perf_test__a_32_bit_idata = 0x11111111;
    perf_test__b_32_bit_idata = 0x22222222;
    perf_test__c_32_bit_idata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x86;
    for(i = 0; i < 100; ++i) {
        perf_test__c_32_bit_idata = perf_test__a_32_bit_idata * perf_test__b_32_bit_idata;
        perf_test__a_32_bit_idata++;
        perf_test__b_32_bit_idata++;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_32_bit_idata;
}

uint32_t perf_test__32_bit_div_increment_idata() {

    int i = 0;
    perf_test__a_32_bit_idata = 0x11111111;
    perf_test__b_32_bit_idata = 0x22222222;
    perf_test__c_32_bit_idata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x87;
    for(i = 0; i < 100; ++i) {
        perf_test__c_32_bit_idata = perf_test__a_32_bit_idata / perf_test__b_32_bit_idata;
        perf_test__a_32_bit_idata++;
        perf_test__b_32_bit_idata++;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_32_bit_idata;
}

uint32_t perf_test__float_mult_increment_idata() {

    int i = 0;
    perf_test__a_float_idata = 123.456e-11;
    perf_test__b_float_idata = 789.123e12;
    perf_test__c_float_idata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x88;
    for(i = 0; i < 100; ++i) {
        perf_test__c_float_idata = perf_test__a_float_idata * perf_test__b_float_idata;
        perf_test__a_float_idata++;
        perf_test__b_float_idata++;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_float_idata;
}

uint32_t perf_test__float_div_increment_idata() {

    int i = 0;
    perf_test__a_float_idata = 123.456e-11;
    perf_test__b_float_idata = 789.123e12;
    perf_test__c_float_idata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x89;
    for(i = 0; i < 100; ++i) {
        perf_test__c_float_idata = perf_test__a_float_idata / perf_test__b_float_idata;
        perf_test__a_float_idata++;
        perf_test__b_float_idata++;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_float_idata;
}

uint32_t perf_test__32_bit_mult_xdata() {

    int i = 0;
    perf_test__a_32_bit_xdata = 0x11111111;
    perf_test__b_32_bit_xdata = 0x22222222;
    perf_test__c_32_bit_xdata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x90;
    for(i = 0; i < 100; ++i) {
        perf_test__c_32_bit_xdata = perf_test__a_32_bit_xdata * perf_test__b_32_bit_xdata;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_32_bit_xdata;
}

uint32_t perf_test__32_bit_div_xdata() {

    int i = 0;
    perf_test__a_32_bit_xdata = 0x11111111;
    perf_test__b_32_bit_xdata = 0x22222222;
    perf_test__c_32_bit_xdata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x91;
    for(i = 0; i < 100; ++i) {
        perf_test__c_32_bit_xdata = perf_test__a_32_bit_xdata / perf_test__b_32_bit_xdata;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_32_bit_xdata;
}

uint32_t perf_test__float_mult_xdata() {

    int i = 0;
    perf_test__a_float_xdata = 123.456e-11;
    perf_test__b_float_xdata = 789.123e12;
    perf_test__c_float_xdata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x92;
    for(i = 0; i < 100; ++i) {
        perf_test__c_float_xdata = perf_test__a_float_xdata * perf_test__b_float_xdata;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_float_xdata;
}

uint32_t perf_test__float_div_xdata() {

    int i = 0;
    perf_test__a_float_xdata = 123.456e-11;
    perf_test__b_float_xdata = 789.123e12;
    perf_test__c_float_xdata = 0;

    reg_MCU_DEBUG1_LANE_7_0 = 0x93;
    for(i = 0; i < 100; ++i) {
        perf_test__c_float_xdata = perf_test__a_float_xdata / perf_test__b_float_xdata;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__c_float_xdata;
}


uint32_t perf_test__float_increment_idata() {

    int i = 0;
    perf_test__a_float_idata = 123.456e-11;
    perf_test__b_float_idata = 789.123e12;

    reg_MCU_DEBUG1_LANE_7_0 = 0x94;
    for(i = 0; i < 100; ++i) {
        perf_test__a_float_idata++;
        perf_test__b_float_idata++;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__a_float_idata + perf_test__b_float_idata;
}

uint32_t perf_test__float_increment_xdata() {

    int i = 0;
    perf_test__a_float_xdata = 123.456e-11;
    perf_test__b_float_xdata = 789.123e12;

    reg_MCU_DEBUG1_LANE_7_0 = 0x95;
    for(i = 0; i < 100; ++i) {
        perf_test__a_float_xdata++;
        perf_test__b_float_xdata++;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return perf_test__a_float_xdata + perf_test__b_float_xdata;
}

uint32_t perf_test__float_mult_debug(float a, float b) {

    int i = 0;
    volatile float c = 0;

    reg_MCU_DEBUG2_LANE_7_0 = ((uint32_t)a & 0x000000FF) >> 0;
    reg_MCU_DEBUG3_LANE_7_0 = ((uint32_t)a & 0x0000FF00) >> 8;
    reg_MCU_DEBUG4_LANE_7_0 = ((uint32_t)a & 0x00FF0000) >> 16;
    reg_MCU_DEBUG5_LANE_7_0 = ((uint32_t)a & 0xFF000000) >> 24;

    reg_MCU_DEBUG2_LANE_7_0 = ((uint32_t)b & 0x000000FF) >> 0;
    reg_MCU_DEBUG3_LANE_7_0 = ((uint32_t)b & 0x0000FF00) >> 8;
    reg_MCU_DEBUG4_LANE_7_0 = ((uint32_t)b & 0x00FF0000) >> 16;
    reg_MCU_DEBUG5_LANE_7_0 = ((uint32_t)b & 0xFF000000) >> 24;

    reg_MCU_DEBUG1_LANE_7_0 = 0x98;
    for(i = 0; i < 100; ++i) {
        c = a * b;
    }
    reg_MCU_DEBUG1_LANE_7_0 = 0xFF;

    return c;
}

uint32_t performance_test() {

    volatile uint32_t result = 0;

    perf_test__init();

    perf_test__cpu_memcpy_idata();
    perf_test__cpu_memcpy_xdata();
    /*perf_test__dma_memcpy_idata();*/
    /*perf_test__dma_memcpy_xdata();*/

    result = perf_test__32_bit_mult_idata();
    result = perf_test__32_bit_div_idata();
    result = perf_test__float_mult_idata();
    result = perf_test__float_div_idata();

    result = perf_test__32_bit_mult_increment_idata();
    result = perf_test__32_bit_div_increment_idata();
    result = perf_test__float_mult_increment_idata();
    result = perf_test__float_div_increment_idata();

    result = perf_test__32_bit_mult_xdata();
    result = perf_test__32_bit_div_xdata();
    result = perf_test__float_mult_xdata();
    result = perf_test__float_div_xdata();

    result = perf_test__float_increment_idata();
    result = perf_test__float_increment_xdata();

    /*result = perf_test__float_mult_debug(123.0, 456.0);*/
        /*reg_MCU_DEBUG2_LANE_7_0 = ((uint32_t)result & 0x000000FF) >> 0;*/
        /*reg_MCU_DEBUG3_LANE_7_0 = ((uint32_t)result & 0x0000FF00) >> 8;*/
        /*reg_MCU_DEBUG4_LANE_7_0 = ((uint32_t)result & 0x00FF0000) >> 16;*/
        /*reg_MCU_DEBUG5_LANE_7_0 = ((uint32_t)result & 0xFF000000) >> 24;*/
    /*result = perf_test__float_mult_debug(887e4, 876e4);*/
        /*reg_MCU_DEBUG2_LANE_7_0 = ((uint32_t)result & 0x000000FF) >> 0;*/
        /*reg_MCU_DEBUG3_LANE_7_0 = ((uint32_t)result & 0x0000FF00) >> 8;*/
        /*reg_MCU_DEBUG4_LANE_7_0 = ((uint32_t)result & 0x00FF0000) >> 16;*/
        /*reg_MCU_DEBUG5_LANE_7_0 = ((uint32_t)result & 0xFF000000) >> 24;*/
    /*result = perf_test__float_mult_debug(1236e-5, 8777e14);*/
        /*reg_MCU_DEBUG2_LANE_7_0 = ((uint32_t)result & 0x000000FF) >> 0;*/
        /*reg_MCU_DEBUG3_LANE_7_0 = ((uint32_t)result & 0x0000FF00) >> 8;*/
        /*reg_MCU_DEBUG4_LANE_7_0 = ((uint32_t)result & 0x00FF0000) >> 16;*/
        /*reg_MCU_DEBUG5_LANE_7_0 = ((uint32_t)result & 0xFF000000) >> 24;*/
    /*result = perf_test__float_mult_debug(12e-1, 7763e2);*/
        /*reg_MCU_DEBUG2_LANE_7_0 = ((uint32_t)result & 0x000000FF) >> 0;*/
        /*reg_MCU_DEBUG3_LANE_7_0 = ((uint32_t)result & 0x0000FF00) >> 8;*/
        /*reg_MCU_DEBUG4_LANE_7_0 = ((uint32_t)result & 0x00FF0000) >> 16;*/
        /*reg_MCU_DEBUG5_LANE_7_0 = ((uint32_t)result & 0xFF000000) >> 24;*/

    return result;
}

/**
 * \module main
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/
void main(){
     volatile uint32_t result = 0;
	// Crash mode for X2_ROM only
#ifdef _28G_X2_ROM
    if ( reg_MCU_FW_SWITCH_EN_LANE_31_0_b0 != 0 ) { // Switch to crash crash mode code
    	main_repl();
    	return;	// Won't execute the normal mode mode
    }
#endif
    // Normal mode code
	CKCON = 0x00;

    EA = 0;
	
	reg_PIN_GPO_LANE_7_0 = 0x01;  //test
	short_delay(); //100nS @400MHz
	reg_PIN_GPO_LANE_7_0 = 0; 
	
	// cmx_MCU_INIT_DONE = 0;	// Default to 0 when XDAT is loaded; Used in simulation. Set to 1 after speed table
    // is copied from pmem to XDAT, and in clear_xdata()
	//reg_SET_MCU_INT_LANE0 = 0;

#ifdef SPD_TBL_IN_PMEM // X2_ROM defined this option
	// For hard reset (PIN_RESET), FW needs to re-copy the speed table
	if ( reg_PHY_FM_RST && ( PHY_STATUS == ST_INIT ) ) {
		CopySpeedTableToXData();	// Copy speed table
		InitPrePowerUp();			// Initialize registers before power up
	}	
#endif

	cpu_init();

    result = performance_test();
	
	PHY_STATUS = PHY_NS;
	PHY_NS = ST_INIT;
	SYNC_STATUS_LANE = IDLE;
	
	pll_cal_timeout_dis_save = cmx_PLL_CAL_TIMEOUT_DIS;
	#ifdef _PCIE_USB_BUILD
	if(reg_PHY_FM_RST){
		if(MCU_INIT_DONE_RD==MCU_INIT) {
			reg_PWRON_SEQ = 1; pwrsq_on = 1;
			// reset_pwr_reg() is in the ROM code which is freezing currently
			// add reset_pwr_reg_ext() for extra regs that need reset
			reset_pwr_reg_ext();
			reset_pwr_reg();
			cmx_PLL_CAL_TIMEOUT_DIS = 1;
			cmx_LANE_DIS_LANE0_7_0 = 0;
			cmx_LANE_DIS_LANE1_7_0 = 0;
			if(cmx_LOAD_CTLE_SPDTBL_CORE_RESET_EN)
				TRAIN_CONTROL_9.BT.B1 = 0; //clear rxtrain pass
		}	
		if(mcuid== master_mcu) {
			reg_CLEAR_PHY_FM_RST = 1;
			reg_CLEAR_PHY_FM_RST = 0;
		}
		PHY_STATUS = ST_INIT;
	}
	#endif //_PCIE_USB_BUILD
	
	MCU_INIT_ST |= MCU_INIT;
	
	if( PHY_STATUS == ST_INIT) {
		clear_xdata(); 
		#ifdef SUPPORT_POWER_SIMPLE
		if (POWERUP_SIMPLE == MOST_SIMPLE_LEVEL)
			PowerUp_Seq_Simple();
		else 
		#endif
		{
			PowerUp_Seq();
		}	
	}
	else {
		clear_normal_mode_cal_en();
	}
	
	#ifndef _SATA_SERDES_BUILD	
	reg_INT_ENABLE_ALL_LANE = 1; 
    EA = 1;
	#else 
	if(pwrsq_on==0) {
		reg_INT_ENABLE_ALL_LANE = 1; 
		EA = 1;
	}	
	#endif
		#ifdef _LAB
	reg_INT_ENABLE_ALL_LANE = 1; 
    EA = 1;
	DBG_Printf("\r\n[mcu%d]-- Welcome to MCUPhy Debug World!! --", reg_MCU_ID_LANE_7_0);
	DBG_Printf("\tBuilt: %s-%s\n\r",__DATE__, __TIME__);	
		#endif
		
    while(1){
	
	#ifdef _SATA_SERDES_BUILD
	#if SUPPORT_DFE_POWERSAVING 
	if(PHY_STATUS != ST_NORMAL){
		//timeout_stop;
		dfe_backon();
	}
	#endif
	#endif
		#ifdef _LAB
		if( PHY_STATUS != old_status) {
			old_status = PHY_STATUS;
			DBG_Printf("\r\n%x", old_status);
		}
		#endif

	    //do process
		switch(PHY_STATUS){
            case ST_SPDCHG: SpeedChange();		break;		
			#ifdef _PCIE_USB_BUILD
			case ST_P1: 	Power_P0s_P1();		break;
			case ST_P1_WK:	Power_P1_P0();		break;
			case ST_P2_P0:	Power_P2_P0();		break;
            case ST_P2: 	Power_P1_P2();	 	break;
			case ST_P2_WK: 	Power_P2_P1();	 	break;
			case ST_P2_BEACON:	Power_P2_BEACON();	break;
			case ST_TXDETRX: Power_P0_TXDETRX();	break;
			case ST_P1_TXDETRX: Power_P1_TXDETRX(); break;
			case ST_P2_TXDETRX: Power_P2_TXDETRX(); break;
			case ST_P1CLKREQ_WK:	Power_P1CLKREQ_P1();	break;
			#endif //_PCIE_USB_BUILD
			#ifdef _SATA_SERDES_BUILD
            case ST_SLUMBER: Power_Slumber();	 	break;
			case ST_SLUMBER_WK: Power_Slumber_Wakeup(); break;
            //case ST_PSLUMBER_TX:
            case ST_PSLUMBER_RX:Power_Patial_Slumber(); break;
			#endif //_SATA_SERDES_BUILD
			case ST_TXTRAIN:
			case ST_RXTRAIN:	
            case ST_TRXTRAIN: TRX_Train();  	break;	
            case ST_DTL:	  RX_Init();		break;
			case ST_PLLREADY: 	break; 
			#ifdef SUPPORT_APTA_TX_TRAIN
            case ST_APTA_TXTRAIN: 
			if(cmx_APTA_TRAIN_SIM_EN || PHY_MCU_REMOTE_REQ_LANE) 
				apta_txtrain(); break;	
			#endif	
            case ST_CAL:	  Calibration(); 		break;
			#ifdef _PCIE_USB_BUILD
			case ST_LANE_MARGIN_EN:  lane_margin_start(); 		break;
			#endif
			case ST_NORMAL: 
				#ifdef _SATA_SERDES_BUILD
				#if SUPPORT_DFE_POWERSAVING 
				power_saving();
		/*		if(reg_MCU_DEBUG5_LANE_7_0 == 1)
					dfe_setoff();
				else if(reg_MCU_DEBUG5_LANE_7_0 == 2)
					dfe_backon();
		*/		
				#endif
				#endif
						    Cal_Cont();
							if(PHY_NS != ST_INIT) break;
							
							#ifdef SUPPORT_RXFFE_ACCAP_EN
							RxFFE_ACCap(); //dfe cont run
							#endif						
							#ifdef SUPPORT_REALTIME_PHASE_ADAPT
							Phase_Adaptation();
							#endif						
							PHY_STATUS = ST_NORMAL;
							
				break;
		}	
		
		//check event
		if(do_rxinit || reg_INT_RX_INIT_RISE_ISR_LANE) {
			if(SKIP_RX_INIT) {
				reg_RX_INIT_DONE_LANE = 0; 
				reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 1;
				reg_INT_RX_INIT_RISE_ISR_CLEAR_LANE = 0;
				if(phy_mode==PCIE) 
					delay01(100);
				SKIP_RX_INIT = 0;
				do_rxinit = 0;
				reg_RX_INIT_DONE_LANE = 1; 		
			}
			else PHY_STATUS = ST_DTL; 
		}
		else if(do_train | do_rxtrain)   {PHY_STATUS = ST_TRXTRAIN; }	
		//#ifdef _28G_X2				
		else if(do_train==0 && reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE) {
			reg_MCU_DEBUG0_LANE_7_0 = 0x98;
			txtrain_force_restart();			
		}
		//#endif
		else if(do_rxtrain==0 && reg_PIN_RX_TRAIN_ENABLE_RD_LANE) {
			reg_MCU_DEBUG0_LANE_7_0 = 0x99;
			EA = 0;
			#ifdef _28G_X2
			TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0x01;
			TRX_TRAIN_IF_INTERRUPT_CLEAR_LANE.BT.B0 = 0;	
			#else
			reg_PIN_RX_TRAIN_ENABLE_ISR_LANE = 0;
			#endif
			
			PHY_STATUS = ST_TRXTRAIN; reg_RX_TRAIN_ON_LANE = 1; do_rxtrain = 1;
			EA = 1;
		}
		#ifdef SUPPORT_APTA_TX_TRAIN
		else if(do_rx_apta) {PHY_STATUS = ST_APTA_TXTRAIN; }
		else if(reg_PIN_PAPTA_TRAIN_ENABLE_ISR_LANE) { 
				EA = 0;
				reg_PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
				reg_PIN_PAPTA_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;
		
				if(reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE) {
					if(do_rx_apta==0)
						do_rx_apta = 1;
					apta_sim_state = 0;
					reg_ANA_TX_EM_PEAK_EN_LANE = 1;
					reg_REMOTE_CTRL_FIELD_HIGH_LANE = 0;
					reg_REMOTE_CTRL_FIELD_HIGH_LANE = 1;
					reg_REMOTE_CTRL_FIELD_HIGH_LANE = 0;
					PHY_STATUS = ST_APTA_TXTRAIN; 
				}
				EA =1;
		}
		#endif
		else if(reg_DFE_MARGIN_EN_LANE && pcie_usb_mode) {PHY_STATUS = ST_LANE_MARGIN_EN;}
		else if(cmx_CAL_START) { PHY_STATUS = ST_CAL; cal_start_on = 1;}
		#ifdef SUPPORT_CMD_IF
		if(PHY_MCU_REMOTE_REQ_LANE && lnx_PHY_MCU_LOCAL_ACK_LANE==0) 
			cmd_if();	
		#ifdef _28G_X4_R2P1
		else if(PHY_MCU_REMOTE_REQ_LANE==0) 
			lnx_PHY_MCU_LOCAL_ACK_LANE = 0;
		#endif
		#endif
		
		#ifdef _LAB
		uart_monitor();
		#endif
		

		//check sq auto txtrain
		if(lnx_SQ_AUTO_TRAIN_LANE==1) {
			sq_auto_train_enable();	
		}

		if(PHY_NS != ST_INIT) {
			PHY_STATUS = PHY_NS;
			PHY_NS = ST_INIT;
			do_wake = 0;
			continue;				
		}		

	    //EOM 
	    Check_EOM_Stage_fmExt();
		
		//F0d
		#ifdef SUPPORT_CHECK_NORMAL_F0D
		Check_F0d();
		#endif

		#ifdef SUPPORT_CLI
		if( lnx_CLI_START_LANE == 1 ) {
		#ifdef _SATA_SERDES_BUILD
		#if SUPPORT_DFE_POWERSAVING 
			//timeout_stop;
			dfe_backon();
		#endif
		#endif
			cli_monitor();
		}
		#endif
		
		#ifdef _28G_X2
		//Watchdog: Toggle the reset register to reset WD counter
		reg_MCU_WDT_RESET_LANE = !reg_MCU_WDT_RESET_LANE;
		#endif
    } 
	
}

