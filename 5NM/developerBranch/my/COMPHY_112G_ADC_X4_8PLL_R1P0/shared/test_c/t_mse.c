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
        //drv_MSE_EN = 1;  
        reg_MSE_EN_LANE = 1;

	drv_mse_init();
        drv_mse_start();
        drv_mse_read();
        drv_mse_done_int();
        //while (drv_MSE_CONT_MODE) {
        while (reg_MSE_CONT_MODE_LANE) {
                drv_mse_done_int();
                drv_mse_read();
        }

        //call it as need
        //drv_mse_exit(); 

}

