/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file misc.c
* \purpose Miscellaneous functions
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

void short_delay(void) { //200nS
	__asm
		nop
		nop		
		nop
		nop		
	__endasm;	
}

void short_delay_0(void) {
	//doesn't do anything.
}

void short_delay_4g(void) {
	int i = 10;
	while(i-->0) {
		short_delay();	
	}	
}

/*
 *  delay()
 *    t - one unit equal to 1/10 uSec. I.e. to delay 1usec, t = 10.
 *
 *  delay uses timer0 to setup the delay. The timer frequency is 1/12th of the MCU frequency.
 *  For the delay of t, the time delay, a = t/10*MCU_frequency/12 = t*MCU_frequency/(2*5 * 2*2*3)
 *  mcuclk_mc = MCU_frequency / 15
 *  so we have a = t * mcuclk_mc / 8
 */
void delay(int16_t t) {
	register int16_t a;
	int16_t i;

	if (t < 3) {
		// just to get here, it takes more than 200ns, so just return if the delay is 200 nSec or less.
		return;
	}
	else if( ( mcuid != MCU_CMN && PHY_STATUS == ST_POSEQ && cmx_BYPASS_POWER_ON_DELAY ) ||
		   ( BYPASS_DELAY>=4 )) { 
			//bypass delay
			return;
	}
	else if( ( mcuid == MCU_CMN && PHY_STATUS_CMN == ST_POSEQ && cmx_BYPASS_POWER_ON_DELAY ) ||
		   ( BYPASS_DELAY>=4 )) { 
			//bypass delay
			return;
	}	
	else if (t < 11) {
		for (i = 3; i < t; i++) {
			__asm
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
				nop
			__endasm;
		}
		return;
	}
	if (mcuid == MCU_CMN) {
		a = cmx_MCUCLK_MC_7_0*t; //elapse time 675nSec
	}
	else if (mcuid != MCU_CMN) {
		a = mcuclk_mc*t; //elapse time 675nSec
	}
	
	a += 4; a >>= 3; // divide by 8
	if (a <= 25) return;
	a = -a;

	if (BYPASS_DELAY == 0) {
		TMR0 = a + 25;  //a+compensation

		/* Start Timer 0 */
		TR0 = 1;

		/* LOOP around until Timer 0 overflows */
		while (TF0 != 1) {};

		/* Stop Timer 0 and clear overflow flag */
		TR0 = 0;
		TF0 = 0;
	} else {
		a >>= BYPASS_DELAY;
		TMR0 = a;
		TR0 = 1;
		while (TF0 != 1) {};
		TR0 = 0;
		TF0 = 0;

	}
}


int8_t clamp(int8_t a, int8_t ub, int8_t db){
    return a<db?db:a>ub?ub:a;
}

uint8_t clamp_u8(uint8_t a, uint8_t ub, uint8_t db){
    //assert ub>db
	//Printf("\r\n ++(clamp_u8): %d %d %d", a, ub, db);
    return a<db?db:a>ub?ub:a;
}

int16_t clamp16(int16_t a, int16_t ub, int16_t db){
    return a<db?db:a>ub?ub:a;
}

int8_t abs(int8_t a){
    return a>=0?a:-a;
}

int16_t abs16(int16_t a){
    return a>=0?a:-a;
}

int8_t max(int8_t a, int8_t b) {
    return a>b?a:b;
}

int8_t min(int8_t a, int8_t b) {
    return a<b?a:b;
}

uint8_t conv_thermo_2_bi(uint8_t val) {
	uint8_t index = 0;

	while(val!=0) {
		val >>= 1; index++;
	}
	return index;
}


__code uint8_t gray2bin[] = {0, 1, 3, 2, 7, 6, 4, 5, 15, 14, 12, 13, 8, 9, 11, 10};
__code uint8_t bin2gray[] = {0, 1, 3, 2, 6, 7, 5, 4, 12, 13, 15, 14, 10, 11, 9, 8, };

uint8_t conv_gray2bin(uint8_t gray) {
	return gray2bin[gray];
}

uint8_t conv_bin2gray(uint8_t bin) {
	return bin2gray[bin];
}

#ifndef USE_DMA_DFE
void memcpy(uint8_t *des, uint8_t *src, int n) {
	int i;

	for(i=0; i<n; i++) {
		*des++ = *src++;
	}
}

void memset0(uint8_t *dest, int n) {
	int i;

	for(i=0; i<n; i++) {
		dest[i] = 0;
	}
}
#else
void memcpy(uint8_t *des, uint8_t *src, int n) {

	DMASEL = DMA0;
	DMAM0 = 0x66; //01100110
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMASA = (uint16_t)src;
	DMATA = (uint16_t)des;
	DMAC = n - 1;
	DMASEL = 0x80;
	while(DMASEL&0x80);

}

void memset0(uint8_t *dest, int n) {

	DMASEL = DMA1;
	DMAM0 = 0x64; //10100100
	DMAM1 = 0x1f;
	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
	DMASA = (uint16_t)&DFE_CONTROL_2;
	DMATA = (uint16_t)dest;
	DMAC = n - 1;
	DMASEL = 0x81;
	while(DMASEL&0x80);
}

#endif

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
#if 0 //def SUPPORT_TEMP_SINGLE_SHOT_MODE

void tsen_on(void) {

	uint8_t i;
	//if(BYPASS_DELAY!=0 || cmx_BYPASS_POWER_ON_DELAY || cmx_PROCESS_CAL_EXT_EN) return; //TODO
	
	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.

	TR1 = 1;
	i = 0;
	while( i++ < cmx_TSEN_DELAY_WAKEUP_TIME_7_0) {  
		while(!tsen_check); //10mS
		tsen_check = 0;
	}
			
	reg_ANA_TSEN_ADC_EN = 0;
	reg_ANA_TSEN_ADC_RESET = 0;
	delay(T_20us);
	reg_ANA_TSEN_ADC_RESET = 1;
	delay(T_20us);

	reg_TSEN_ADC_MODE_1_0 = 0; // Internal sensor
	reg_TSEN_ADC_OSR_1_0 = 3; // Over Sample Rate (OSR) Select; 11b: OSR = 256
    #ifndef _56G_5NM
	reg_TSEN_ADC_CAL = 1; // Automatic self-offset-cal enforced, TSENE_AUXADC in normal mode
	reg_TSEN_ADC_CONT_SEL = 0 ;//single shot 1; // Continuous mode
	reg_TSEN_ANA_MAXSP_1_0 = 2; // <5MHz
	reg_TSEN_ADC_SINGLE_DIFF = cmx_TSEN_ADC_SINGLE_DIFF_USER_SEL; //0;
	reg_TSEN_ADC_DEBUG_EN = 0;
	reg_TSEN_ADC_RSVD_7_0 = 0x10; // dem_en=1
    #else
    reg_TSEN_ADC_CAL_1_0 = 1; // Automatic self-offset-cal enforced, TSENE_AUXADC in normal mode
	/*reg_TSEN_ADC_CONT_SEL = 1; // Continuous mode*/
    #endif
	/*
	 * cmn_ana_rsvdb register mapping
	 * cmn_ana_rsvdb[1] assigned to ~AVDD_VREF_SEL[1]
	 * cmn_ana_rsvdb[0] assigned to AVDD_VREF_SEL[0]
	 * cmn_ana_rsvdb[2] assigned to AVDD_FILTER_EN
	 */
    #ifndef _56G_5NM
	reg_CMN_ANA_RSVDB_7_0 |= 0x00; //0X02; //set AVDD_VREF_SEL[1:0] = 10b; 1.2V AVDD input with 1V VREF
    #else
	/*reg_CMN_ANA_RSVDB_7_0 |= 0X00; //set AVDD_VREF_SEL[1:0] = 10b; 1.2V AVDD input with 1V VREF*/
    #endif

	reg_ANA_TSEN_ADC_RESET = 0;
	delay(T_20us);

	reg_ANA_TSEN_ADC_EN = 1;

    #ifndef _56G_5NM
	reg_TSEN_ADC_SINGLE_DIFF = cmx_TSEN_ADC_SINGLE_DIFF_USER_SEL; //0;
    #endif

	delay(T_32us);
	delay(T_32us);
	delay(T_32us);
	delay(T_32us);

	reg_TSEN_ADC_RD_REQ = 1;
	reg_ANA_TSEN_ADC_START = 1;
	
	read_tsen_cal();
}
#endif


void check_tsen_ready_0() {

	while(cmx_TEMP_RDY==0);
	
}	

void read_tsen_cal(void)  {
	int16_t dat;
	int32_t temp_cel;
	

	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.
	if(BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
		while(reg_TSEN_ADC_RDY==0);
	}
	
	reg_ANA_TSEN_ADC_START = 0;
	reg_TSEN_ADC_RD_REQ = 1;

	
	if( reg_TSEN_ADC_DATA_15_0_b1 & 0x80 ) {
		//dat = 0xfc00 | (reg_TSEN_ADC_DATA_15_0_b1<<2) | (reg_TSEN_ADC_DATA_15_0_b0>>6);
		dat = (reg_TSEN_ADC_DATA_15_0_b1<<2) | (reg_TSEN_ADC_DATA_15_0_b0>>6);
	}
	else {
		dat = (reg_TSEN_ADC_DATA_15_0_b1<<2) | (reg_TSEN_ADC_DATA_15_0_b0>>6);
	}

	if(dat==0&& reg_TSEN_ADC_RDY==0) {
		dat = -75;
		cmx_TEMP_RDY = 0;
	}
	else {
		cmx_TEMP_RDY = 1;
	}
	//reg_TSEN_ADC_RD_REQ = 0; //don't disable!
#ifdef _LAB
	//if(PHY_STATUS>ST_POSEQ) {
	//	DBG_Printf("\r\ntemp=%d", dat);
	//}
#endif

	// tsene_gain=0.338; tsene_offset=-183; T(celsius)=dat*tsene_gain+tsene_offset
	temp_cel = (((int32_t)dat * 338) - 183000 + 500) / 1000;
	
	cmx_TEMP_RD_2C_7_0 = (uint8_t)temp_cel;

	
	reg_ANA_TSEN_ADC_START = 1;


}

int8_t read_tsen(void)  {

	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.
	if(BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
		while(cmx_TEMP_RDY==0);
	}
	
	return (int8_t) cmx_TEMP_RD_2C_7_0; 
}

//-------------------------
//#else 

void tsen_on(void) {
	uint8_t i = 0;

	if(BYPASS_DELAY!=0 || cmx_BYPASS_POWER_ON_DELAY || cmx_PROCESS_CAL_EXT_EN) return; //TODO
	
	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.
	TR1 = 1;
	while( i++ < cmx_TSEN_DELAY_WAKEUP_TIME_7_0) {  
		while(!tsen_check); //10mS
		tsen_check = 0;
	}	

	reg_ANA_TSEN_ADC_EN = 0;
	reg_ANA_TSEN_ADC_RESET = 0;
	delay(T_20us);
	reg_ANA_TSEN_ADC_RESET = 1;
	delay(T_20us);

	reg_TSEN_ADC_MODE_1_0 = 0; // Internal sensor
	reg_TSEN_ADC_OSR_1_0 = 3; // Over Sample Rate (OSR) Select; 11b: OSR = 256
	reg_TSEN_ADC_CAL = 1; // Automatic self-offset-cal enforced, TSENE_AUXADC in normal mode
	reg_TSEN_ADC_CONT_SEL = 1; // Continuous mode
	reg_TSEN_ANA_MAXSP_1_0 = 2; // <5MHz
	reg_TSEN_ADC_SINGLE_DIFF = cmx_TSEN_ADC_SINGLE_DIFF_USER_SEL; //0;
	reg_TSEN_ADC_DEBUG_EN = 0;
	reg_TSEN_ADC_RSVD_7_0 = 0x10; // dem_en=1
	/*
	 * cmn_ana_rsvdb register mapping
	 * cmn_ana_rsvdb[1] assigned to ~AVDD_VREF_SEL[1]
	 * cmn_ana_rsvdb[0] assigned to AVDD_VREF_SEL[0]
	 * cmn_ana_rsvdb[2] assigned to AVDD_FILTER_EN
	 */
    #ifndef _56G_5NM
	reg_CMN_ANA_RSVDB_7_0 |= 0x00; //0X02; //set AVDD_VREF_SEL[1:0] = 10b; 1.2V AVDD input with 1V VREF
    #else
	/*reg_CMN_ANA_RSVDB_7_0 |= 0X00; //set AVDD_VREF_SEL[1:0] = 10b; 1.2V AVDD input with 1V VREF*/
    #endif

	reg_ANA_TSEN_ADC_RESET = 0;
	delay(T_20us);

	reg_ANA_TSEN_ADC_EN = 1;

    #ifndef _56G_5NM
	reg_TSEN_ADC_SINGLE_DIFF = cmx_TSEN_ADC_SINGLE_DIFF_USER_SEL; //0;
    #endif

	delay(T_32us);
	delay(T_32us);
	delay(T_32us);
	delay(T_32us);

	reg_ANA_TSEN_ADC_START = 1;
	
	//check_tsen_ready();
	if(BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
		while(reg_TSEN_ADC_RDY==0);
	}

}

int8_t read_tsen_cont(void)  {
	int16_t dat;
	int32_t temp_cel;

	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.
	if(reg_PWRON_SEQ_LANE &&  BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
		while(reg_TSEN_ADC_RDY==0);
	}

	reg_TSEN_ADC_RD_REQ = 1;


	if( reg_TSEN_ADC_DATA_15_0_b1 & 0x80 ) {
		//dat = 0xfc00 | (reg_TSEN_ADC_DATA_15_0_b1<<2) | (reg_TSEN_ADC_DATA_15_0_b0>>6);
		dat = (reg_TSEN_ADC_DATA_15_0_b1<<2) | (reg_TSEN_ADC_DATA_15_0_b0>>6);
	}
	else {
		dat = (reg_TSEN_ADC_DATA_15_0_b1<<2) | (reg_TSEN_ADC_DATA_15_0_b0>>6);
	}

	if(dat==0&& reg_TSEN_ADC_RDY==0) dat = -75;

	//reg_TSEN_ADC_RD_REQ = 0; //don't disable!
#ifdef _LAB
	//if(PHY_STATUS>ST_POSEQ) {
	//	DBG_Printf("\r\ntemp=%d", dat);
	//}
#endif

	// tsene_gain=0.338; tsene_offset=-183; T(celsius)=dat*tsene_gain+tsene_offset
	temp_cel = (((int32_t)dat * 338) - 183000 + 500) / 1000;

	cmx_TEMP_RD_2C_7_0 = (uint8_t)temp_cel;

	cmx_TEMP_RDY = 1;

	return (int16_t)temp_cel;
}
 
//#endif //SUPPORT_TEMP_SINGLE_SHOT_MODE

void timer2_init() {
	//timerMSB = 0;
	timer2_msb = 0;
	T2CON = 0x60;
	TF2 = 0;
	TMR2 = 0;
	ET2 = 1;
	T2CON = 0x62;
}

// TH2 TL2
uint32_t get_time() {
	uint32_t current_time = 0;
//	EA=0; // do not block int in case missing msb inc
	T2CON = 0x60; // if using other guard instead, make sure TH2 is always correct
	current_time = (uint32_t)timer2_msb<<16 | (uint32_t)TMR2&0xffff;
	T2CON = 0x62;
//	EA=1;
	return current_time;
}

// Users make sure timer_index<MAX_TIMERS
// Please user explicit type conversion on duration (uint32_t)!
void timeout2_start(uint8_t timer_index, uint32_t duration) {
	timeout2_timers[timer_index].start_time = get_time();
	timeout2_timers[timer_index].duration = duration;
	#if 0
	switch(timer_index){
		case DFE_POWER_SAVING_TIMER:
			lnx_MCU_RESERVEDX04_LANE_7_0 = duration&0xff;
			lnx_MCU_RESERVEDX05_LANE_7_0 = duration>>8&0xff;
			lnx_MCU_RESERVEDX06_LANE_7_0 = duration>>16&0xff;
			lnx_MCU_RESERVEDX07_LANE_7_0 = duration>>24&0xff;
			break;
	}
	#endif
}

// timeout or timeout2_running==0, return 1
uint8_t timeout2_check(uint8_t timer_index) {
	uint32_t time = get_time();
	if(time-timeout2_timers[timer_index].start_time > timeout2_timers[timer_index].duration){
//		DBG_Printf("%lu-%lu>%lu\r\n",time,timeout2_timers[timer_index].start_time,timeout2_timers[timer_index].duration);
		return 1;
	}else
		return 0;
}
// in common.h:
//#define timeout2_running(a) (timeout2_timers[a].duration != 0)
//#define timer2_start(a) timeout2_start((a),1L)
//#define timer2_stop(a) timeout2_stop(a)
void timeout2_stop(uint8_t timer_index) {
	uint32_t time = timer2_check(timer_index);
	if(timeout2_running(timer_index)){
		timeout2_timers[timer_index].duration = 0;
	
		/*reg_MCU_DEBUG4_LANE_7_0 = time&0xff;*/
		/*reg_MCU_DEBUG5_LANE_7_0 = time>>8&0xff;*/
		/*reg_MCU_DEBUG6_LANE_7_0 = time>>16&0xff;*/
		#if 0
		switch(timer_index){
		case DFE_POWER_SAVING_TIMER:
			lnx_MCU_RESERVEDX00_LANE_7_0 = time&0xff;
			lnx_MCU_RESERVEDX01_LANE_7_0 = time>>8&0xff;
			lnx_MCU_RESERVEDX02_LANE_7_0 = time>>16&0xff;
			lnx_MCU_RESERVEDX03_LANE_7_0 = time>>24&0xff;
			break;
		}
		#endif
	}
}

uint32_t timer2_check(uint8_t timer_index) {
	uint32_t time = get_time();
	return time-timeout2_timers[timer_index].start_time;
}

