/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file apta.c
* \purpose APTA 
* \History
*	12/05/2015 Heejeong Ryu		Initial 
*/
#include "common.h"

#ifndef ATE_FW
#ifdef SUPPORT_APTA_TX_TRAIN

#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

uint8_t apta_l_r_error_check(void) BANKING_CTRL {
	uint8_t error_flag, ctrl, status;
	uint8_t c1, c0, cn1;
	uint8_t g1, g0, gn1;
	
	error_flag = 0;
	ctrl = reg_LOCAL_CTRL_FIELD_LANE_15_0 & 0x3f;	
	status = reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0 & 0x3f;
	c1 = ctrl & 0x30;
	c0 = ctrl & 0x0c;
	cn1 = ctrl & 0x03;
	g1 = status & 0x30;
	g0 = status & 0x0c;
	gn1 = status & 0x03;
	
	switch (reg_LOCAL_CTRL_FIELD_LANE_15_0) {
	case 0x0400: //APTA_START:	
		if(((status)!= 0) ||
		((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x3f)!= 0)) error_flag = 1;
		break;
	case 0x0800: //APTA_COMP:
	case 0x0c00: //APTA_TERM:
		if(status!= 0x15) error_flag = 1;
		break;
	default:	
		if((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b1&0x0c)!= 0) error_flag = 1;
		if(status == 0) error_flag = 1;
		
		if(((cn1 == 0x01) && (gn1==0x02 || gn1==0x00)) || //inc
		  ((cn1 == 0x02) && (gn1==0x03 || gn1==0x00)) || //dec
		  ((cn1 == 0x00) && (gn1!=0x00)) ){ 
			error_flag = 1;
		}
		// --
		if(((c0 == 0x04) && (g0==0x08 || g0==0x00)) || //inc
		  ((c0 == 0x08) && (g0==0x0c || g0==0x00)) ||  //dec
 		  ((c0 == 0x0) && (g0!=0x00)) ){
		  error_flag = 1; 
		}	
		// --
		if(((c1 == 0x10) && (g1==0x20 || g1==0x00)) || //inc
		  ((c1 == 0x20) && (g1==0x30 || g1==0x00)) || //dec
		  ((c1 == 0) && ( g1!=0x00)) ) {
			error_flag = 1; 
		}	
		break;
	}	
		
	return error_flag;
}

//TODO - apta train alg
enum {
APTA_START,
APTA_CO_CTRL_G0_DEC_GN1_DEC,
APTA_CO_CTRL_G0_INC_GN1_INC,
APTA_CO_CTRL_G0_DEC_G1_DEC,
APTA_CO_CTRL_G0_INC_G1_INC,
APTA_CO_CTRL_G0_DEC,
APTA_CO_CTRL_G0_INC,
APTA_CO_CTRL_GN1_DEC,
APTA_CO_CTRL_GN1_INC,
APTA_CO_CTRL_G1_DEC,
APTA_CO_CTRL_G1_INC,
APTA_COMP,
APTA_TERM,
APTA_ZERO //for test
};

__code uint16_t apta_local_ctrl_tb[] = {
 0x0400, //	LOCAL_CTRL_FIELD_LANE[11:10]=01 //start
 0x000a,
 0x0005,
 0x0028,
 0x0014,
 0x0008, 
 0x0004,
 0x0002,
 0x0001,
 0x0020,
 0x0010,
 0x0800, //LOCAL_CTRL_FIELD_LANE[11:10]=10 //complete
 0x0c00, //LOCAL_CTRL_FIELD_LANE[11:10]=11 //terminate
 0x0000
};

__code uint8_t apta_local_ctrl_sim_tb[] = {
APTA_START, //0
APTA_CO_CTRL_G0_DEC_GN1_DEC, //1
APTA_CO_CTRL_G0_DEC_G1_DEC, //2
APTA_CO_CTRL_G1_INC, //3
APTA_CO_CTRL_GN1_INC, //4
APTA_COMP,//5
APTA_TERM,//6
0xff
};

void apta_txtrain(void) BANKING_CTRL{

//TODO: add cmx_APTA_TRAIN_MODE :mode1- start/comp for every coef change
//          
	uint8_t ctrl_inx, cmd_if_on;
	uint16_t local_ctrl_field;
	
	reg_MCU_DEBUG0_LANE_7_0 = 3;
	cmd_if_on = 0;
	if( reg_PIN_PAPTA_TRAIN_ENABLE_RD_LANE && reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE ) { //Xu: When Remote enable LOCAL_CTRL_FIELD_READY=1, Remote have to wait LOCAL_CTRL_VALID toggle.
		
		if(cmx_APTA_TRAIN_CMD_IF_EN && PHY_MCU_REMOTE_REQ_LANE && lnx_PHY_MCU_LOCAL_ACK_LANE==0) {
			reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 1; 
			reg_PHY_MCU_REMOTE_REQ_ISR_CLEAR_LANE = 0;
			if(lnx_PHY_REMOTE_CTRL_COMMAND_TYPE_LANE_7_0==0x60 ){ //CMD_IF
				ctrl_inx = (uint8_t)lnx_PHY_REMOTE_CTRL_COMMAND_CODE_LANE_15_0;				
				reg_MCU_DEBUG0_LANE_7_0 = 1;		
				if(ctrl_inx>=APTA_ZERO)  {
					cmd_if_on = 2;					
					goto cmd_if_exit; 
				}	
				cmd_if_on = 1;
			}
			else {
				cmd_if_on = 2;
				goto cmd_if_exit;
			}
		}	
		else if(cmx_APTA_TRAIN_SIM_EN) {
			reg_MCU_DEBUG0_LANE_7_0 = 4;
			ctrl_inx = apta_local_ctrl_sim_tb[apta_sim_state];
			
			apta_sim_state++;
			if((apta_local_ctrl_sim_tb[apta_sim_state] == 0xff) ||	
			   (apta_local_ctrl_sim_tb[apta_sim_state] == APTA_TERM)) apta_sim_state = 0;					
		}
		else goto stop_exit;
			
		local_ctrl_field = apta_local_ctrl_tb[ctrl_inx];
		
		reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 1;
		reg_REMOTE_STATUS_VALID_ISR_CLEAR_LANE = 0;
		request_local_ctrl(local_ctrl_field); //	LOCAL_CTRL_FIELD_LANE[11:10]=01

		//dfe_cdr_phase_opt();
		
		//check ready
		#if (tag_TRAIN_IF_TIME_OUT_EN==1) //APTA don't support timeout
		timeout2_start(20000); //20mS time out
		while(reg_REMOTE_STATUS_VALID_ISR_LANE==0 && !timeout2); //get ready?
		timeout_stop2;
		if(timeout2==1) 
		{
			while(reg_PIN_LOCAL_CTRL_FIELD_READY_RD_LANE==0);
	    
			apta_sim_state = 0;
			local_ctrl_field = apta_local_ctrl_tb[APTA_TERM];
 			request_local_ctrl(local_ctrl_field); //	LOCAL_CTRL_FIELD_LANE[11:10]=11 //terminate				 
			
			goto cmd_if_exit;
		}
		#else		
		while(reg_REMOTE_STATUS_VALID_ISR_LANE==0); 
		#endif	
		
		if((reg_REMOTE_STATUS_FIELD_RD_LANE_15_0_b0&0x3f) == 0x3f) { //terminate
			apta_sim_state = 0;
		}		
		else {			
			if(apta_l_r_error_check()) {
				apta_sim_state = 6; //APTA_TERM
				lnx_APTA_TERMINATE_REASON_LANE_7_0 = 0x03; //received wrong status 
			}	
		}
	}

cmd_if_exit:	
		if(	cmd_if_on > 0) {
			if(cmd_if_on==2) lnx_PHY_LOCAL_STATUS_LANE_7_0 = 1; //invalid command
			else lnx_PHY_LOCAL_STATUS_LANE_7_0 = 0; //complete
			
			lnx_PHY_MCU_LOCAL_ACK_LANE = 1;		
		}	
stop_exit:
		//-------------
		//timeout2 = 1;
		//timeout = 1; 

		reg_MCU_DEBUG0_LANE_7_0 = 2;		
		PHY_STATUS = ST_NORMAL; 
		
}	

#endif		
#endif		
