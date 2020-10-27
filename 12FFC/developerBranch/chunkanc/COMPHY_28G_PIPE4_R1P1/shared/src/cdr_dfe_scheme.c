#include "common.h"

#define _DEBUG 	_DBG_CDS

#ifdef USE_BANKING
#ifdef _28G_X2
#pragma codeseg BANK1
#else
#pragma codeseg BANK4	
#endif
#pragma constseg CSEG
#endif

#ifdef SUPPORT_NEW_CDS

//#define RXEQ_ST                 cdr_state
//#define tag_EC_PASS             reg_MCU_DEBUGC_LANE_7_0 

// -- CDS Variables
__code uint16_t cds_table[]   = {
0x15d3,//0x55F7,  //CDS_DEFAULT
#ifdef SUPPORT_PCIE_F0D_OPT
0x01D3, //CDS_DEFAULT_PCIE //exclude f0d measurement
#else
0x11D3, //CDS_DEFAULT_PCIE
#endif
0x0310, //0x57D7,  //CDS_DFE_OFST
0x75D7, //CDS_MAXEO
0x5590, //CDS_SKIPCDR
0x4000, //CDS_EYECHECK
0x0200, //CDS_EOMADAPT
0x0180, //CDS_DATAADAPT
0x1000, //CDS_F0D
0x01D3, //CDS_RXINIT
0x0093, //CDS_FASTACQ
0x55d7, //CDS_DEFAULT_PHASE_MOVE_DFE_EN 
0x05D3, //CDS_DEFAULT_PCIE_F0B
};


// -- CDS State declaration
typedef enum {
        CDS_ST_INIT            = 0,
        CDS_ST_RESET           = 1,
        CDS_ST_SAVE_RESET      = 2,
        CDS_ST_TIMEACQ         = 3,
        CDS_ST_DFE_PM0         = 4,
        CDS_ST_DFE_PM1         = 5,
        CDS_ST_DFE_PM2         = 6,
        CDS_ST_DFE_PM5         = 7,
        CDS_ST_DFE_PM3         = 8,
        CDS_ST_DFE_PM4         = 9,
        CDS_ST_DFE_CONV0       = 10,
        CDS_ST_DFE_F0A1        = 11,
        CDS_ST_DFE_CONV1       = 12,
        CDS_ST_DFE_CONV2       = 13,
        CDS_ST_DFE_CONV3       = 14,
        CDS_ST_SAVE_DFE        = 15,
        CDS_ST_DFE_DC0         = 16,
        CDS_ST_DFE_DC2         = 17,
        CDS_ST_DFE_DC3         = 18,
        CDS_ST_SAVE_DC         = 19,
        CDS_ST_DFE_F0B0        = 20,
        CDS_ST_DFE_F0B2        = 21,
        CDS_ST_DFE_F0B3        = 22,
        CDS_ST_SAVE_F0B        = 23,
        CDS_ST_DFE_F0D0        = 24,
        CDS_ST_DFE_F0D1        = 25,
        CDS_ST_DFE_F0D2        = 26,
        CDS_ST_DFE_F0D_PM      = 27,
        CDS_ST_SAVE_F0D        = 28,
        CDS_ST_MAXEO0          = 29,
        CDS_ST_MAXEO2          = 30,
        CDS_ST_MAXEO3          = 31,
        CDS_ST_SAVE_MAXEO      = 32,
        CDS_ST_EYECHK0         = 33,
        CDS_ST_EYECHK          = 34,
        CDS_ST_SAVE_EYECHK     = 35,
        CDS_ST_SAVE_LAST       = 36,
        CDS_ST_DONE            = 37
} CDS_STATE_t;

#define CDS_ST lnx_CDS_STATE_LANE_7_0
#ifdef SIM_DFE
#define CDS_ST_JUMP(name)  {CDS_ST = CDS_ST_ ## name;}
#else
#define CDS_ST_JUMP(name)
#endif
// ===================================================
// LOCAL DECLARATION


// -- Subfunction Arguments
// DFE TIMERS //
#define     Tacq        0x000 //0x300
#define     Tf0_coarse_pm   0xA01
#define     Tf0_coarse  0xA01
#define     Tdfe_coarse 0xA01
#define     Tdfe_coarse_pm  0x204
#define     Tdfe_fine   0x302
#define     Tdfe_accu   0x204 //1004 //0x4040
#define     Tf0b_fine   0x802
#define     Tf0b_accu   0x404
#define     Tf0d_coarse 0xA02
#define     Tf0d_fine   0x804
#define     Tf0d_coarse_pcie 0x802
#define     Tf0d_fine_pcie   0x604
#define     Tmaxeo_fine 0x302
#define     Tmaxeo_accu 0x204
#define     Teyechk     0xA05
#define     Tesm        0x2008 // TODO add reg
#define     Tdc_fine    0xA01
#define     Tdc_accu    0x302


typedef enum {
    FBall   = 0,
    FB0     = 1,
    FBself  = 2
} DFE_fbmd_t;

// **************************************************
// CDR_DFE_SCHEME
// Args:
//      cds_tb
// Inputs:
//#define tag_ADAPT_DATA_EN       lnx_ADAPT_DATA_EN_LANE_7_0
//#define tag_ADAPT_SLICER_EN     lnx_ADAPT_SLICER_EN_LANE_7_0
#define tag_RESET_PH_EN_DTL     lnx_RESET_PH_EN_DTL_LANE //1
#define tag_DFE_SAVE_EN         lnx_DFE_SAVE_EN_LANE //1
#define tag_PM_PH_ADJ_THRESH    2
#define tag_LOCK_DFE_ON         lnx_LOCK_DFE_ON_LANE //0
#define tag_VH_EO_MODE          lnx_VH_EO_MODE_LANE //0
//#define tag_EO_BASED            reg_EO_BASED_LANE // 0
//#define tag_EYE_CHK_DIS         //use eye_check_bypass TODO: delete- lnx_EYE_CHK_DIS_LANE //0
#define tag_TRAIN_PH_OS_ESM     0       
#define tag_EOM_EL_PHASE_DELTA_LEFT 4   
#define tag_EOM_EL_PHASE_DELTA_RIGHT 4  
#define tag_ESM_VOLTAGE         lnx_ESM_VOLTAGE_LANE_7_0
#define tag_EYE_CHK_THRESH_K    cmx_EYE_CHK_THRESH_K_3_0 	//1
#define tag_EYE_CHK_THRESH_C    cmx_EYE_CHK_THRESH_C_3_0 	//2

// Outputs:
//     reg_DFE_F0_COARSE_STEP_EN
//     reg_DFE_F0_FINE_STEP_EN
//     reg_DFE_COARSE_STEP_EN
//     reg_DFE_FINE_STEP_EN
//     reg_DFE_F0B_MODE
//     reg_DFE_F0D_MODE
//     reg_DFE_MMSE_MODE
// Return:
//      cds28
//#define ph_dat reg_MCU_DEBUG9_LANE_7_0      // TODO

void cdr_dfe_scheme(void) BANKING_CTRL{
//    bool dfe_res_done;
//    uint8_t dfe_res_run_idx;
    uint8_t f0d_dir;
    uint8_t f0d_updated;
	int8_t phase_offset_data;

	cds28.eye_check_pass = 1;

	if((dfe_dis == 1 || cmx_SKIP_CDR_DFE_SCHEME==1 ) && !do_rxinit) {
		return;
	}	

    CDS_ST_JUMP(INIT);
    lnx_CDS_ERR_CODE_LANE_7_0 = 0;
	phase_offset_data = cur_phase_offset_data;
	
    if(cds_tb & reset_en)
    {
		CDS_ST_JUMP(RESET);
        // -- Reset DFE State
        { // ??
        reg_SEL_MU_F_LANE = 0; 
        reg_ANA_RX_SEL_MU_F_LANE = 0; 
		#ifndef _28G_X2_DFE
        // Work around reset_dtl glitch in floop		
        reg_DTL_FLOOP_EN_LANE  = 0;
        reg_RESET_DTL_LANE = 1; 
        reg_RESET_DTL_LANE = 0; 
        short_delay();
        reg_DTL_FLOOP_EN_LANE  = 1;
		#else
        reg_RESET_DTL_SYNC_LANE = 1; 
        reg_RESET_DTL_SYNC_LANE = 0; 
        short_delay();		
		#endif
        }
		#ifdef _28G_X2_DFE
		reg_DFE_INIT_SEL_LANE = 0; //default/cal
		#endif
        CKCON = 0x07 ; //MCU WAIT time the slowest
        reg_RESET_DFE_LANE = 1;
        reg_RESET_DFE_LANE = 0;
        CKCON = 0x00 ; //MCU WAIT time setting back to normal.
        reg_ANA_REG_DFEE_RST_LANE = 1;
        reg_ANA_REG_DFEO_RST_LANE = 1;
        reg_ANA_REG_DFEE_RST_LANE = 0;
        reg_ANA_REG_DFEO_RST_LANE = 0;
		
		#ifdef _28G_X2_DFE
		dfe_load_all();
		#else
		if(!do_rxinit) //for save time for SATA STD
			dfe_load_type(0); //load reset
        dc_load(0); //load cal 
		#endif
		
		//if(/*lnx_RESET_PH_EN_DTL_LANE ||*/ ctrl_cdr_phase_on) {
		//	phase_offset_data = 0;
		//	set_ph_dat(0);
		//}	
		//else 
		//{
		//	set_ph_dat(train.phase_offset_data);			
		//}
				
		CDS_ST_JUMP(SAVE_RESET);
        if(lnx_DFE_SAVE_EN_LANE) {
            dfe_save();
            cds_save(Savf0a);
            cds_save(Savdfe);
            cds_save(Savdc);
			dfe_sm_dc_e_e = reg_OFST_EDGE_NEG_E_LANE_4_0 + reg_OFST_EDGE_POS_E_LANE_4_0;
			if(reg_OFST_EDGE_SIGN_E_LANE==0) dfe_sm_dc_e_e += 0x40;
			dfe_sm_dc_e_o = reg_OFST_EDGE_NEG_O_LANE_4_0 + reg_OFST_EDGE_POS_O_LANE_4_0;
			if(reg_OFST_EDGE_SIGN_O_LANE==0) dfe_sm_dc_e_o += 0x40;			
        }
    }
    if(cds_tb & coarse_dtl_en)  
    { 
		CDS_ST_JUMP(TIMEACQ);
        //reg_SEL_MU_F_LANE = 0; //never be alone dtl
        //reg_ANA_RX_SEL_MU_F_LANE = 0;
        dfe_fsm(Tacq,Updateoff);
        reg_SEL_MU_F_LANE = 1;
        reg_ANA_RX_SEL_MU_F_LANE = 1;
    }
    if(cds_tb & phase_move_with_dfe_en)
    { 
		CDS_ST_JUMP(DFE_PM0);
        //reg_DFE_MMSE_MODE_LANE = MMSE_ADAPT_MODE;
        set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
        set_dfe_fbmd(FBall);

        if(cds_tb & f0a_coarse_en) {
			CDS_ST_JUMP(DFE_PM1);
            dfe_fsm(Tf0_coarse_pm,Update0);
        }

		#if _DEBUG
		if(phase_offset_data != train.phase_offset_data)
		Printf("\r\n\t ph move w/dfe %d(%d): %d ", train.phase_offset_data, reg_EOM_DPHER_LANE_6_0, phase_offset_data);
		#endif
        timeout_start((uint16_t)1000);
        do {
			CDS_ST_JUMP(DFE_PM2); 
            dfe_fsm(Tdfe_coarse,Updatefixed);
            if(train.phase_offset_data == phase_offset_data) break;
			CDS_ST_JUMP(DFE_PM3); 
			if(phase_offset_data < (train.phase_offset_data - tag_PM_PH_ADJ_THRESH))
				phase_offset_data += tag_PM_PH_ADJ_THRESH;
			else if(phase_offset_data > (train.phase_offset_data + tag_PM_PH_ADJ_THRESH))
				phase_offset_data -= tag_PM_PH_ADJ_THRESH;
			else
				phase_offset_data = train.phase_offset_data;						
						
			phase_control_func_0(phase_offset_data, train.phase_offset_esm); //set_ph_dat(phase_offset_data);
			
		#if _DEBUG
		Printf(" %d(%d,%d) ", phase_offset_data, reg_ALIGN90_REF_LANE_5_0, reg_EOM_DPHER_LANE_6_0);
		#endif
			
        } while (!timeout);
        if(timeout) {
            lnx_CDS_ERR_CODE_LANE_7_0 |= 0x2;
            timeout = 0;
        } timeout_stop;
        cds_save(Savf0a);
        cds_save(Savdfe);
    }
	//??
    //else
    //{
	//	CDS_ST_JUMP(DFE_PM4);
    //    set_ph_dat(train.phase_offset_data);
    //}
	
	//if((cds_tb&reset_en) && ctrl_cdr_phase_on)
	//{
	//	CDS_ST_JUMP(DFE_PM4);	
	//	set_ph_dat(train.phase_offset_data);
	//}
	
    if(cds_tb & dfe_adapt_en)
    { 
		CDS_ST_JUMP(DFE_CONV0);
        //reg_DFE_MMSE_MODE_LANE = MMSE_ADAPT_MODE; //??
        reg_DFE_F0B_MODE_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 0;
        if(cds_tb & f0a_coarse_en) 
        {
			CDS_ST_JUMP(DFE_F0A1);
            set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
            set_dfe_fbmd(FBall);
            reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
            reg_DFE_F0_FINE_STEP_EN_LANE = 0;
            dfe_fsm(Tf0_coarse,Update0);
        }
        if(cds_tb & dfe_coarse_en)
        { 
			CDS_ST_JUMP(DFE_CONV1);
			if(!train_short_mode) {
				set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
				set_dfe_fbmd(FBall);
			}
            reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
            reg_DFE_F0_FINE_STEP_EN_LANE = 0;
            reg_DFE_COARSE_STEP_EN_LANE = 1;
            reg_DFE_FINE_STEP_EN_LANE = 0;
            dfe_fsm(Tdfe_coarse,Updatedfe);
        }
#ifdef _RES_ADJ_IN_CDS
        if(cds_tb & res_adj_en)
        {
        CDS_ST_JUMP(DFE_RES0);
            set_slicer_data_sampler_adapt(SLICER_SMPL_ONLY);
            set_dfe_fbmd(FBall);
            dfe_res_done = 0;
            dfe_res_run_idx = 0;
            do{
            CDS_ST_JUMP(DFE_RES_ADJ);
                dfe_res_run_idx ++;
                dfe_res_done = dfe_res_adj();
                if(dfe_res_done) break;
                else
                {
                    if(cds_tb & res_adj_coarse_en)
                    {CDS_ST_JUMP(DFE_RES1);
                        reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
                        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
                        reg_DFE_COARSE_STEP_EN_LANE = 1;
                        reg_DFE_FINE_STEP_EN_LANE = 0;
                        dfe_fsm(Tres_coarse,Updatedfe);
                    }
                    if(cds_tb & res_adj_fine_en)
                    {CDS_ST_JUMP(DFE_RES2);
                        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
                        reg_DFE_F0_FINE_STEP_EN_LANE = 1;
                        reg_DFE_COARSE_STEP_EN_LANE = 0;
                        reg_DFE_FINE_STEP_EN_LANE = 1;
                        dfe_fsm(Tres_fine,Updatedfe);
                    }
                }
            }while(dfe_res_run_idx < tag_DFE_RES_RUN_NUM);
        }
#endif
        if(cds_tb & dfe_fine_en)
        { 
			CDS_ST_JUMP(DFE_CONV2);
			if(!train_short_mode) {
				set_slicer_data_sampler_adapt(BOTH_SMPL);
				set_dfe_fbmd(FBself);
			}	
            reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
            reg_DFE_F0_FINE_STEP_EN_LANE = 0;
            reg_DFE_COARSE_STEP_EN_LANE = 1;
            reg_DFE_FINE_STEP_EN_LANE = 0;
			if(do_rxinit)
				dfe_fsm(Tacq,Updatedfe);
			else
				dfe_fsm(Tdfe_fine,Updatedfe);
			 #if _DEBUG	
			//	Printf("dfe_fine_f1:(%d,%d) ", (int8_t)reg_DFE_F1_E_2C_LANE_7_0, (int8_t)reg_DFE_F1_O_2C_LANE_7_0);
			 #endif
        }
        if(cds_tb & dfe_accu_en)
        { 
			CDS_ST_JUMP(DFE_CONV3); 
			if(!train_short_mode) {
				set_slicer_data_sampler_adapt(BOTH_SMPL);
				set_dfe_fbmd(FBself);
			}	
            reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
            reg_DFE_F0_FINE_STEP_EN_LANE = 0;
            reg_DFE_COARSE_STEP_EN_LANE = 0;
            reg_DFE_FINE_STEP_EN_LANE = 0;
			if(do_phase_adapt)
				dfe_fsm(Tdfe_accu,Updatedfe_wof1);
			else	
				dfe_fsm(Tdfe_accu,Updatedfe);

			dfe_save();
			cds_save(Savdfe);
			cds_save(Savf0a);
        }
		//beware! dfe save moved at the end of acc step for rxinit save time. 	
        //dfe_save();
        //cds_save(Savdfe);
        //cds_save(Savf0a);
    }
    if(cds_tb & dc_adapt_en)
    {
    CDS_ST_JUMP(DFE_DC0);
        //reg_DFE_MMSE_MODE_LANE = MMSE_ADAPT_MODE; //??
        reg_DFE_F0B_MODE_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 0;
    CDS_ST_JUMP(DFE_DC2);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 1;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
        reg_DFE_FINE_STEP_EN_LANE = 1;
        dfe_fsm(Tdc_fine,Updatedc);
    CDS_ST_JUMP(DFE_DC3);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
        reg_DFE_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tdc_accu,Updatedc);
    CDS_ST_JUMP(SAVE_DC);
			dfe_sm_dc_e_e = reg_OFST_EDGE_NEG_E_LANE_4_0 + reg_OFST_EDGE_POS_E_LANE_4_0;
			if(reg_OFST_EDGE_SIGN_E_LANE==0) dfe_sm_dc_e_e += 0x40;
			dfe_sm_dc_e_o = reg_OFST_EDGE_NEG_O_LANE_4_0 + reg_OFST_EDGE_POS_O_LANE_4_0;
			if(reg_OFST_EDGE_SIGN_O_LANE==0) dfe_sm_dc_e_o += 0x40;			
        //dfe_save();
        //cds_save(Savf0a);
        //cds_save(Savdfe);
        cds_save(Savdc);
    }
    if(cds_tb & f0b_adapt_en)
    {
    CDS_ST_JUMP(DFE_F0B0);
        set_slicer_data_sampler_adapt(BOTH_SMPL);
        set_dfe_fbmd(FBself);
    CDS_ST_JUMP(DFE_F0B2);
        reg_DFE_F0B_MODE_LANE = 1;
        reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tf0b_fine,Update0);

    CDS_ST_JUMP(DFE_F0B3);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tf0b_accu,Update0);

        cds_save(Savf0b);
        reg_DFE_F0B_MODE_LANE = 0;
    }
    if(cds_tb & f0d_adapt_en)
    {
    CDS_ST_JUMP(DFE_F0D0);
		if(!train_short_mode) {
			set_slicer_data_sampler_adapt(BOTH_SMPL);
			set_dfe_fbmd(FBself);
		}	
        reg_DFE_CLR_FRAC_EN_LANE = 0;
        reg_DFE_F0D_MODE_LANE = 1;
        f0d_dir = 0;
        f0d_updated = 0;

        do {
			dfe_load_type(2);
			CDS_ST_JUMP(DFE_F0D1);
            reg_DFE_F0_COARSE_STEP_EN_LANE = 1;
            reg_DFE_F0_FINE_STEP_EN_LANE = 0;
			if(!train_short_mode) 			
				dfe_fsm(Tf0d_coarse,Update0);
			else	
				dfe_fsm(Tf0d_coarse_pcie,Update0);

			CDS_ST_JUMP(DFE_F0D2);
            reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
            reg_DFE_F0_FINE_STEP_EN_LANE = 1;
			if(!train_short_mode) 			
				dfe_fsm(Tf0d_fine,Update0);
			else	
				dfe_fsm(Tf0d_fine_pcie,Update0);

			CDS_ST_JUMP(SAVE_F0D);

            if( !f0d_updated )
                cds_save(Savf0d);
            else if( f0d_dir == 0 )
                cds_save(Savf0d_l);
            else
                cds_save(Savf0d_r);

			CDS_ST_JUMP(DFE_F0D_PM);
            if(tag_VH_EO_MODE)
            {
                if(!f0d_updated){
                    f0d_updated = 1;
                    //set_ph_esm(tag_TRAIN_PH_OS_ESM - tag_EOM_EL_PHASE_DELTA_LEFT);
					phase_control_func_0(train.phase_offset_data, norm_eom_ph_os_l);
                }else if(f0d_dir == 0)
                {
                    f0d_dir = 1;
                    //set_ph_esm(tag_TRAIN_PH_OS_ESM + tag_EOM_EL_PHASE_DELTA_RIGHT);
					phase_control_func_0(train.phase_offset_data, norm_eom_ph_os_r);
                }
                else 
                {
                    //set_ph_esm(0);
					train.phase_offset_esm = norm_eom_ph_os_c; 
					phase_control_func_0(train.phase_offset_data, norm_eom_ph_os_c);					
                    break;
                }
            } else break;
        } while(1);

        reg_DFE_F0D_MODE_LANE = 0;
        reg_DFE_CLR_FRAC_EN_LANE = 1;
	
    }
	#if tag_MAXEO_ADAPT_EN
    if(cds_tb & maxeo_adapt_en)
    {
    CDS_ST_JUMP(MAXEO0);
        reg_SEL_MU_F_LANE = 0; 
        reg_ANA_RX_SEL_MU_F_LANE = 0; 
        dfe_load_type(1);
        cds_load_f0(2);
        reg_DFE_MMSE_MODE_LANE = MAXEO_ADAPT_MODE;
        reg_DFE_F0D_MODE_LANE = 1;
        set_slicer_data_sampler_adapt(BOTH_SMPL);
        set_dfe_fbmd(FBself);

    CDS_ST_JUMP(MAXEO2);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 1;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
        reg_DFE_FINE_STEP_EN_LANE = 1;
        dfe_fsm(Tmaxeo_fine, Updatedfe);

    CDS_ST_JUMP(MAXEO3);
        reg_DFE_F0_COARSE_STEP_EN_LANE = 0;
        reg_DFE_F0_FINE_STEP_EN_LANE = 0;
        reg_DFE_COARSE_STEP_EN_LANE = 0;
    CDS_ST_JUMP(DONE);
        reg_DFE_FINE_STEP_EN_LANE = 0;
        dfe_fsm(Tmaxeo_accu,Updatedfe);

        dfe_save();
        cds_save(Savdfe);
        cds_save(Savf0d);
    }	
	#endif //tag_MAXEO_ADAPT_EN
    if((cds_tb & eye_chk_en) && (lnx_EYE_CHECK_BYPASS_LANE==0))
    {	
		CDS_ST_JUMP(EYECHK0);
		reg_EOM_EN_LANE = 1;
		if(lnx_ESM_EN_LANE==0) {
			dfe_load_type(1);
			set_esm_voltage(get_ec_voltage());        			
		}	
		else         
			set_esm_voltage(lnx_ESM_VOLTAGE_LANE_7_0);		
		CDS_ST_JUMP(EYECHK);
		reg_EOM_CNT_CLR_LANE = 1;
		reg_EOM_CNT_CLR_LANE = 0;
		if(lnx_ESM_EN_LANE)
			dfe_fsm(Tesm,Updateoff);
		else
			dfe_fsm(Teyechk,Updateoff);			
		CDS_ST_JUMP(SAVE_EYECHK);
		//reg_EOM_EN_LANE = 0;
		cds28.eye_check_pass = check_eye();		
		
    }

	if(lnx_ESM_EN_LANE==0 && !do_rxinit) {
    CDS_ST_JUMP(SAVE_LAST);
		dfe_load_type(1);
		reg_EOM_EN_LANE = 0;
	}	
    CDS_ST_JUMP(DONE);
 	
}


/* **************************************************
 * SET_DFE_CONT
 * Args:
 *      on
 *      0: DFE Contunous Off
 *      1: DFE Continous On
 * Inputs:
 *      lnx_ADAPT_DATA_EN_LANE_7_0
 *      lnx_ADAPT_SLICER_EN_LANE_7_0
 * Outputs:
 *      reg_DFE_ADAPT_SPLR_EN_LANE_3_0
 */
 /* //removed because duplicated with current CDS
void set_dfe_cont(bool on)
{
    if(on)
    {
        reg_DFE_ADAPT_CONT_LANE = 1;
        reg_DFE_START_LANE = 1;
    }
    else // off
    {
        timeout_start((uint16_t)1000);
        reg_DFE_ADAPT_CONT_LANE = 0;
        while(!reg_DFE_DONE_LANE && !timeout);
        reg_DFE_START_LANE = 0;
        while(reg_DFE_DONE_LANE && !timeout);
        timeout_stop;
    }
}
*/

/* **************************************************
 * set_slicer_data_sampler_adapt
 * Args:
 *      sel
 *      0: adapt error path Only
 *      1: adapt both path
 * Inputs:
 *      tag_ADAPT_DATA_EN
 *      tag_ADAPT_SLICER_EN
 * Outputs:
 *      reg_DFE_ADAPT_SPLR_EN_LANE_3_0
 */
 /* //removed because duplicated with current CDS
void set_slicer_data_sampler_adapt(uint8_t sel)
{
    if(
        (tag_ADAPT_DATA_EN && tag_ADAPT_SLICER_EN) ||
        (!tag_ADAPT_DATA_EN && !tag_ADAPT_SLICER_EN)
    )
    {
        if(sel) // Both
            reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xf;
        else    // Err Only
            reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xc;
    }
    else
    {
        if (tag_ADAPT_DATA_EN)
            reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0x3;
        else //  tag_ADAPT_SLICER_EN
            reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = 0xc;
    }
    reg_DFE_ADAPT_SPLR_EN_LANE_3_0 &= ~reg_CDS_ADAPT_SPLR_DIS_LANE_3_0;
}
*/


 
 #ifdef _28G_X2_DFE
 void dfe_load_all(void) BANKING_CTRL {
	reg_DFE_DC_LOAD_LANE = 1; 
	reg_DFE_DC_LOAD_LANE = 0;
	reg_DFE_TAP_REFRESH_E_LANE = 1;
	reg_DFE_TAP_REFRESH_E_LANE = 0;
	reg_DFE_TAP_REFRESH_O_LANE = 1;
	reg_DFE_TAP_REFRESH_O_LANE = 0;
	
	timeout_start(100);
	while(1) {
		if(timeout) break;
		if(reg_DFE_UPDATED_LANE) {
		 short_delay();
 		 if(reg_DFE_UPDATED_LANE ) break;
		}
	}	
 }
#endif
 

#endif 

/* TODO
void dfe_dc_latch(void) BANKING_CTRL {
	
	if(dfe_dis) return;
	
	memcpy((uint8_t *)&DFE_FEXT_EVEN_REG0, (uint8_t *)&DFE_READ_EVEN_SM_REG0, sizeof(Status_dfe_sm_t));
	
	reg_DFE_FEXTDC_D_P_E_LANE_6_0 = reg_DFE_DC_D_P_E_SM_LANE_6_0;
	reg_DFE_FEXTDC_D_N_E_LANE_6_0 = reg_DFE_DC_D_N_E_SM_LANE_6_0;
	reg_DFE_FEXTDC_S_P_E_LANE_6_0 =	reg_DFE_DC_S_P_E_SM_LANE_6_0;
	reg_DFE_FEXTDC_S_N_E_LANE_6_0 =	reg_DFE_DC_S_N_E_SM_LANE_6_0;
	reg_DFE_FEXTDC_D_P_O_LANE_6_0 =	reg_DFE_DC_D_P_O_SM_LANE_6_0;
	reg_DFE_FEXTDC_D_N_O_LANE_6_0 =	reg_DFE_DC_D_N_O_SM_LANE_6_0;
	reg_DFE_FEXTDC_S_P_O_LANE_6_0 =	reg_DFE_DC_S_P_O_SM_LANE_6_0;
	reg_DFE_FEXTDC_S_N_O_LANE_6_0 =	reg_DFE_DC_S_N_O_SM_LANE_6_0;
	dfe_sm_dc_e_e = reg_OFST_EDGE_NEG_E_LANE_4_0 + reg_OFST_EDGE_POS_E_LANE_4_0;
	if(reg_OFST_EDGE_SIGN_E_LANE==0) dfe_sm_dc_e_e += 0x40;
	dfe_sm_dc_e_o = reg_OFST_EDGE_NEG_O_LANE_4_0 + reg_OFST_EDGE_POS_O_LANE_4_0;
	if(reg_OFST_EDGE_SIGN_O_LANE==0) dfe_sm_dc_e_o += 0x40;
	reg_DFE_FEXTDC_E_E_LANE_6_0   = dfe_sm_dc_e_e;
	reg_DFE_FEXTDC_E_O_LANE_6_0   = dfe_sm_dc_e_o;
	
	reg_DFE_INIT_SEL_LANE = 1;
	
}
*/

/* **************************************************
 * GET_EC_VOLTAGE
 * Inputs:
 *      F0D
 *      F0A
 *      tag_EO_BASED
 *      tag_EYE_CHK_THRESH_K
 *      tag_EYE_CHK_THRESH_C
 * Return:
 *      f0: eye check voltage
 */
uint8_t get_ec_voltage() BANKING_CTRL {
    uint8_t f0;
    uint8_t f0_min;
    //if(tag_EO_BASED)
    {
        f0_min =            cds28.f0d.d_p_e;
        f0_min = min(f0_min,cds28.f0d.d_n_e);
        f0_min = min(f0_min,cds28.f0d.s_p_e);
        f0_min = min(f0_min,cds28.f0d.s_n_e);
        f0_min = min(f0_min,cds28.f0d.d_p_o);
        f0_min = min(f0_min,cds28.f0d.d_n_o);
        f0_min = min(f0_min,cds28.f0d.s_p_o);
        f0_min = min(f0_min,cds28.f0d.s_n_o);
    }
    //else
    //{
    //    f0_min =            cds28.f0d.d_p_e;
    //    f0_min = min(f0_min,cds28.f0d.d_n_e);
    //    f0_min = min(f0_min,cds28.f0d.s_p_e);
    //    f0_min = min(f0_min,cds28.f0d.s_n_e);
    //    f0_min = min(f0_min,cds28.f0d.d_p_o);
    //    f0_min = min(f0_min,cds28.f0d.d_n_o);
    //    f0_min = min(f0_min,cds28.f0d.s_p_o);
    //    f0_min = min(f0_min,cds28.f0d.s_n_o);
    //}
    f0 = (f0_min >> tag_EYE_CHK_THRESH_K) + tag_EYE_CHK_THRESH_C;
    return f0;
}



/* **************************************************
 * DFE_SPD_INIT
 * Inputs:
 *      reg_RX_SPEED_DIV_LANE_2_0
 * Outputs:
 *      reg_DFE_EVEN_ODD_SIM_ADAPT_LANE
 *      reg_DFE_ADAPT_EVEN_EN_LANE
 *      reg_DFE_ADAPT_ODD_EN_LANE
 *      reg_CDS_ADAPT_SPLR_DIS_LANE_3_0
 *      reg_CDS_UPDATE_ODD_DIS_LANE
 *      reg_CDS_UPDATE_F_DIS_LANE
 */
 /* //removed because of duplicate in spdchg
void dfe_spd_init() BANKING_CTRL {
    // Default: Enable both even and odd path adaptation
    reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 1;
    reg_DFE_ADAPT_EVEN_EN_LANE = 1;
    reg_DFE_ADAPT_ODD_EN_LANE = 1;
    reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 0;
    reg_CDS_UPDATE_ODD_DIS_LANE = 0;
    reg_CDS_UPDATE_F_DIS_LANE = 0;

    switch(reg_RX_SPEED_DIV_LANE_2_0 & 0x3)
    {
        case 3:  // Disable even path adaptation
            reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 0;
            reg_DFE_ADAPT_EVEN_EN_LANE = 0;
            reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 5;
            break;
        case 2:  // Disable odd path adaptation
            reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 0;
            reg_DFE_ADAPT_ODD_EN_LANE = 0;
            reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 5;
            break;
        case 1:  // Disable even path adaptation
            reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 0;
            reg_DFE_ADAPT_EVEN_EN_LANE = 0;
            reg_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 5;
            reg_CDS_UPDATE_ODD_DIS_LANE = 1;
            reg_CDS_UPDATE_F_DIS_LANE = 1;
            break;
    }
}
*/

#ifdef _RES_ADJ_IN_CDS
/* **************************************************
 * DFE_RES_ADJ
 * Return:
 *      0: dfe res changed, need to re-adapt
 *      1: dfe res not changed, res adj done
 * Inputs:
 *      reg_DFE_MMSE_MODE_LANE
 *      reg_DFE_ADAPT_SPLR_EN_LANE_3_0
 *      RXEQ_STATE
 * Outputs:
 *      reg_DFE_RES_F1_LANE_1_0
 *      reg_DFE_RES_F234_LANE
 *      reg_DFE_RES_F567_LANE
 *      reg_DFE_RES_F8TO15_LANE
 *      reg_DFE_RES_FLOATING_LANE
 */

bool dfe_res_adj(void) BANKING_CTRL {
    bool ofh,ofl; // Overflow Hi/Lo
    uint8_t mag;
    bool done;
    done = 1;

    // -- res1
    ofh = 0; ofl = 0; mag = 0;
    mag = reg_DFE_F1_E_SM_LANE_5_0 & 0x3f; if(mag > tag_DFE_REA_F1_HIGH) ofh = 1; if(mag > tag_DFE_REA_F1_LOW) ofl = 1;
    mag = reg_DFE_F1_O_SM_LANE_5_0 & 0x3f; if(mag > tag_DFE_REA_F1_HIGH) ofh = 1; if(mag > tag_DFE_REA_F1_LOW) ofl = 1;
    if (ofh && (reg_DFE_RES_F1_LANE_1_0 < 3)) 
    {
        reg_DFE_RES_F1_LANE_1_0++;
        done = 0;
    }
    else if (~ofl && (reg_DFE_RES_F1_LANE_1_0 > 0))
    {
        reg_DFE_RES_F1_LANE_1_0--;
        done = 0;
    }
    
    // -- res234
    ofh = 0; ofl = 0; mag = 0;
    mag = reg_DFE_F2_D_P_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_D_N_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_S_P_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_S_N_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_D_P_O_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_D_N_O_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_S_P_O_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;
    mag = reg_DFE_F2_S_N_O_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F2_HIGH) ofh = 1; if(mag > tag_DFE_REA_F2_LOW) ofl = 1;

    mag = reg_DFE_F3_D_P_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_D_N_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_S_P_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_S_N_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_D_P_O_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_D_N_O_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_S_P_O_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;
    mag = reg_DFE_F3_S_N_O_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F3_HIGH) ofh = 1; if(mag > tag_DFE_REA_F3_LOW) ofl = 1;

    mag = reg_DFE_F4_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F4_HIGH) ofh = 1; if(mag > tag_DFE_REA_F4_LOW) ofl = 1;
    mag = reg_DFE_F4_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F4_HIGH) ofh = 1; if(mag > tag_DFE_REA_F4_LOW) ofl = 1;

    if (ofh && (reg_DFE_RES_F234_LANE == 0)) 
    {
        reg_DFE_RES_F234_LANE = 1;
        done = 0;
    }
    else if (~ofl && (reg_DFE_RES_F234_LANE == 1))
    {
        reg_DFE_RES_F234_LANE = 0;
        done = 0;
    }

    // -- res567
    ofh = 0; ofl = 0; mag = 0;
    mag = reg_DFE_F5_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F5_HIGH) ofh = 1; if(mag > tag_DFE_REA_F5_LOW) ofl = 1;
    mag = reg_DFE_F5_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F5_HIGH) ofh = 1; if(mag > tag_DFE_REA_F5_LOW) ofl = 1;
    mag = reg_DFE_F6_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F6_HIGH) ofh = 1; if(mag > tag_DFE_REA_F6_LOW) ofl = 1;
    mag = reg_DFE_F6_E_SM_LANE_5_0 & 0x1f; if(mag > tag_DFE_REA_F6_HIGH) ofh = 1; if(mag > tag_DFE_REA_F6_LOW) ofl = 1;
    mag = reg_DFE_F7_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F7_HIGH) ofh = 1; if(mag > tag_DFE_REA_F7_LOW) ofl = 1;
    mag = reg_DFE_F7_E_SM_LANE_4_0 & 0x0f; if(mag > tag_DFE_REA_F7_HIGH) ofh = 1; if(mag > tag_DFE_REA_F7_LOW) ofl = 1;
    if (ofh && (reg_DFE_RES_F567_LANE == 0)) 
    {
        reg_DFE_RES_F567_LANE = 1;
        done = 0;
    }
    else if (~ofl && (reg_DFE_RES_F567_LANE == 1))
    {
        reg_DFE_RES_F567_LANE = 0;
        done = 0;
    }
    // -- res8to15
    // -- resfloating
    return done;
}
#endif

