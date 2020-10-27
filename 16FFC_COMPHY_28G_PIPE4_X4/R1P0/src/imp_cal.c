/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_cal.c
* \purpose IMP calibration
* \History
*	10/15/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

/**
 * \module TX IMP Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  
 *    Output: 
*/
#define RX_IMPCAL_EN                    reg_RXIMPCAL_EN_LANE
//#define RXIMP_IVREF                      reg_IMPCAL_RX_LANE_4_0

#define RXIMP_IVREF			reg_RXIMP_IVREF_4_0

#define RCAL_2ND_EN                     reg_RCAL_2ND_EN_LANE
#define TXRX_IMPCALOUT                  reg_ANA_CMN_IMPCAL_OUT_RD 
#define TXRXIMP_CKCAL                   reg_TRX_IMPCAL_CLK

#define TX_IMPCAL_EN			reg_TX_IMPCAL_EN_LANE
#define TX_IMPCAL_SIDE			reg_TX_IMPCAL_SIDE_LANE
#define N_TUNE				reg_TXIMP_TUNEN_LANE_3_0
#define N_TUNE0				reg_TXIMP_TUNEN0_LANE_2_0
#define P_TUNE				reg_TXIMP_TUNEP_LANE_3_0
#define P_TUNE0				reg_TXIMP_TUNEP0_LANE_2_0
#define RCAL_N				reg_TX_IMPCAL_BOT_LANE
#define RCALP_2ND_EN			reg_RCAL_2ND_EN_LANE

#define dir				reg_MCU_DEBUG1_LANE_7_0
#define pre_val				reg_MCU_DEBUG4_LANE_7_0

__code uint8_t tximp_thermo_tb[] = {
  0x0, //000
  0x1, //001 
  0x3, //011
  0x7, //111
};

void tximp_cal( void ){

	//uint8_t i, dir, cnt, pre_val;
	uint8_t i, cnt, thermo_index, tmp_index;
	uint8_t tximp[4], tximp_0[4];
	uint16_t sum=0, ave=0, ave_0=0;
	
	lnx_TXIMP_CAL_DONE_LANE = 0;
	lnx_TXIMP_CAL_PASS_LANE = 0;
	
	dir = 0; cnt = 0;
	PHY_STATUS = ST_TXIMP_CAL;
	
	TX_IMPCAL_EN = 1;

	//start
	N_TUNE = 0x0f;	
	N_TUNE0 = 0x7; // 1/6LSB of N_TUNE
	P_TUNE = 0x00; //
	P_TUNE0 = 0x0; // 1/6LSB of P_TUNE
	//thermo_index = 3;
	
	//N_MOS
	RCALP_2ND_EN = 0;
	TX_IMPCAL_SIDE = 0;
	RCAL_N = 1;
	
	for(i=0; i<2; i++) {

		tximp[i]=0; tximp_0[i]=0;

		if(i==1) TX_IMPCAL_SIDE = 1;
		N_TUNE = 0x0f;	
		N_TUNE0 = 0x7; 
		TXRXIMP_CKCAL = 1;
		delay(T_5us);
		TXRXIMP_CKCAL = 0;
		delay(T_2us);
		dir = TXRX_IMPCALOUT;
		delay(T_3us);
		cnt = 0;
		thermo_index = 3;		

		do {
			pre_val = N_TUNE;
			if( TXRX_IMPCALOUT == 1 ) {
				break; //based on the spec, if CMN_IMPCAL_OUT = 1 the calibration is done.
			}
			else {
			    if(N_TUNE>0)
				N_TUNE--;
			}

			TXRXIMP_CKCAL = 1;
			delay(T_5us);
			TXRXIMP_CKCAL = 0;
			delay(T_2us);
			
			if( dir != TXRX_IMPCALOUT ) {
				N_TUNE = pre_val;
				break;
			}
		
			delay(T_3us);

			if( N_TUNE==0 || N_TUNE==0x0f) break;
			
		} while( cnt++<16 );
		
		tximp[i] = (N_TUNE & 0x0f) | 0x00; 

		delay(T_3us);
		TXRXIMP_CKCAL = 1;
		delay(T_5us);
		TXRXIMP_CKCAL = 0;
		delay(T_2us);
		dir = TXRX_IMPCALOUT;
		delay(T_3us);
	        cnt = 0;
		
		do {
			pre_val = N_TUNE0;
			if( TXRX_IMPCALOUT == 1 ) {
				break; //based on the spec, if TXRX_IMPCALOUT = 1 the calibration is done.
			}
			else {
				if(N_TUNE0>0) {
					thermo_index = thermo_index - 1;
					N_TUNE0 = tximp_thermo_tb[thermo_index];
				} 
			}

			TXRXIMP_CKCAL = 1;
			delay(T_5us);
			TXRXIMP_CKCAL = 0;
			delay(T_2us);
			
			if( dir != TXRX_IMPCALOUT ) {
				break;
			}

			delay(T_3us);

			if( N_TUNE0==0 || N_TUNE0==0x07) break;
			
		} while( cnt++<16 );
		
		tximp_0[i] = (N_TUNE0 & 0x7) | 0x00;

	}

	for(i = 0; i < 3; i++)
	{
		sum = sum + (uint16_t)((tximp_0[0] >> i) & 0x1);	
		sum = sum + (uint16_t)((tximp_0[1] >> i) & 0x1);
	}
	
	sum = sum + (uint16_t)((tximp[0]+tximp[1])*6);
	ave = (uint16_t)((sum >> 1) / 6); //ave = (sum / 2) / 6
	ave_0 = (uint16_t)((sum - (ave * 12)) >> 1);
	lnx_CAL_TXIMP_TUNEN_LANE_7_0 = (uint8_t)(ave & 0x0f);	

	// 3/8 X.Su - Reduce code size - Optimize later.
	tmp_index = ave_0 > 2 ? 3 : ave_0;
	lnx_CAL_TXIMP_TUNEN0_LANE_7_0 = tximp_thermo_tb[ tmp_index ];
/*
	if (ave_0 == 0)
                lnx_CAL_TXIMP_TUNEN0_LANE_7_0 = (uint8_t)(tximp_thermo_tb[0] & 0x07);
        else if (ave_0 == 1)
                lnx_CAL_TXIMP_TUNEN0_LANE_7_0 = (uint8_t)(tximp_thermo_tb[1] & 0x07);
        else if (ave_0 == 2)
                lnx_CAL_TXIMP_TUNEN0_LANE_7_0 = (uint8_t)(tximp_thermo_tb[2]  & 0x07);
        else lnx_CAL_TXIMP_TUNEN0_LANE_7_0 = (uint8_t)(tximp_thermo_tb[3]  & 0x07);
*/

	N_TUNE0 = lnx_CAL_TXIMP_TUNEN0_LANE_7_0;
	N_TUNE = lnx_CAL_TXIMP_TUNEN_LANE_7_0;

	// P MOS
	RCAL_N = 0;

	for(i=0; i<4; i++) {

		tximp[i]=0; tximp_0[i]=0;

		TX_IMPCAL_SIDE = i & 0x1;
		RCALP_2ND_EN = (i >> 1) & 0x1; // to be in the same sequence defined on spec. This may not be necessary

		P_TUNE = 0x00;	//MSB=0000
		P_TUNE0 = 0x0; //LSB=000
		thermo_index = 0;
		TXRXIMP_CKCAL = 1;
		delay(T_5us);
		TXRXIMP_CKCAL = 0;
		delay(T_2us);
		dir = TXRX_IMPCALOUT;
		delay(T_3us);
		cnt = 0;
		
		do {
			pre_val = P_TUNE;
			if( TXRX_IMPCALOUT == 0 ) {
				break; //based on the spec, if TXRX_IMPCALOUT = 0 the step of calibration is done.
			}
			else {
				if(P_TUNE<0x0f)
				P_TUNE++;
			}

			TXRXIMP_CKCAL = 1;
			delay(T_5us);
			TXRXIMP_CKCAL = 0;
			delay(T_2us);

			if( dir != TXRX_IMPCALOUT ) {
				P_TUNE = pre_val;
				break;
			}
		
			TXRXIMP_CKCAL = 0;
			delay(T_3us);

			if( P_TUNE==0 || P_TUNE==0x0f) break;
			
		} while( cnt++<16 );
		
		tximp[i] = P_TUNE | 0x00; // | 0x00 fixes the array compiler error 
		
		delay(T_3us);
		TXRXIMP_CKCAL = 1;
		delay(T_5us);
		TXRXIMP_CKCAL = 0;
		delay(T_2us);
		dir = TXRX_IMPCALOUT; cnt = 0;
		delay(T_3us);

		do {
			pre_val = P_TUNE0;
			if( TXRX_IMPCALOUT == 0 ) {
				break; //based on the spec, if TXRX_IMPCALOUT = 0 the calibration is done.
			}
			else {
				if(P_TUNE0<7) {
					thermo_index = thermo_index + 1;
					P_TUNE0 = tximp_thermo_tb[thermo_index];
				}
			}
			TXRXIMP_CKCAL = 1;
			delay(T_5us);
			TXRXIMP_CKCAL = 0;
			delay(T_2us);

			if( dir != TXRX_IMPCALOUT ) {
				break;
			}

			TXRXIMP_CKCAL = 0;
			delay(T_3us);

			if( P_TUNE0==0 || P_TUNE0==0x07) break;
			
		} while( cnt++<16 );
		
		tximp_0[i] = P_TUNE0 | 0x00; // | 0x00 fixes the array compiler error 

	}

	sum = 0;

	for(i = 0; i < 3; i++)
	{
		sum = sum + (uint16_t)((tximp_0[0] >> i) & 0x1);	
		sum = sum + (uint16_t)((tximp_0[1] >> i) & 0x1);
		sum = sum + (uint16_t)((tximp_0[2] >> i) & 0x1);	
		sum = sum + (uint16_t)((tximp_0[3] >> i) & 0x1);
	}
	
	sum = sum + (uint16_t)((tximp[0] + tximp[1] + tximp[2] + tximp[3]) * 6);
	ave = (uint16_t)((sum >> 2) / 6); //ave = (sum / 2) / 6
	ave_0 = (uint16_t)((sum - (ave * 24)) >> 2);

	lnx_CAL_TXIMP_TUNEP_LANE_7_0 =(uint8_t)(ave & 0x0f);

	// 3/8 X.Su - Reduce code size - Optimize later.
	tmp_index = ave_0 > 2 ? 3 : ave_0;
	lnx_CAL_TXIMP_TUNEP0_LANE_7_0 = tximp_thermo_tb[ tmp_index ];
/*
	if (ave_0 == 0)
                lnx_CAL_TXIMP_TUNEP0_LANE_7_0 = (uint8_t)(tximp_thermo_tb[0] & 0x07);
        else if (ave_0 == 1)
                lnx_CAL_TXIMP_TUNEP0_LANE_7_0 = (uint8_t)(tximp_thermo_tb[1] & 0x07);
        else if (ave_0 == 2)
                lnx_CAL_TXIMP_TUNEP0_LANE_7_0 = (uint8_t)(tximp_thermo_tb[2] & 0x07);
        else lnx_CAL_TXIMP_TUNEP0_LANE_7_0 = (uint8_t)(tximp_thermo_tb[3] & 0x07);
*/
	
	P_TUNE = lnx_CAL_TXIMP_TUNEP_LANE_7_0;
	P_TUNE0 = lnx_CAL_TXIMP_TUNEP0_LANE_7_0;

	TX_IMPCAL_SIDE = 0;
	TX_IMPCAL_EN = 0;
	
	lnx_TXIMP_CAL_DONE_LANE = 1;
	lnx_TXIMP_CAL_PASS_LANE = 1;	
	
	if( mcuid==MCU_LANE0) cmx_TXIMP_CAL_DONE_LANE0_RD = 1;
	if( mcuid==MCU_LANE1) cmx_TXIMP_CAL_DONE_LANE1_RD = 1;
	if( mcuid==MCU_LANE2) cmx_TXIMP_CAL_DONE_LANE2_RD = 1;
	if( mcuid==MCU_LANE3) cmx_TXIMP_CAL_DONE_LANE3_RD = 1;
	
}

/**
 * \module RX IMP Calibratio
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input:  TXRX_IMPCALOUT
 *    Output: RXIMP_IVREF
*/
void rximp_cal( void ) {
	uint8_t i, /*dir,*/ cnt, saved_rximp_ivref;
//        uint8_t rximp[2] = {0,0};
	uint8_t rximp[] = {0,0};  
  
	PHY_STATUS = ST_RXIMP_CAL;
	
	RX_IMPCAL_EN = 1;
	lnx_RXIMP_CAL_DONE_LANE = 0;
	lnx_RXIMP_CAL_PASS_LANE = 0;
	saved_rximp_ivref = 0;

    for(i=0;i<=1;i++){
	RXIMP_IVREF = 0x0c;
        if(i) RCAL_2ND_EN = 1; 
        else RCAL_2ND_EN = 0;
    
		dir = 0;	
		cnt = 0;

	    do {

			TXRXIMP_CKCAL = 1;
			delay(T_5us);
			TXRXIMP_CKCAL = 0;
			delay(Tus);
	
	        if( TXRX_IMPCALOUT == 0 ) {
				RXIMP_IVREF--;					
				dir = (dir << 1) | 1;
	        }
	        else {
				RXIMP_IVREF++;				
				dir = (dir << 1);
	        }
	        
			delay(T_4us);

			dir&=0x0f;
	        if( dir == 0x0a || dir ==0x05) {
				lnx_RXIMP_CAL_PASS_LANE = 1;
				break;
			}

			if( RXIMP_IVREF==0 || RXIMP_IVREF==0x1f) break;			
    
	   } while (cnt++ < 32);
			                 
	rximp[i] = RXIMP_IVREF | 0x00;  // | 0x00 fixes the array compiler error 
        //the compiler error happens when less than 8bit values are saved to an 8-bit array, bits are shifted to the left.  

	}
    
    RX_IMPCAL_EN = 0;
    RCAL_2ND_EN = 0;

    lnx_CAL_RX_IMP_LANE_7_0 = (rximp[0]+rximp[1]) >> 1;

    //RXIMP_IVREF = lnx_CAL_RX_IMP_LANE_7_0;
    reg_IMPCAL_RX_LANE_4_0 = lnx_CAL_RX_IMP_LANE_7_0;

    lnx_RXIMP_CAL_DONE_LANE = 1;

	if( mcuid==MCU_LANE0) cmx_RXIMP_CAL_DONE_LANE0_RD = 1;
	if( mcuid==MCU_LANE1) cmx_RXIMP_CAL_DONE_LANE1_RD = 1;
	if( mcuid==MCU_LANE2) cmx_RXIMP_CAL_DONE_LANE2_RD = 1;
	if( mcuid==MCU_LANE3) cmx_RXIMP_CAL_DONE_LANE3_RD = 1;
	
} 
