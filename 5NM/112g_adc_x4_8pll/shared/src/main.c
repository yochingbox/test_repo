/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file main.c
* \purpose main top
* \History
*	3/15/2019 Heejeong Ryu		Initial, copied some logic from 112G-ADC 
      PMEM: 128GKB
	  XDAT_CMN: 2KB
	  XDAT_LANE 4KB

*/

#define _DEBUG _DEBUG_MAIN
#include "common.h"

/* Function Declaration */
int _sdcc_external_startup(void);
void int0_isr   (void) __interrupt (0)  __using (2); 
void int1_isr   (void) __interrupt (2)  __using (2); 
void timer1_isr (void) __interrupt (3)  __using (2);
void timer2_isr (void) __interrupt (5)  __using (2);
void int2_isr   (void) __interrupt (9)  __using (2); 
void int3_isr   (void) __interrupt (10) __using (2); 
void int4_isr   (void) __interrupt (11) __using (2); 
void int5_isr   (void) __interrupt (12) __using (2); 
void int6_isr   (void) __interrupt (13) __using (2);
void int7_isr   (void) __interrupt (8)  __using (2);
void int8_isr   (void) __interrupt (17) __using (2);
void int9_isr   (void) __interrupt (18) __using (2);
void int10_isr  (void) __interrupt (19) __using (2);
void int11_isr  (void) __interrupt (20) __using (2);
void int12_isr  (void) __interrupt (21) __using (2);
void uart0_isr  (void) __interrupt (4)  __using (2); 


// FW revision embedded in program
static __code __at (0x200) uint8_t gaFwRev[] = {BUILD_VER, PATCH_VER, MINOR_VER, MAJOR_VER };
// PHY mode embeded in program
#ifdef _PCIE_BUILD
static __code __at (0x204) uint8_t gnFwPhyMode = 0x1;
#elif defined _SAS_BUILD
static __code __at (0x204) uint8_t gnFwPhyMode = 0x2;
#elif defined _SERDES_BUILD
static __code __at (0x204) uint8_t gnFwPhyMode = 0x4;
#else
static __code __at (0x204) uint8_t gnFwPhyMode = 0x8;
#endif

_sdcc_external_startup() {
	return(1);
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


void main(void) {

	CKCON = 0x00; 
	//EA = 0;
	
	set_mcu_en();
	cpu_init();
	EA = 1; // make sure timer interrupts is enabled
	clear_xdata(); 
	PowerUp_Seq();

    ET2   = 1;
    EX0   = 1;
    EX1   = 1;
    //EA = 1;

	#ifdef _LAB
	DBG_Printf("\r\n[mcu%d]-- Welcome to MCUPhy Debug World!! --", reg_MCU_ID_LANE_7_0);

	#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL
	#else
		DBG_Printf("\tBuilt: %s-%s\n\r",__DATE__, __TIME__);
	#endif

	#endif

	while((reg_MCU_DEBUGA_LANE_7_0=0x4B)&&1) {		

		scheduler();
		
	}	
}

