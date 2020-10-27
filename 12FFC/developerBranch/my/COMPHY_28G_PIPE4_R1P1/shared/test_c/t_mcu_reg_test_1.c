/******************************************************************
 * * 	        Marvell Semiconductor  
 * *******************************************************************
 * * \file main.c
 * * \purpose main top
 * * \History
 * *	10/13/2015 Heejeong Ryu		Initial 
 * */

#define _DEBUG _DEBUG_MAIN
#define RX_IMPCAL_EN                     reg_RXIMPCAL_EN_LANE
#define RXIMP_IVREF                      reg_IMPCAL_RX_LANE_4_0
#define RCAL_2ND_EN                      reg_RCAL_2ND_EN_LANE
#define TXRX_IMPCALOUT                   reg_ANA_CMN_IMPCAL_OUT_RD 
#define TXRXIMP_CKCAL                    reg_TRX_IMPCAL_CLK
#define TX_IMPCAL_EN					reg_TX_IMPCAL_EN_LANE
#define TX_IMPCAL_SIDE					reg_TX_IMPCAL_SIDE_LANE
#define N_TUNE							reg_TXIMP_TUNEN_LANE_3_0
#define P_TUNE							reg_TXIMP_TUNEP_LANE_3_0
#define RCAL_N							reg_TX_IMPCAL_BOT_LANE
#define RCALP_2ND_EN					reg_RCAL_2ND_EN_LANE
#define VREF_RXDLL_SEL                  reg_VREF_RXDLL_SEL_3_0
#define DFE_F1_POS_E_LANE               reg_DFE_F1_POS_E_LANE_3_0
#define DFE_F1_POS_O_LANE               reg_DFE_F1_POS_O_LANE_3_0
#define INTPI_PLL                       reg_INTPI_PLL_3_0
#define DFE_F1_NEG_E_LANE               reg_DFE_F1_NEG_E_LANE_3_0
#define DFE_F1_NEG_O_LANE               reg_DFE_F1_NEG_O_LANE_3_0
#define FFE_RES1_SEL_LANE               reg_FFE_RES1_SEL_LANE_3_0
#define dfe_float_sel_lane              reg_DFE_FLOAT_SEL_LANE_3_0
#define dfe_ctrl_fb_sel_lane            reg_DFE_CTRL_FB_SEL_LANE_3_0
#define dfe_step_fine_dc_lane           reg_DFE_STEP_FINE_DC_LANE_3_0
#define dfe_step_accu_dc_lane           reg_DFE_STEP_ACCU_DC_LANE_3_0
#define dfe_step_coarse_dc_lane         reg_DFE_STEP_COARSE_DC_LANE_3_0
#define dfe_step_coarse_f0_lane         reg_DFE_STEP_COARSE_F0_LANE_3_0
#define dfe_step_coarse_fx_lane         reg_DFE_STEP_COARSE_FX_LANE_3_0
#define dfe_step_coarse_ffx_lane        reg_DFE_STEP_COARSE_FFX_LANE_3_0
#include "common.h"


/* Function Declaration */
int _sdcc_external_startup(void);
void int0_isr   (void) __interrupt (0)  __using (1); 
void int1_isr   (void) __interrupt (2)  __using (1); 
void timer1_isr (void) __interrupt (3)  __using (1);
void int2_isr   (void) __interrupt (9)  __using (1); 
void int3_isr   (void) __interrupt (10) __using (1); 
void int4_isr   (void) __interrupt (11) __using (1); 
void int5_isr   (void) __interrupt (12) __using (1); 
void int6_isr 	(void) __interrupt (13) __using (1);
void int7_isr 	(void) __interrupt (8)  __using (1);
void int8_isr 	(void) __interrupt (17) __using (1);
void int9_isr 	(void) __interrupt (18) __using (1);
void int10_isr 	(void) __interrupt (19) __using (1);
void int11_isr 	(void) __interrupt (20) __using (1);
void int12_isr 	(void) __interrupt (21) __using (1);
void uart0_isr  (void) __interrupt (4)  __using (1); 

bool test_reg(void);
bool test_reg_complete(void);

_sdcc_external_startup() {
    return(1);
}

#define mcu_stop()	PCON = 0x8a 


/**
 * \module test main
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/
void main(){
	uint8_t tximp[16];
	
   //EA = 0;
	CKCON = 0;
	/*cpu_init();*/
	
    //EA = 1;

	/*clear_xdata();	//clear xdata memory
	PowerUp_Seq();
	SpeedChange();*/
	
    //while(1){
		//if(test_reg()) mcu_stop();
		//test_reg_complete(); //mcu_stop();		
		
		//reg_RX_INIT_DONE_LANE = 1;
		
	VREF_RXDLL_SEL = 0x0f;
	tximp[1] = 0x00;
	reg_MCU_DEBUG0_LANE_7_0 = VREF_RXDLL_SEL;
    tximp[1] = VREF_RXDLL_SEL; 
	reg_MCU_DEBUG1_LANE_7_0 = tximp[1];

		
		while(1);
    //} 
	
}

/*bool test_reg(void) {

	//ana_trx_lane
	reg_FFE_CAP2_SEL_E_LANE_3_0 = 0xa;
	reg_FFE_RES2_SEL_E_LANE_3_0 = 0x5;
	//if(reg_FFE_CAP2_SEL_E_LANE_3_0 != 0x0a) return 1; //fail
	//if(reg_FFE_RES2_SEL_E_LANE_3_0 != 0x05) return 1; //fail
	//
	return 0; //normal
}*/


__xdata uint32_t var_xdat0;
__xdata uint32_t var_xdat1;
__xdata uint32_t var_xdat2;

bool test_reg_complete(void) { 
	__xdata uint8_t *ptr8;
	__xdata uint32_t *ptr32;	
	__xdata uint8_t *ptr8_xdat_lane;
	__xdata uint32_t *ptr32_xdat_lane;
	uint16_t addr_raw;
	uint16_t addr;
	uint16_t i;
	uint32_t mask32;
	uint8_t mask8;
    uint32_t expect_rd;
	uint32_t actual_rd;
	uint32_t actual_rd_mask;
    uint16_t addr_failed;
	uint8_t expect_rd8;
	uint8_t actual_rd8;
	uint8_t actual_rd_mask8;
	uint32_t var_local0;
	uint32_t var_local1;
	uint32_t var_local2;
	uint8_t k;
	uint8_t tximp[16];
	
	
for( i = 0; i < 1; i = i + 1 ){
	
	k = 1;
	tximp[k] = 0x00;
	//VREF_RXDLL_SEL = 0x0f;
	//reg_MCU_DEBUG0_LANE_7_0 = VREF_RXDLL_SEL;
	//tximp[k] = 0x00;
    //tximp[k] = VREF_RXDLL_SEL; 
	reg_MCU_DEBUG1_LANE_7_0 = tximp[k];

	/*k = 2;
	DFE_F1_POS_E_LANE = 0x0f;
    tximp[k] = DFE_F1_POS_E_LANE; 
	reg_MCU_DEBUG1_LANE_7_0 = tximp[k];
	
	k = 3;
	DFE_F1_POS_O_LANE = 0x0f;
    tximp[k] = DFE_F1_POS_O_LANE; 
	reg_MCU_DEBUG2_LANE_7_0 = tximp[k];
	
	k = 4;
	P_TUNE = 0x0f;
    tximp[k] = P_TUNE; 
	reg_MCU_DEBUG3_LANE_7_0 = tximp[k];
	
	k = 5;
	INTPI_PLL = 0x0f;
    tximp[k] = INTPI_PLL; 
	reg_MCU_DEBUG4_LANE_7_0 = tximp[k];

	k = 6;
	DFE_F1_NEG_E_LANE = 0x0f;
    tximp[k] = DFE_F1_NEG_E_LANE; 
	reg_MCU_DEBUG5_LANE_7_0 = tximp[k];
	
	k = 7;
	DFE_F1_NEG_O_LANE = 0x0f;
    tximp[k] = DFE_F1_NEG_O_LANE; 
	reg_MCU_DEBUG6_LANE_7_0 = tximp[k];
	
	k = 8;
	FFE_RES1_SEL_LANE = 0x0f;
    tximp[k] = FFE_RES1_SEL_LANE; 
	reg_MCU_DEBUG7_LANE_7_0 = tximp[k];
	
	k = 9;
	dfe_float_sel_lane = 0x0f;
    tximp[k] = dfe_float_sel_lane; 
	reg_MCU_DEBUG8_LANE_7_0 = tximp[k];

	k = 10;
	dfe_ctrl_fb_sel_lane = 0x0f;
    tximp[k] = dfe_ctrl_fb_sel_lane; 
	reg_MCU_DEBUG9_LANE_7_0 = tximp[k];
	
	k = 11;
	dfe_step_fine_dc_lane = 0x0f;
    tximp[k] = dfe_step_fine_dc_lane; 
	reg_MCU_DEBUGA_LANE_7_0 = tximp[k];
	
	k = 12;
	dfe_step_accu_dc_lane = 0x0f;
    tximp[k] = dfe_step_accu_dc_lane; 
	reg_MCU_DEBUGB_LANE_7_0 = tximp[k];
	
	k = 13;
	dfe_step_coarse_dc_lane = 0x0f;
    tximp[k] = dfe_step_coarse_dc_lane; 
	reg_MCU_DEBUGC_LANE_7_0 = tximp[k];

	k = 14;
	dfe_step_coarse_f0_lane = 0x0f;
    tximp[k] = dfe_step_coarse_f0_lane; 
	reg_MCU_DEBUGD_LANE_7_0 = tximp[k];
	
	k = 15;
	dfe_step_coarse_fx_lane = 0x0f;
    tximp[k] = dfe_step_coarse_fx_lane; 
	reg_MCU_DEBUGE_LANE_7_0 = tximp[k];
	
	k = 16;
	dfe_step_coarse_ffx_lane = 0x0f;
    tximp[k] = dfe_step_coarse_ffx_lane; 
	reg_MCU_DEBUGF_LANE_7_0 = tximp[k]; */
   
}

	return 0; //normal
}