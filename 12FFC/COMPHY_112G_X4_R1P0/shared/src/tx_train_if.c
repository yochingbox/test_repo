
#include "common.h"
#include "driver.h"

void train_if_init() {

	// -- clear previous REG for abnormal quit
	reg_INT_TX_TRAIN_COMPLETE_LANE = 0;
	reg_INT_TX_TRAIN_FAILED_LANE = 0;
	reg_INT_LOCAL_CTRL_REQ_LANE = 0;
	reg_INT_LOCAL_CTRL_RESET_LANE = 0;
	reg_INT_TX_PRESET_INDEX_LANE_3_0 = 0;
	reg_INT_LOCAL_CTRL_G0_LANE_1_0 = 0;
	reg_INT_LOCAL_CTRL_G1_LANE_1_0 = 0;
	reg_INT_LOCAL_CTRL_GN1_LANE_1_0 = 0;
	reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 0; 
	reg_INT_LOCAL_CTRL_G_LANE_1_0 = 0;
	reg_INT_LOCAL_CTRL_PAT_LANE_1_0 = 3;
	reg_STATUS_DET_TIMEOUT_ISR_CLEAR_LANE = 0;
	drv_TXTRAIN_STATUS_C0 = 0;
	drv_TXTRAIN_STATUS_C1 = 0;
	drv_TXTRAIN_STATUS_CN1 = 0;
	drv_TXTRAIN_STATUS_CN2 = 0;

}

void set_train_comp() {

	// -- Set fail to 1 when EYE not open
	if(drv_TXTRAIN_FAIL) {
		reg_INT_TX_TRAIN_FAILED_LANE = 1;
	}
	reg_INT_TX_TRAIN_COMPLETE_LANE = 0;

}


void set_remote_tx_pam2() {

	// -- set coe to HW
	if(drv_TXTRAIN_CTRL_PRESET) {
		reg_INT_LOCAL_CTRL_RESET_LANE = 1;
		reg_INT_TX_PRESET_INDEX_LANE_3_0 = drv_TXTRAIN_CTRL_PRESET;
		reg_INT_LOCAL_CTRL_G0_LANE_1_0 = 0;
		reg_INT_LOCAL_CTRL_G1_LANE_1_0 = 0;
		reg_INT_LOCAL_CTRL_GN1_LANE_1_0 = 0;
	} else {
		reg_INT_LOCAL_CTRL_RESET_LANE = 0;
		reg_INT_TX_PRESET_INDEX_LANE_3_0 = 0;
		reg_INT_LOCAL_CTRL_G0_LANE_1_0 = drv_TXTRAIN_CTRL_C0;
		reg_INT_LOCAL_CTRL_G1_LANE_1_0 = drv_TXTRAIN_CTRL_C1;
		reg_INT_LOCAL_CTRL_GN1_LANE_1_0 = drv_TXTRAIN_CTRL_CN1;
	}
	
	reg_INT_LOCAL_CTRL_REQ_LANE = 1;

	//check ack	
	//while(!reg_INT_REMOTE_STATUS_ACK_LANE && !reg_TX_TRAIN_FAILED_LANE && reg_TX_TRAIN_ENABLE_RD_LANE);
	while(!reg_INT_REMOTE_STATUS_ACK_LANE && reg_TX_TRAIN_ENABLE_RD_LANE);
	
	drv_TXTRAIN_STATUS_C0 = reg_INT_REMOTE_STATUS_G0_LANE_1_0;
	drv_TXTRAIN_STATUS_C1 = reg_INT_REMOTE_STATUS_G1_LANE_1_0;
	drv_TXTRAIN_STATUS_CN1 = reg_INT_REMOTE_STATUS_GN1_LANE_1_0;

}

void set_remote_tx_pam4() {

	// -- set coe to HW
	reg_INT_LOCAL_CTRL_PAT_LANE_1_0 = drv_TXTRAIN_CTRL_PAT;
	
	if(drv_TXTRAIN_CTRL_PRESET) {
		reg_INT_LOCAL_CTRL_RESET_LANE = 1;
		reg_INT_TX_PRESET_INDEX_LANE_3_0 = drv_TXTRAIN_CTRL_PRESET;
		reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 0; 
		reg_INT_LOCAL_CTRL_G_LANE_1_0 = 0;
	} else {
		reg_INT_LOCAL_CTRL_RESET_LANE = 0;
		reg_INT_TX_PRESET_INDEX_LANE_3_0 = 0;
		if(drv_TXTRAIN_CTRL_C0) {
			reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 0; 
			reg_INT_LOCAL_CTRL_G_LANE_1_0 = drv_TXTRAIN_CTRL_C0;
		}
		if(drv_TXTRAIN_CTRL_C1) {
			reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 1; 
			reg_INT_LOCAL_CTRL_G_LANE_1_0 = drv_TXTRAIN_CTRL_C1;
		}
		if(drv_TXTRAIN_CTRL_CN1) {
			reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 7; 
			reg_INT_LOCAL_CTRL_G_LANE_1_0 = drv_TXTRAIN_CTRL_CN1;
		}
		if(drv_TXTRAIN_CTRL_CN2) {
			reg_INT_LOCAL_CTRL_SEL_LANE_2_0 = 6; 
			reg_INT_LOCAL_CTRL_G_LANE_1_0 = drv_TXTRAIN_CTRL_CN2;
		}
	}

	reg_INT_LOCAL_CTRL_REQ_LANE = 1;

	//check ack
	//while(!reg_INT_REMOTE_STATUS_ACK_LANE && !reg_TX_TRAIN_FAILED_LANE && reg_TX_TRAIN_ENABLE_RD_LANE);
	while(!reg_INT_REMOTE_STATUS_ACK_LANE && reg_TX_TRAIN_ENABLE_RD_LANE);
	//drv_TXTRAIN_STATUS_PAT = reg_INT_REMOTE_STATUS_PAT_LANE_1_0;

	if(reg_INT_REMOTE_STATUS_SEL_LANE_2_0 == 0) { //updated
		drv_TXTRAIN_STATUS_C0 = reg_INT_REMOTE_STATUS_G_LANE_2_0;
		drv_TXTRAIN_STATUS_C1 = 0;
		drv_TXTRAIN_STATUS_CN1 = 0;
		drv_TXTRAIN_STATUS_CN2 = 0;
	} else if(reg_INT_REMOTE_STATUS_SEL_LANE_2_0 == 1) {
		drv_TXTRAIN_STATUS_C0 = 0;
		drv_TXTRAIN_STATUS_C1 = reg_INT_REMOTE_STATUS_G_LANE_2_0;
		drv_TXTRAIN_STATUS_CN1 = 0;
		drv_TXTRAIN_STATUS_CN2 = 0;
	} else if(reg_INT_REMOTE_STATUS_SEL_LANE_2_0 == 7) {
		drv_TXTRAIN_STATUS_C0 = 0;
		drv_TXTRAIN_STATUS_C1 = 0;
		drv_TXTRAIN_STATUS_CN1 = reg_INT_REMOTE_STATUS_G_LANE_2_0;
		drv_TXTRAIN_STATUS_CN2 = 0;
	} else if(reg_INT_REMOTE_STATUS_SEL_LANE_2_0 == 6) {
		drv_TXTRAIN_STATUS_C0 = 0;
		drv_TXTRAIN_STATUS_C1 = 0;
		drv_TXTRAIN_STATUS_CN1 = 0;
		drv_TXTRAIN_STATUS_CN2 = reg_INT_REMOTE_STATUS_G_LANE_2_0;
	}

}


void set_remote_tx() {

	// -- wait ACK deassert for handshake
	while(reg_INT_REMOTE_STATUS_ACK_LANE);

	if(reg_ETHERNET_MODE_LANE_1_0 == 2) {
		set_remote_tx_pam4();
	} else {
		set_remote_tx_pam2();
	}

	// -- clear previous REQ
	reg_INT_LOCAL_CTRL_REQ_LANE = 0;

	// -- reset status det timeout
	reg_STATUS_DET_TIMEOUT_ISR_CLEAR_LANE = 0;

	// -- invalid remote status
	if(reg_STATUS_DET_TIMEOUT_ISR_LANE || reg_TX_TRAIN_FAILED_LANE) {
		drv_TXTRAIN_STATUS_VALID = 0;
	} else {
		drv_TXTRAIN_STATUS_VALID = 1;
	}

	reg_STATUS_DET_TIMEOUT_ISR_CLEAR_LANE = 1;

}
