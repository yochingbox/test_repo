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

_sdcc_external_startup() {
	return(1);
}


void main(){
    EA = 0;
	
	cpu_init();
	
    EA = 1;

	clear_xdata();	//clear xdata memory
	PowerUp_Seq();
	//Calibration();

        //Config drv_* signals
        reg_PLM_EN_LANE = 1;

        drv_plm_run();
        drv_plm_read();

	    delay(T_p5us);
        drv_plm_read();

	    delay(T_p5us);
        drv_plm_read();

	    delay(T_p5us);
        drv_plm_exit(); 

}

