#include "common.h"

#ifdef DRV_PLM_V1

//plm init, run before starting plm calculation
void drv_plm_init() {
        reg_PLM_START_LANE = 0;
        reg_PLM_CONFIG_READY_LANE = 0;
        reg_PLM_RD_REQ_LANE = 0;
        reg_PLM_EN_LANE = 1;
}


//enable plm clock and start the calculation process
void drv_plm_start() {
        reg_PLM_START_LANE = 1;
}


//De-assert reg_PLM_CONFIG_READY_LANE before change PLM settings, assert it after setting done
void drv_plm_config() {
        reg_PLM_CONFIG_READY_LANE = 1;
}


//read out the plm results
void drv_plm_read() {
        wait_for(reg_PLM_DONE_LANE, 300);
        reg_PLM_RD_REQ_LANE = 1;
        wait_for(reg_PLM_RD_ACK_LANE, 1);
        reg_PLM_RD_REQ_LANE = 0;
}


//end the plm process whenever need
void drv_plm_exit() {
        reg_PLM_START_LANE = 0;
        reg_PLM_EN_LANE = 0;
        reg_PLM_CONFIG_READY_LANE = 0;
}


//reference for plm
void drv_plm_run() {
        drv_plm_init();
        drv_plm_start();
        drv_plm_config();
        //drv_plm_read();
        //drv_plm_exit();
}

#else
void drv_plm_run() {}
#endif
