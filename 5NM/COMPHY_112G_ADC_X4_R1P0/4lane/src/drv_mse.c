#include "common.h"
#include <math.h>

#define FRAC_BITS 5


//mse init, run before starting mse calculation
void drv_mse_init() {
        reg_MSE_START_LANE = 0;
        reg_MSE_EN_LANE = 1;
        reg_MSE_RD_REQ_LANE = 0;
        reg_MSE_DONE_ISR_CLEAR_LANE = 1;
        reg_MSE_HIGH_ISR_CLEAR_LANE = 1;
        reg_MSE_LOW_ISR_CLEAR_LANE = 1;
        reg_MSE_DONE_ISR_CLEAR_LANE = 0;
        reg_MSE_HIGH_ISR_CLEAR_LANE = 0;
        reg_MSE_LOW_ISR_CLEAR_LANE = 0;
}


//enable mse clock and start the calculation process
void drv_mse_start() {
        if (reg_MSE_DTL_SEL_LANE && (reg_RX_RATE_MODE_LANE_1_0 != 0)) {
                DBG_Printf("\n\r\tClock path data rate <=3Gbps, MSE measurement is not supported!");
        }
        reg_MSE_START_LANE = 1;
}


//end the mse process whenever need
void drv_mse_exit() {
        reg_MSE_START_LANE = 0;
}


//read out the mse results
void drv_mse_read() {
        wait_for(reg_MSE_DONE_LANE, 300);
        reg_MSE_RD_REQ_LANE = 1;
        wait_for(reg_MSE_RD_ACK_LANE, 1);
        reg_MSE_RD_REQ_LANE = 0;
}


//clear mse done interrupt after one round of mse calculation done
void drv_mse_done_int() {
        wait_for(reg_MSE_DONE_ISR_LANE, 300);
        reg_MSE_DONE_ISR_CLEAR_LANE = 1;
        reg_MSE_DONE_ISR_CLEAR_LANE = 0;
}


//clear mse high interrupt
void drv_mse_high_int() {
        if (reg_MSE_HIGH_ISR_LANE) {
            reg_MSE_HIGH_ISR_CLEAR_LANE = 1;
            reg_MSE_HIGH_ISR_CLEAR_LANE = 0;
        }
}


//clear mse low interrupt
void drv_mse_low_int() {
        if (reg_MSE_LOW_ISR_LANE) {
            reg_MSE_LOW_ISR_CLEAR_LANE = 1;
            reg_MSE_LOW_ISR_CLEAR_LANE = 0;
        }
}


//reference for mse
void drv_mse_run() {
        drv_mse_init();
        drv_mse_start();
        //drv_mse_read();

        //if (drv_MSE_CONT_MODE) {
        //        drv_mse_done_int();
        //        drv_mse_high_int();
        //        drv_mse_low_int();
        //        drv_mse_read();
        //}

        //drv_mse_exit();
}
