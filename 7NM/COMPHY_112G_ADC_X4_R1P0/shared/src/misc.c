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
	while((reg_MCU_DEBUGA_LANE_7_0=0x4C)&&i-->0) {
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
void delay(int16_t tdelay) {
	register int16_t a;
	int16_t i, t;

	t = tdelay;
	if (t < 3) {
		// just to get here, it takes more than 200ns, so just return if the delay is 200 nSec or less.
		return;
	}

	if( ( mcuid != MCU_CMN && PHY_STATUS == ST_POSEQ && BYPASS_POWERON_DELAY ) ||
		   ( BYPASS_DELAY>=4 )) {
			//bypass delay
			return;
	}
	else if( ( mcuid == MCU_CMN && PHY_STATUS_CMN == ST_POSEQ && BYPASS_POWERON_DELAY ) ||
		   ( BYPASS_DELAY>=4 )) {
			//bypass delay
			return;
	}

	if (t > T_128us) {
		// add protection to make sure the time delay is within a valid range
		t = T_128us;
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
		while((reg_MCU_DEBUGA_LANE_7_0=0x4D)&&TF0 != 1) {};

		/* Stop Timer 0 and clear overflow flag */
		TR0 = 0;
		TF0 = 0;
	} else {
		if(( PHY_STATUS == ST_POSEQ && BYPASS_POWERON_DELAY ) ||
		   ( (PHY_STATUS != ST_DTL) && (BYPASS_DELAY >= 4) )) {
			// Don't bypass delay if PHY_STATUS = ST_DTL
		} else {
			a >>= BYPASS_DELAY;
			TMR0 = a;
			TR0 = 1;
			while((reg_MCU_DEBUGA_LANE_7_0=0x4E)&&TF0 != 1) {};
			TR0 = 0;
			TF0 = 0;
		}
	}
}

/*bool wait_for(bool * done_sig_ptr, uint16_t timer) //unit is 1us
{	
    	timeout_start(timer); //unit is 1us
	while((reg_MCU_DEBUGA_LANE_7_0=0x4F)&&(!(*done_sig_ptr)) // if done sig -> out
		&& (!timeout));  // if timeout  -> out

	if(timeout) return false;// module fail
	else        return true; // module pass
}*/


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

/*
 * generic 2's complement to int8_t conversion function
 */
int8_t reg2int(uint8_t val, uint8_t bit_width) { // assumption bit_width <= 8 and val <= (1<<bit_width)-1
	return val < (1<<(bit_width-1)) ? val : -(1<<bit_width)+(int8_t)val;
}

uint8_t conv_thermo_2_bi(uint8_t val) {
	uint8_t index = 0;

	while((reg_MCU_DEBUGA_LANE_7_0=0x50)&&val!=0) {
		val >>= 1; index++;
	}
	return index;
}

void memset0(uint8_t *dest, int n) {
	int i;

	for(i=0; i<n; i++) {
		dest[i] = 0;
	}
}

#ifndef USE_DMA_DFE
void memcpy(uint8_t *des, uint8_t *src, int n) {
	int i;

	for(i=0; i<n; i++) {
		*des++ = *src++;
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
	while((reg_MCU_DEBUGA_LANE_7_0=0x51)&&DMASEL&0x80);

}

//void memset0(uint8_t *dest, int n) {
//
//	DMASEL = DMA1;
//	DMAM0 = 0x64; //10100100
//	DMAM1 = 0x1f;
//	DMAS2 = 0; DMAT2 = 0; DMAC2 = 0;
//	DMASA = (uint16_t)&DFE_CONTROL_2;
//	DMATA = (uint16_t)dest;
//	DMAC = n - 1;
//	DMASEL = 0x81;
//	while((reg_MCU_DEBUGA_LANE_7_0=0x52)&&DMASEL&0x80);
//}

#endif

//union uu {
//	struct {
//		uint8_t lo,hi ;
//	} s;
//	unsigned int val;
//} ;
//
//
//
//
//uint16_t u16mul (uint16_t a, uint16_t b) 
//{
//	register union uu x;
//	register union uu y;
//	union uu t;
//	x.val = a;
//	y.val = b;
//
//	t.val = x.s.lo * y.s.lo;
//	t.s.hi += (x.s.lo * y.s.hi) + (x.s.hi * y.s.lo);
//
//	return t.val;
//}
//
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
#ifdef NEED_REMAP_REGS
void tsen_on(void) BANKING_CTRL {}
void tsen_adc_sw(bool tsen_mode) BANKING_CTRL {}
int16_t read_tsen(bool tsen) BANKING_CTRL {}
#else
void tsen_on(void) BANKING_CTRL {

	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.

	if(BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
		uint8_t i = 100;
		while(i-->0) { //20ms delay 
		delay(T_20us); 
		delay(T_20us);
		delay(T_20us); 
		delay(T_20us);
		delay(T_20us);
		}
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
	reg_TSEN_ADC_SINGLE_DIFF = 1; //0; applied to tsen only
	reg_TSEN_ADC_DEBUG_EN = 0; // Workaround requested by Zubir
	reg_TSEN_ADC_RSVD_7_0 = 0x10; // dem_en=1
	/*
	 * cmn_ana_rsvdb register mapping
	 * cmn_ana_rsvdb[1] assigned to ~AVDD_VREF_SEL[1]
	 * cmn_ana_rsvdb[0] assigned to AVDD_VREF_SEL[0]
	 * cmn_ana_rsvdb[2] assigned to AVDD_FILTER_EN
	 */
	if (cmx_AVDD_VOL_SEL) { // Analog VDD = 1.2V
		reg_CMN_ANA_RSVDB_7_0 |= 0x00; //0X02; //set AVDD_VREF_SEL[1:0] = 10b; 1.2V AVDD input with 1V VREF
	} else {
		reg_CMN_ANA_RSVDB_7_0 |= 0x01; //0X03; //set AVDD_VREF_SEL[1:0] = 11b; 0.9V AVDD input with 1V VREF
	}

	reg_ANA_TSEN_ADC_RESET = 0;
	delay(T_20us);

	reg_ANA_TSEN_ADC_EN = 1;
	delay(T_64us); //T_100us; Zubir requested to increase delay
	delay(T_64us); //T_100us; Zubir requested to increase delay

	reg_ANA_TSEN_ADC_START = 1;
	//while((reg_MCU_DEBUGA_LANE_7_0=0x53)&&reg_TSEN_ADC_RDY==0);
	// (from Zubir) need to delay 500usec for the circuit to settle; set the timeout to 2msec
	wait_for(reg_TSEN_ADC_RDY, 2000); // Zhendong asked FW to use timeout
	cur_tsen_mode = 1; // temperature mode

}

void tsen_adc_sw(bool tsen_mode) BANKING_CTRL {

	if (tsen_mode == cur_tsen_mode) return;

	reg_ANA_TSEN_ADC_EN = 0;
	reg_ANA_TSEN_ADC_START = 0;
	delay(T_40us); // wait for at least 4x CLK_OUT cycles
	reg_ANA_TSEN_ADC_RESET = 1;
	delay(T_20us); // hold for at least 2x CLK_OUT cycles to release
	if (tsen_mode) {
		reg_TSEN_ADC_MODE_1_0 = 0; // Internal sensor
		reg_TSEN_ADC_OSR_1_0 = 3; // OSR = 256
		//reg_TSEN_ADC_CAL = 1; // Automatic self-offset-cal enforced, TSENE_AUXADC in normal mode
		reg_TSEN_ADC_CONT_SEL = 1; // Continuous mode
		
	} else {
		reg_TSEN_ADC_MODE_1_0 = 1; // remote ADC input
		reg_TSEN_ADC_OSR_1_0 = 0; // OSR = 1
		//reg_TSEN_ADC_CAL = 1; // Automatic self-offset-cal enforced, TSENE_AUXADC in normal mode
		reg_TSEN_ADC_CONT_SEL = 0; // Single-shot mode
	}
	reg_ANA_TSEN_ADC_RESET = 0;
	reg_ANA_TSEN_ADC_EN = 1;
	delay(T_64us);
	delay(T_64us);

	reg_ANA_TSEN_ADC_START = 1;
	while((reg_MCU_DEBUGA_LANE_7_0=0x54)&&reg_TSEN_ADC_RDY==0);
	cur_tsen_mode = tsen_mode;
}

int16_t read_tsen(bool tsen) BANKING_CTRL {
	int16_t dat;
	int32_t result;

	// initial ANA_TSEN_ADC_RDY time is 2~6mS/12mS.
	if(reg_PWRON_SEQ_LANE &&  BYPASS_DELAY==0 && cmx_PROCESS_CAL_EXT_EN==0) {
		while((reg_MCU_DEBUGA_LANE_7_0=0x55)&&reg_TSEN_ADC_RDY==0);
	}

	tsen_adc_sw(tsen);

	reg_TSEN_ADC_RD_REQ = 1;

	if( (reg_TSEN_ADC_DATA_15_0_b1 & 0x80) && tsen ) {
		//dat = 0xfc00 | (reg_TSEN_ADC_DATA_15_0_b1<<2) | (reg_TSEN_ADC_DATA_15_0_b0>>6);
		dat = (reg_TSEN_ADC_DATA_15_0_b1<<2) | (reg_TSEN_ADC_DATA_15_0_b0>>6);
	}
	else {
		dat = (reg_TSEN_ADC_DATA_15_0_b1<<2) | (reg_TSEN_ADC_DATA_15_0_b0>>6);
	}

	//reg_TSEN_ADC_RD_REQ = 0; //don't disable!
#ifdef _LAB
	//if(PHY_STATUS>ST_POSEQ) {
	//	DBG_Printf("\r\ntemp=%d", dat);
	//}
#endif

	if (tsen) {
		if(dat==0&& reg_TSEN_ADC_RDY==0) dat = -75;

		// tsene_gain=0.338; tsene_offset=-183; T(celsius)=dat*tsene_gain+tsene_offset
		result = (((int32_t)dat * 338) - 183000 + 500) / 1000;
	}
	else {
		// adc_gain=0.9766; V(mV)=V(code)*adc_gain
		result = (((int32_t)dat * 9766) + 5000) / 10000;
	}

	cmx_TSEN_SEL = tsen; // read temperature or voltage
	cmx_TSEN_DATA_15_0 = (int16_t)result;

	return (int16_t)result;
}
#endif

void set_test_pattern(uint8_t pt_4t_en) BANKING_CTRL {

	save_local_ana_tx2rx_lpbk_en_lane = reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE;
	save_pt_tx_pattern_sel_lane_5_0   = reg_PT_TX_PATTERN_SEL_LANE_5_0;

	save_pt_tx_en_lane                = reg_PT_TX_EN_LANE;
	save_pt_tx_clk_en_lane            = reg_PT_TX_CLK_EN_LANE;

	reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = 1;
	if( pt_4t_en ) {
		reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x0B;
	}
	else { //PRBS7
		reg_PT_TX_PATTERN_SEL_LANE_5_0 = 0x10;
	}

	reg_PT_TX_EN_LANE = 1;
	reg_PT_TX_CLK_EN_LANE = 1;
}

void recover_test_pattern(void) BANKING_CTRL {

	reg_PT_TX_PATTERN_SEL_LANE_5_0 = save_pt_tx_pattern_sel_lane_5_0;

	reg_PT_TX_EN_LANE                 = save_pt_tx_en_lane;
	reg_PT_TX_CLK_EN_LANE             = save_pt_tx_clk_en_lane;
	reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  = save_local_ana_tx2rx_lpbk_en_lane;
}

/*
 * Module is_pause(mask) waits for the PAUSE_LANE signal to toggle before exit.
 *
 * mask is the bit mask of the debug functional block
 *   bit 0 = training
 *   bit 1 = calibrations
 *   bit 2 = drv_adc_cal
 *   bit 3 = init_adc_sat_check (training)
 */
void is_pause(uint8_t mask) BANKING_CTRL {
	if (lnx_TRX_TRAIN_DEBUG_EN_LANE_7_0 & mask) {
		while((reg_MCU_DEBUGA_LANE_7_0=0x56)&&!lnx_PAUSE_LANE);
		while((reg_MCU_DEBUGA_LANE_7_0=0x57)&&lnx_PAUSE_LANE);
	}
}

void timer2_init() BANKING_CTRL{
            
    timer2_msb = 0;    
    T2CON = 0x60;                
    TF2 = 0;                 
    TMR2 = 0;            
    ET2 = 1;             
    T2CON = 0x62;
}

// TH2 TL2
uint32_t get_time() BANKING_CTRL{    
    uint32_t current_time = 0;
  
    EA=0; // do not block int in case missing msb inc      
    T2CON = 0x60; // if using other guard instead, make sure TH2 is always correct        
    current_time = (uint32_t)timer2_msb<<16 | (uint32_t)TMR2&0xffff;              
    T2CON = 0x62;                
    EA=1;                  
    return current_time;             
}

// Users make sure timer_index<MAX_TIMERS
// Please user explicit type conversion on duration (uint32_t)!
void timeout2_start(uint8_t timer_index, uint32_t duration) BANKING_CTRL{
    timeout2_timers[timer_index].start_time = get_time();
    timeout2_timers[timer_index].duration = duration;
}

// timeout or timeout2_running==0, return 1
uint8_t timeout2_check(uint8_t timer_index) BANKING_CTRL{
    uint32_t time = get_time();           
    if(time-timeout2_timers[timer_index].start_time > timeout2_timers[timer_index].duration){                      
        //DBG_Printf("%lu-%lu>%lu\r\n",time,timeout2_timers[timer_index].start_time,timeout2_timers[timer_index].duration);                       
        return 1;                             
    }
    else                 
        return 0;         
}

// in common.h:
//#define timeout2_running(a) (timeout2_timers[a].duration != 0)
//#define timer2_start(a) timeout2_start((a),1L)
//#define timer2_stop(a) timeout2_stop(a)
void timeout2_stop(uint8_t timer_index) BANKING_CTRL{    
    uint32_t time = timer2_check(timer_index);        
    if(timeout2_running(timer_index)){                 
        timeout2_timers[timer_index].duration = 0;
                                        
        switch(timer_index){                                
            case TRAINING_TIMER:                            
                lnx_TIME_DURATION_INFO_LANE_31_0_b0 = time &0xff;                                
                lnx_TIME_DURATION_INFO_LANE_31_0_b1 = (time >> 8)&0xff;                                
                lnx_TIME_DURATION_INFO_LANE_31_0_b2 = (time >> 16)&0xff;                                
                lnx_TIME_DURATION_INFO_LANE_31_0_b3 = (time >> 24)&0xff;                                
                break;                                                        
#if 0
            case TEST_TIMER:     
                lnx_MCU_RESERVEDX00_LANE_7_0 = time&0xff;                            
                lnx_MCU_RESERVEDX01_LANE_7_0 = time>>8&0xff;                                                         
                lnx_MCU_RESERVEDX02_LANE_7_0 = time>>16&0xff;                                                            
                lnx_MCU_RESERVEDX03_LANE_7_0 = time>>24&0xff;                                                             
                break;                                                             
#endif                      
        }               
    }
}

uint32_t timer2_check(uint8_t timer_index) BANKING_CTRL{    
    uint32_t time = get_time();        
    return time-timeout2_timers[timer_index].start_time;
}

