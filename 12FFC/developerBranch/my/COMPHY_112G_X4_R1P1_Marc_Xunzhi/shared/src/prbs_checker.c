#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

// must put this function in bank1!
uint16_t get_program_memory_bank1(uint16_t addr) BANKING_CTRL{
	__asm
	clr 	a
	movc	a,@a+dptr
	mov		r1,a
	
	mov		a,#0x01
	movc	a,@a+dptr
	mov		r2,a
	
	// output
	mov		dpl,r1
	mov		dph,r2
	__endasm;
}

#define reg_PT_ERR_CNT_LANE_31_0    PT_COUNTER3.VAL
#define reg_PT_CNT_LANE_31_0    PT_COUNTER1.VAL
#define reg_PT_CNT_MAX_LANE_31_0    PT_COUNTER5.VAL

// Many RX settings can copy TX ones as "old 112G(non-7nm) only supports one lane Tx training. It doesn’t support Training separation mode.(Xu)"

// called at txtrain init
void prbs_checker_init (void) BANKING_CTRL {
#ifdef SUPPORT_PRBS_CHECKER
    uint8_t sel_bit0;
    uint8_t sel_bit1;
    uint8_t sel_bit2;
    uint8_t sel_bit;
    uint32_t total_bits = 10000000;
    uint32_t scaling_factor = 1000; // 1e10 total
    
    sel_bit0 = reg_TRAIN_RX_SEL_BITS_LANE ;
    sel_bit1 = ~reg_RX_PAM2_EN_LANE & 0x01;
    sel_bit2 = ~reg_RX_HALFRATE_EN_LANE & 0x01;

    sel_bit = sel_bit0 | (sel_bit1<<1) | (sel_bit2<<2) ;

    // 5.1	Select PRBS coding according to PHY RX data data rate
    //may use speed table to set reg_TX_TRAIN_PAT_SEL_RX_LANE_1_0
    reg_TX_TRAIN_PAT_SEL_RX_LANE_1_0 = reg_TX_TRAIN_PAT_SEL_LANE_1_0;

    // 5.2	Set the number of bit data to be check in one frame in RX
    //need to create new table
    reg_TRAIN_PAT_NUM_RX_LANE_9_0_b1 = reg_TRAIN_PAT_NUM_LANE_9_0_b1;
    reg_TRAIN_PAT_NUM_RX_LANE_9_0_b0 = reg_TRAIN_PAT_NUM_LANE_9_0_b0;

    /* 5.3	Set the total number of bit data to be check based on data bit width
    Assume 10M (0x989680) bits data to check

    sel_bit[2:0]={ ~reg_RX_HALFRATE_EN_LANE, ~reg_RX_PAM2_EN_LANE, reg_TRAIN_RX_SEL_BITS_LANE};

    32 bits  : reg_pt_cnt_max_lane[47:0] = 48'd312500; //'h4C4B4 = 10M bit
    40 bits  : reg_pt_cnt_max_lane[47:0] = 48'd250000 ; //'h3D090 =10M bit
    64 bits : reg_pt_cnt_max_lane[47:0] = 48'd156250 ; //'h2625A = 10M bit
    80 bits : reg_pt_cnt_max_lane[47:0] = 48'd125000 ; //'h1E848 =10M bit
    128 bits : reg_pt_cnt_max_lane[47:0] = 48'd78125 ; //'h1312D = 10M bit
    160 bits : reg_pt_cnt_max_lane[47:0] = 48'd62500 ; //'hF424 = 10M bit
    
    312500*10000 (1e11) is still uint32_t!
    */
	save_pt_cnt_max_47_32 = reg_PT_CNT_MAX_LANE_47_32;
	save_pt_cnt_max_31_0 = reg_PT_CNT_MAX_LANE_31_0;

    reg_PT_CNT_MAX_LANE_47_32 = 0x0000;
    reg_PT_CNT_MAX_LANE_31_0  = 0L;

    switch(sel_bit) {
    case 0x0 :  //40 bit
        reg_PT_CNT_MAX_LANE_31_0 = total_bits/40L;
        break;
    case 0x1 : //32 bit 
        reg_PT_CNT_MAX_LANE_31_0 = total_bits/32L;
        break;
    case 0x2 : //80 bit 
        reg_PT_CNT_MAX_LANE_31_0 = total_bits/80L;
        break;
    case 0x3 : //64 bit 
        reg_PT_CNT_MAX_LANE_31_0 = total_bits/64L;
        break;
    case 0x6 : //160 bit 
        reg_PT_CNT_MAX_LANE_31_0 = total_bits/160L;
        break;
    case 0x7 : //128 bit 
        reg_PT_CNT_MAX_LANE_31_0 = total_bits/128L;
        break;
    default : break;
    } //end of switch(sel_bit)
    reg_PT_CNT_MAX_LANE_31_0 *= scaling_factor;
    
    save_pt_en_lane = reg_PT_EN_LANE;
    reg_PT_EN_LANE = 0;
#endif
} //end of prbs_checker_init

// start checker
void prbs_checker_start (void) BANKING_CTRL {
#ifdef SUPPORT_PRBS_CHECKER
    reg_TX_TRAIN_PAT_CODING_SEL_RX_LANE_1_0 = reg_INT_LOCAL_CTRL_PAT_LANE_1_0;
    reg_TRAIN_PRBS_CHECK_EN_LANE = 1;
    delay_ram(T_p5us);
    // Consider vary with bits and speed? 53G 1e10 ~1s
    timeout2_start(PRBS_TIMER, 2000000);// 2000ms
#endif
}

// waiting for checker to be ready
void prbs_checker_check_ber (void) BANKING_CTRL {
#ifdef SUPPORT_PRBS_CHECKER
	uint32_t temp_counter = 0;
    uint8_t drv_prbs_checker_ber = 0xff;
    uint8_t first_digit = 0xf;
	lnx_PRBS_DEBUG0_LANE_7_0 = drv_prbs_checker_ber;
    
    while(!reg_PT_CNT_READY_LANE) // need to add a timeout function
    {
        // checker cannot find enough valid bits
		if(timeout2_check(PRBS_TIMER)){
		#if _DBG_PRBS
			DBG_Printf("\r\nTO!\r\n");
		#endif
			return;
		}
    }
    #if _DBG_PRBS
    DBG_Printf("\r\nPRBS Time:%lu\r\n", timer2_check(PRBS_TIMER));
    DBG_Printf("ERR CNT:%lu\r\n",reg_PT_ERR_CNT_LANE_31_0);
    DBG_Printf("RX CNT:%lu %u\r\n",reg_PT_CNT_LANE_31_0, reg_PT_CNT_READY_LANE);
    #endif
    #if _DBG_PRBS
    if(reg_PT_CNT_LANE_31_0<reg_PT_CNT_MAX_LANE_31_0){
    	DBG_Printf("UF!\r\n");
    }
    #endif
    
    //
    /// Read error count

    if (reg_PT_ERR_CNT_LANE_47_32 !=0) {
    	drv_prbs_checker_ber = 0xff;
    } else {
    	drv_prbs_checker_ber = 7+3+1;// related to total bits
    	temp_counter = reg_PT_ERR_CNT_LANE_31_0;
    	while(temp_counter>0){
    		if(temp_counter<10) first_digit = temp_counter;
    		drv_prbs_checker_ber--;
    		temp_counter/=10L;
    	}
    }
    #if _DBG_PRBS
    DBG_Printf("BER:%ue-%u\r\n",first_digit,drv_prbs_checker_ber);
    #endif
    lnx_PRBS_DEBUG0_LANE_7_0 = first_digit<<4 | drv_prbs_checker_ber&0xf;
#endif
}

// stop checker and clear counters
void prbs_checker_stop(void) BANKING_CTRL {
#ifdef SUPPORT_PRBS_CHECKER
    reg_PT_CNT_RST_LANE = 1;
    reg_TRAIN_PRBS_CHECK_EN_LANE =0;
    reg_PT_CNT_RST_LANE = 0;
#endif
}

// called when txtrain done
void prbs_checker_uninit(void) BANKING_CTRL {
#ifdef SUPPORT_PRBS_CHECKER
    reg_TX_TRAIN_PAT_SEL_RX_LANE_1_0 = 0;
    reg_PT_CNT_MAX_LANE_47_32 = save_pt_cnt_max_47_32;
	reg_PT_CNT_MAX_LANE_31_0 = save_pt_cnt_max_31_0;
    reg_PT_EN_LANE = save_pt_en_lane;
#endif
}

