
/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cds_base.c
* \purpose CDR DFE Control
* \History
*	1/12/2018 Heejeong Ryu		moved some function from CDS
*/

#include "common.h"

//#ifdef USE_BANKING
//#pragma codeseg BANK4
//#pragma constseg BANK4
//#endif

#define tag_EYE_CHK_THRESH_ERR  1024L   
#define tag_EYE_CHK_THRESH_VLD  100L    


/* **************************************************
 * CHECK_EYE
 * Inputs:
 *      reg_EOM_ERR_CNT_P/N_E/O_LANE_31_0_b3/2/1/0
 *      reg_EOM_VLD_CNT_P/N_E/O_LANE_31_0_b3/2/1/0
 *      tag_EYE_CHK_DIS
 * Return:
 *      0: eye check didn't pass
 *      1: eye check pass
 */
#ifdef SUPPORT_EXT_MEM

//uint32_t maxu32_ram(uint32_t a, uint32_t b) BANKING_CTRL {
uint32_t maxu32_ram(uint32_t a, uint32_t b) {
    if(a>b) return a;
    else return b;
}

//bool check_eye_ram(void) BANKING_CTRL
bool check_eye_ram(void)
{
    uint32_t err_cnt;
    uint32_t pop_cnt;
	
    pop_cnt = EOM_VLD_REG0.VAL;
    pop_cnt = maxu32_ram(pop_cnt,EOM_VLD_REG1.VAL);
    pop_cnt = maxu32_ram(pop_cnt,EOM_VLD_REG2.VAL);
    pop_cnt = maxu32_ram(pop_cnt,EOM_VLD_REG3.VAL);
    err_cnt = EOM_ERR_REG0.VAL;
    err_cnt = maxu32_ram(err_cnt,EOM_ERR_REG1.VAL);
    err_cnt = maxu32_ram(err_cnt,EOM_ERR_REG2.VAL);
    err_cnt = maxu32_ram(err_cnt,EOM_ERR_REG3.VAL);

    if(pop_cnt < (uint32_t)cmx_EYE_CHK_THRESH_VLD_7_0) return 0;
    if(err_cnt > (uint32_t)cmx_EYE_CHK_THRESH_ERR_15_0) return 0;
    return 1;
}

//void set_esm_voltage_ram(uint8_t f0) BANKING_CTRL {
void set_esm_voltage_ram(uint8_t f0) {
    reg_DFE_FEXT0_D_P_E_LANE_5_0      = f0; 
    reg_DFE_FEXT0_D_N_E_LANE_5_0      = f0; 
    reg_DFE_FEXT0_S_P_E_LANE_5_0      = f0; 
    reg_DFE_FEXT0_S_N_E_LANE_5_0      = f0; 
    reg_DFE_FEXT0_D_P_O_LANE_5_0      = f0; 
    reg_DFE_FEXT0_D_N_O_LANE_5_0      = f0; 
    reg_DFE_FEXT0_S_P_O_LANE_5_0      = f0; 
    reg_DFE_FEXT0_S_N_O_LANE_5_0      = f0; 
    DFE_FEN_EVEN_REG.BT.B0    = 0x0f;
    DFE_FEN_EVEN_REG.BT.B0    = 0;
    DFE_FEN_ODD_REG.BT.B0     = 0x0f;
    DFE_FEN_ODD_REG.BT.B0     = 0;
}

/* **************************************************
 * dfe_load_type_ram
 * Args:
 *      type
 *      0: EXT
 *      1: SAV
 *      2: F0 Only
 * Inputs:
 *      FEXT
 *      dfe_sm
 *      cds.dfe_res
 * Outputs:
 *      F0
 *      F1+
 *      OFST
 *      DFE_RES*
 */
//void dfe_load_type_ram(uint8_t type) BANKING_CTRL {
void dfe_load_type_ram(uint8_t type) {
    switch(type)
    {
#ifndef _28G_X2
        case 0:
            // load Ext
            // DFE_RES = current register value
            DFE_FEN_EVEN_REG.VAL    = 0x7fffffffL;
            DFE_FEN_ODD_REG.VAL     = 0x7fffffffL;
            DFE_FEN_EVEN_REG.VAL    = 0;
            DFE_FEN_ODD_REG.VAL     = 0;
            break;
#endif			
        case 1: // load from SAV
#ifdef _RES_ADJ_IN_CDS
            reg_DFE_RES_F1_LANE_1_0     = cds28.dfe_res.res_f1;
            reg_DFE_RES_F234_LANE       = cds28.dfe_res.res_f234;
            reg_DFE_RES_F567_LANE       = cds28.dfe_res.res_f567;
            reg_DFE_RES_F8TO15_LANE     = cds28.dfe_res.res_f8to15;
            reg_DFE_RES_FLOATING_LANE   = cds28.dfe_res.res_floating;
#endif
#if 1
            memcpy_ram((uint8_t *)&DFE_FEXT_EVEN_REG0, (uint8_t *)&dfe_sm, sizeof(Status_dfe_sm_t));
#else
            reg_DFE_FEXT0_D_P_E_LANE_5_0      = dfe_sm.f0_d_p_e; 
            reg_DFE_FEXT0_D_N_E_LANE_5_0      = dfe_sm.f0_d_n_e; 
            reg_DFE_FEXT0_S_P_E_LANE_5_0      = dfe_sm.f0_s_p_e; 
            reg_DFE_FEXT0_S_N_E_LANE_5_0      = dfe_sm.f0_s_n_e; 
            reg_DFE_FEXT0_D_P_O_LANE_5_0      = dfe_sm.f0_d_p_o; 
            reg_DFE_FEXT0_D_N_O_LANE_5_0      = dfe_sm.f0_d_n_o; 
            reg_DFE_FEXT0_S_P_O_LANE_5_0      = dfe_sm.f0_s_p_o; 
            reg_DFE_FEXT0_S_N_O_LANE_5_0      = dfe_sm.f0_s_n_o; 

            reg_DFE_FEXT2_D_P_E_LANE_5_0      = dfe_sm.f2_d_p_e; 
            reg_DFE_FEXT2_D_N_E_LANE_5_0      = dfe_sm.f2_d_n_e; 
            reg_DFE_FEXT2_S_P_E_LANE_5_0      = dfe_sm.f2_s_p_e; 
            reg_DFE_FEXT2_S_N_E_LANE_5_0      = dfe_sm.f2_s_n_e; 
            reg_DFE_FEXT2_D_P_O_LANE_5_0      = dfe_sm.f2_d_p_o; 
            reg_DFE_FEXT2_D_N_O_LANE_5_0      = dfe_sm.f2_d_n_o; 
            reg_DFE_FEXT2_S_P_O_LANE_5_0      = dfe_sm.f2_s_p_o; 
            reg_DFE_FEXT2_S_N_O_LANE_5_0      = dfe_sm.f2_s_n_o; 

            reg_DFE_FEXT3_D_P_E_LANE_4_0      = dfe_sm.f3_d_p_e; 
            reg_DFE_FEXT3_D_N_E_LANE_4_0      = dfe_sm.f3_d_n_e; 
            reg_DFE_FEXT3_S_P_E_LANE_4_0      = dfe_sm.f3_s_p_e; 
            reg_DFE_FEXT3_S_N_E_LANE_4_0      = dfe_sm.f3_s_n_e; 
            reg_DFE_FEXT3_D_P_O_LANE_4_0      = dfe_sm.f3_d_p_o; 
            reg_DFE_FEXT3_D_N_O_LANE_4_0      = dfe_sm.f3_d_n_o; 
            reg_DFE_FEXT3_S_P_O_LANE_4_0      = dfe_sm.f3_s_p_o; 
            reg_DFE_FEXT3_S_N_O_LANE_4_0      = dfe_sm.f3_s_n_o;

            reg_DFE_FEXT1_E_LANE_5_0          = dfe_sm.f1_e;
            reg_DFE_FEXT4_E_LANE_5_0          = dfe_sm.f4_e;
            reg_DFE_FEXT5_E_LANE_5_0          = dfe_sm.f5_e;
            reg_DFE_FEXT6_E_LANE_5_0          = dfe_sm.f6_e;
            reg_DFE_FEXT7_E_LANE_4_0          = dfe_sm.f7_e;
            reg_DFE_FEXT8_E_LANE_4_0          = dfe_sm.f8_e;
            reg_DFE_FEXT9_E_LANE_4_0          = dfe_sm.f9_e;
            reg_DFE_FEXT10_E_LANE_4_0         = dfe_sm.f10_e;
            reg_DFE_FEXT11_E_LANE_4_0         = dfe_sm.f11_e;
            reg_DFE_FEXT12_E_LANE_4_0         = dfe_sm.f12_e;
            reg_DFE_FEXT13_E_LANE_4_0         = dfe_sm.f13_e;
            reg_DFE_FEXT14_E_LANE_4_0         = dfe_sm.f14_e;
            reg_DFE_FEXT15_E_LANE_4_0         = dfe_sm.f15_e;

            reg_DFE_FEXT1_O_LANE_5_0          = dfe_sm.f1_o;
            reg_DFE_FEXT4_O_LANE_5_0          = dfe_sm.f4_o;
            reg_DFE_FEXT5_O_LANE_5_0          = dfe_sm.f5_o;
            reg_DFE_FEXT6_O_LANE_5_0          = dfe_sm.f6_o;
            reg_DFE_FEXT7_O_LANE_4_0          = dfe_sm.f7_o;
            reg_DFE_FEXT8_O_LANE_4_0          = dfe_sm.f8_o;
            reg_DFE_FEXT9_O_LANE_4_0          = dfe_sm.f9_o;
            reg_DFE_FEXT10_O_LANE_4_0         = dfe_sm.f10_o;
            reg_DFE_FEXT11_O_LANE_4_0         = dfe_sm.f11_o;
            reg_DFE_FEXT12_O_LANE_4_0         = dfe_sm.f12_o;
            reg_DFE_FEXT13_O_LANE_4_0         = dfe_sm.f13_o;
            reg_DFE_FEXT14_O_LANE_4_0         = dfe_sm.f14_o;
            reg_DFE_FEXT15_O_LANE_4_0         = dfe_sm.f15_o;

            reg_DFE_FEXTF0_E_LANE_5_0         = dfe_sm.ff0_e;
            reg_DFE_FEXTF1_E_LANE_5_0         = dfe_sm.ff1_e;
            reg_DFE_FEXTF2_E_LANE_5_0         = dfe_sm.ff2_e;
            reg_DFE_FEXTF3_E_LANE_5_0         = dfe_sm.ff3_e;
            reg_DFE_FEXTF4_E_LANE_5_0         = dfe_sm.ff4_e;
            reg_DFE_FEXTF5_E_LANE_5_0         = dfe_sm.ff5_e;

            reg_DFE_FEXTF0_O_LANE_5_0         = dfe_sm.ff0_o;
            reg_DFE_FEXTF1_O_LANE_5_0         = dfe_sm.ff1_o;
            reg_DFE_FEXTF2_O_LANE_5_0         = dfe_sm.ff2_o;
            reg_DFE_FEXTF3_O_LANE_5_0         = dfe_sm.ff3_o;
            reg_DFE_FEXTF4_O_LANE_5_0         = dfe_sm.ff4_o;
            reg_DFE_FEXTF5_O_LANE_5_0         = dfe_sm.ff5_o;
#endif
            DFE_FEN_EVEN_REG.VAL    = 0x7fffffffL;
            DFE_FEN_EVEN_REG.VAL    = 0;
            DFE_FEN_ODD_REG.VAL     = 0x7fffffffL;
            DFE_FEN_ODD_REG.VAL     = 0;
            break;
        case 2:
            // load F0 only
            reg_DFE_FEXT0_D_P_E_LANE_5_0      = dfe_sm.f0_d_p_e; 
            reg_DFE_FEXT0_D_N_E_LANE_5_0      = dfe_sm.f0_d_n_e; 
            reg_DFE_FEXT0_S_P_E_LANE_5_0      = dfe_sm.f0_s_p_e; 
            reg_DFE_FEXT0_S_N_E_LANE_5_0      = dfe_sm.f0_s_n_e; 
            reg_DFE_FEXT0_D_P_O_LANE_5_0      = dfe_sm.f0_d_p_o; 
            reg_DFE_FEXT0_D_N_O_LANE_5_0      = dfe_sm.f0_d_n_o; 
            reg_DFE_FEXT0_S_P_O_LANE_5_0      = dfe_sm.f0_s_p_o; 
            reg_DFE_FEXT0_S_N_O_LANE_5_0      = dfe_sm.f0_s_n_o; 
            DFE_FEN_EVEN_REG.BT.B0    = 0x0f;
            DFE_FEN_EVEN_REG.BT.B0    = 0;
            DFE_FEN_ODD_REG.BT.B0     = 0x0f;
            DFE_FEN_ODD_REG.BT.B0     = 0;
            break;
        default: break;
    }
    while(!reg_DFE_UPDATED_LANE);
}

/* **************************************************
 * DFE_SAVE
 * Inputs: 
 *      reg_DFE_*_SM
 * Outputs:
 *      dfe_sm
 */
//void dfe_save_ram(void) BANKING_CTRL {
void dfe_save_ram(void) {
    memcpy_ram((uint8_t *)&dfe_sm, (uint8_t *)&DFE_READ_EVEN_SM_REG0, sizeof(Status_dfe_sm_t));
}

/* **************************************************
 * CDS_SAVE
 * Args:
 *      type
 *      0: F0A
 *      1: F0B
 *      2: F0D
 *      3: F0D_l
 *      4: F0D_r
 *     10: DFE (everything)
 *     11: eyechk
 *     12: DC
 */
//void cds_save_ram(uint8_t type) BANKING_CTRL {
void cds_save_ram(uint8_t type) {
    switch(type)
    {
        case Savf0a:
            cds28.f0a.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
            cds28.f0a.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
            cds28.f0a.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
            cds28.f0a.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
            cds28.f0a.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
            cds28.f0a.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
            cds28.f0a.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
            cds28.f0a.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
            cds28.f0a_saturate =  reg_DFE_SATUR_STATUS_LANE ? 1 : 0;
            break;    
        case Savf0b:
            cds28.f0b.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
            cds28.f0b.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
            cds28.f0b.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
            cds28.f0b.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
            cds28.f0b.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
            cds28.f0b.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
            cds28.f0b.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
            cds28.f0b.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
            break;
        case Savf0d:
            cds28.f0d.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
            cds28.f0d.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
            cds28.f0d.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
            cds28.f0d.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
            cds28.f0d.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
            cds28.f0d.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
            cds28.f0d.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
            cds28.f0d.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
	#if _DBG_PHASE_ADAPT
		reg_MCU_DEBUGA_LANE_7_0 = reg_EOM_DPHER_LANE_6_0;
	#endif				
            break;
        case Savf0d_l:
            cds28.f0d_left.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
            cds28.f0d_left.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
            cds28.f0d_left.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
            cds28.f0d_left.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
            cds28.f0d_left.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
            cds28.f0d_left.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
            cds28.f0d_left.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
            cds28.f0d_left.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
	#if _DBG_PHASE_ADAPT
		reg_MCU_DEBUGB_LANE_7_0 = reg_EOM_DPHER_LANE_6_0;
	#endif	
            break;
        case Savf0d_r:
            cds28.f0d_right.d_p_e = reg_DFE_F0_D_P_E_2C_LANE_7_0;
            cds28.f0d_right.d_n_e = reg_DFE_F0_D_N_E_2C_LANE_7_0;
            cds28.f0d_right.s_p_e = reg_DFE_F0_S_P_E_2C_LANE_7_0;
            cds28.f0d_right.s_n_e = reg_DFE_F0_S_N_E_2C_LANE_7_0;
            cds28.f0d_right.d_p_o = reg_DFE_F0_D_P_O_2C_LANE_7_0;
            cds28.f0d_right.d_n_o = reg_DFE_F0_D_N_O_2C_LANE_7_0;
            cds28.f0d_right.s_p_o = reg_DFE_F0_S_P_O_2C_LANE_7_0;
            cds28.f0d_right.s_n_o = reg_DFE_F0_S_N_O_2C_LANE_7_0;
	#if _DBG_PHASE_ADAPT
		reg_MCU_DEBUGC_LANE_7_0 = reg_EOM_DPHER_LANE_6_0;
	#endif	
            break;
        case Savdfe:
#ifdef _RES_ADJ_IN_CDS
             ASSIGN8(cds28.dfe_res.res_f1         ,    reg_DFE_RES_F1_LANE_1_0  )
             ASSIGN8(cds28.dfe_res.res_f234       ,    reg_DFE_RES_F234_LANE    )
             ASSIGN8(cds28.dfe_res.res_f567       ,    reg_DFE_RES_F567_LANE    )
             ASSIGN8(cds28.dfe_res.res_f8to15     ,    reg_DFE_RES_F8TO15_LANE  )
             ASSIGN8(cds28.dfe_res.res_floating   ,    reg_DFE_RES_FLOATING_LANE)
#endif
#if 1
            // this one copies F0A as well
            memcpy_ram((uint8_t *)&(cds28.dfe_2c), (uint8_t *)&DFE_READ_EVEN_2C_REG0, sizeof(Status_dfe_2c_t));
#else
            // -- even
            cds28.dfe_2c.f1_e       = reg_DFE_F1_E_2C_LANE_7_0;
            cds28.dfe_2c.f2_d_p_e   = reg_DFE_F2_D_P_E_2C_LANE_7_0;
            cds28.dfe_2c.f2_d_n_e   = reg_DFE_F2_D_N_E_2C_LANE_7_0;
            cds28.dfe_2c.f2_s_p_e   = reg_DFE_F2_S_P_E_2C_LANE_7_0;
            cds28.dfe_2c.f2_s_n_e   = reg_DFE_F2_S_N_E_2C_LANE_7_0;
            cds28.dfe_2c.f3_d_p_e   = reg_DFE_F3_D_P_E_2C_LANE_7_0;
            cds28.dfe_2c.f3_d_n_e   = reg_DFE_F3_D_N_E_2C_LANE_7_0;
            cds28.dfe_2c.f3_s_p_e   = reg_DFE_F3_S_P_E_2C_LANE_7_0;
            cds28.dfe_2c.f3_s_n_e   = reg_DFE_F3_S_N_E_2C_LANE_7_0;
            cds28.dfe_2c.f4_e       =  reg_DFE_F4_E_2C_LANE_7_0;
            cds28.dfe_2c.f5_e       =  reg_DFE_F5_E_2C_LANE_7_0;
            cds28.dfe_2c.f6_e       =  reg_DFE_F6_E_2C_LANE_7_0;
            cds28.dfe_2c.f7_e       =  reg_DFE_F7_E_2C_LANE_7_0;
            cds28.dfe_2c.f8_e       =  reg_DFE_F8_E_2C_LANE_7_0;
            cds28.dfe_2c.f9_e       =  reg_DFE_F9_E_2C_LANE_7_0;
            cds28.dfe_2c.f10_e      = reg_DFE_F10_E_2C_LANE_7_0;
            cds28.dfe_2c.f11_e      = reg_DFE_F11_E_2C_LANE_7_0;
            cds28.dfe_2c.f12_e      = reg_DFE_F12_E_2C_LANE_7_0;
            cds28.dfe_2c.f13_e      = reg_DFE_F13_E_2C_LANE_7_0;
            cds28.dfe_2c.f14_e      = reg_DFE_F14_E_2C_LANE_7_0;
            cds28.dfe_2c.f15_e      = reg_DFE_F15_E_2C_LANE_7_0;
            cds28.dfe_2c.ff0_e      = reg_DFE_FF0_E_2C_LANE_7_0;
            cds28.dfe_2c.ff1_e      = reg_DFE_FF1_E_2C_LANE_7_0;
            cds28.dfe_2c.ff2_e      = reg_DFE_FF2_E_2C_LANE_7_0;
            cds28.dfe_2c.ff3_e      = reg_DFE_FF3_E_2C_LANE_7_0;
            cds28.dfe_2c.ff4_e      = reg_DFE_FF4_E_2C_LANE_7_0;
            cds28.dfe_2c.ff5_e      = reg_DFE_FF5_E_2C_LANE_7_0;
            // -- odd
            cds28.dfe_2c.f1_o       = reg_DFE_F1_O_2C_LANE_7_0;
            cds28.dfe_2c.f2_d_p_o   = reg_DFE_F2_D_P_O_2C_LANE_7_0;
            cds28.dfe_2c.f2_d_n_o   = reg_DFE_F2_D_N_O_2C_LANE_7_0;
            cds28.dfe_2c.f2_s_p_o   = reg_DFE_F2_S_P_O_2C_LANE_7_0;
            cds28.dfe_2c.f2_s_n_o   = reg_DFE_F2_S_N_O_2C_LANE_7_0;
            cds28.dfe_2c.f3_d_p_o   = reg_DFE_F3_D_P_O_2C_LANE_7_0;
            cds28.dfe_2c.f3_d_n_o   = reg_DFE_F3_D_N_O_2C_LANE_7_0;
            cds28.dfe_2c.f3_s_p_o   = reg_DFE_F3_S_P_O_2C_LANE_7_0;
            cds28.dfe_2c.f3_s_n_o   = reg_DFE_F3_S_N_O_2C_LANE_7_0;
            cds28.dfe_2c.f4_o       =  reg_DFE_F4_O_2C_LANE_7_0;
            cds28.dfe_2c.f5_o       =  reg_DFE_F5_O_2C_LANE_7_0;
            cds28.dfe_2c.f6_o       =  reg_DFE_F6_O_2C_LANE_7_0;
            cds28.dfe_2c.f7_o       =  reg_DFE_F7_O_2C_LANE_7_0;
            cds28.dfe_2c.f8_o       =  reg_DFE_F8_O_2C_LANE_7_0;
            cds28.dfe_2c.f9_o       =  reg_DFE_F9_O_2C_LANE_7_0;
            cds28.dfe_2c.f10_o      = reg_DFE_F10_O_2C_LANE_7_0;
            cds28.dfe_2c.f11_o      = reg_DFE_F11_O_2C_LANE_7_0;
            cds28.dfe_2c.f12_o      = reg_DFE_F12_O_2C_LANE_7_0;
            cds28.dfe_2c.f13_o      = reg_DFE_F13_O_2C_LANE_7_0;
            cds28.dfe_2c.f14_o      = reg_DFE_F14_O_2C_LANE_7_0;
            cds28.dfe_2c.f15_o      = reg_DFE_F15_O_2C_LANE_7_0;
            cds28.dfe_2c.ff0_o      = reg_DFE_FF0_O_2C_LANE_7_0;
            cds28.dfe_2c.ff1_o      = reg_DFE_FF1_O_2C_LANE_7_0;
            cds28.dfe_2c.ff2_o      = reg_DFE_FF2_O_2C_LANE_7_0;
            cds28.dfe_2c.ff3_o      = reg_DFE_FF3_O_2C_LANE_7_0;
            cds28.dfe_2c.ff4_o      = reg_DFE_FF4_O_2C_LANE_7_0;
            cds28.dfe_2c.ff5_o      = reg_DFE_FF5_O_2C_LANE_7_0;
#endif
            break;
        case Savdc:
            dfe_sm_dc.dc_d_p_e = reg_DFE_DC_D_P_E_SM_LANE_6_0;
            dfe_sm_dc.dc_d_n_e = reg_DFE_DC_D_N_E_SM_LANE_6_0;
            dfe_sm_dc.dc_s_p_e = reg_DFE_DC_S_P_E_SM_LANE_6_0;
            dfe_sm_dc.dc_s_n_e = reg_DFE_DC_S_N_E_SM_LANE_6_0;
            dfe_sm_dc.dc_d_p_o = reg_DFE_DC_D_P_O_SM_LANE_6_0;
            dfe_sm_dc.dc_d_n_o = reg_DFE_DC_D_N_O_SM_LANE_6_0;
            dfe_sm_dc.dc_s_p_o = reg_DFE_DC_S_P_O_SM_LANE_6_0;
            dfe_sm_dc.dc_s_n_o = reg_DFE_DC_S_N_O_SM_LANE_6_0;

            cds28.dfe_2c_dc.dc_d_p_e = reg_DFE_DC_D_P_E_2C_LANE_7_0;
            cds28.dfe_2c_dc.dc_d_n_e = reg_DFE_DC_D_N_E_2C_LANE_7_0;
            cds28.dfe_2c_dc.dc_s_p_e = reg_DFE_DC_S_P_E_2C_LANE_7_0;
            cds28.dfe_2c_dc.dc_s_n_e = reg_DFE_DC_S_N_E_2C_LANE_7_0;
            cds28.dfe_2c_dc.dc_d_p_o = reg_DFE_DC_D_P_O_2C_LANE_7_0;
            cds28.dfe_2c_dc.dc_d_n_o = reg_DFE_DC_D_N_O_2C_LANE_7_0;
            cds28.dfe_2c_dc.dc_s_p_o = reg_DFE_DC_S_P_O_2C_LANE_7_0;
            cds28.dfe_2c_dc.dc_s_n_o = reg_DFE_DC_S_N_O_2C_LANE_7_0;
            break;
        //case Saveyechk:
        //    cds28.eye_check_pass = tag_EC_PASS;
        default: break;
    }
}

/* **************************************************
 * CDS_SAVE
 * Args:
 *      0: F0A
 *      2: F0D
 * Inputs:
 *      cds.f0a
 *      cds.f0d
 * Outputs:
 */
//void cds_load_f0_ram(uint8_t type) BANKING_CTRL {
void cds_load_f0_ram(uint8_t type) {
    switch(type)
    {
        case 0:
            reg_DFE_FEXT0_D_P_E_LANE_5_0      = cds28.f0a.d_p_e; 
            reg_DFE_FEXT0_D_N_E_LANE_5_0      = cds28.f0a.d_n_e; 
            reg_DFE_FEXT0_S_P_E_LANE_5_0      = cds28.f0a.s_p_e; 
            reg_DFE_FEXT0_S_N_E_LANE_5_0      = cds28.f0a.s_n_e; 
            reg_DFE_FEXT0_D_P_O_LANE_5_0      = cds28.f0a.d_p_o; 
            reg_DFE_FEXT0_D_N_O_LANE_5_0      = cds28.f0a.d_n_o; 
            reg_DFE_FEXT0_S_P_O_LANE_5_0      = cds28.f0a.s_p_o; 
            reg_DFE_FEXT0_S_N_O_LANE_5_0      = cds28.f0a.s_n_o; 
            break;
        case 2:
            reg_DFE_FEXT0_D_P_E_LANE_5_0      = cds28.f0d.d_p_e; 
            reg_DFE_FEXT0_D_N_E_LANE_5_0      = cds28.f0d.d_n_e; 
            reg_DFE_FEXT0_S_P_E_LANE_5_0      = cds28.f0d.s_p_e; 
            reg_DFE_FEXT0_S_N_E_LANE_5_0      = cds28.f0d.s_n_e; 
            reg_DFE_FEXT0_D_P_O_LANE_5_0      = cds28.f0d.d_p_o; 
            reg_DFE_FEXT0_D_N_O_LANE_5_0      = cds28.f0d.d_n_o; 
            reg_DFE_FEXT0_S_P_O_LANE_5_0      = cds28.f0d.s_p_o; 
            reg_DFE_FEXT0_S_N_O_LANE_5_0      = cds28.f0d.s_n_o; 
            break;
    }
    DFE_FEN_EVEN_REG.BT.B0    = 0x0f;
    DFE_FEN_EVEN_REG.BT.B0    = 0;
    DFE_FEN_ODD_REG.BT.B0     = 0x0f;
    DFE_FEN_ODD_REG.BT.B0     = 0;
    while(!reg_DFE_UPDATED_LANE);
}

/* **************************************************
 * SET_CTLE_ACCAP
 * Args:
 *      mode
 *      0: Fast
 *      1: Slow
 * Outputs:
 *      reg_ANA_RSVD6_LANE_7_0
 *      reg_FFE_PULSE_DIV_LANE_2_0
 */
//void set_ctle_accap_ram(uint8_t mode) BANKING_CTRL {
void set_ctle_accap_ram(uint8_t mode) {
    if(mode)
    { // Slow
		if(lnx_CKFW_EN_LANE) {
			reg_CLK_RXACCAP_SEL_LANE_1_0 = 0; //use ckfw
			reg_FFE_PULSE_DIV_LANE_2_0 = 0;		
		}
		else {
			reg_CLK_RXACCAP_SEL_LANE_1_0 = 1; //use REFCLK
			reg_FFE_PULSE_DIV_LANE_2_0 = 3; //5;
		}	
    }
    else
    { //Fast
        reg_CLK_RXACCAP_SEL_LANE_1_0 = 2; //use DEMUX
        reg_FFE_PULSE_DIV_LANE_2_0 = 2;
    }
    delay01(10);
}

//void enable_all_tap_adapt_ram(void) BANKING_CTRL {
void enable_all_tap_adapt_ram(void) {

	if( lnx_CDS_UPDATE_ODD_DIS_LANE) {
		reg_DFE_UPDATE_EN_LANE_15_0 = 0x5555;
		reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;	
	} else {
		reg_DFE_UPDATE_EN_LANE_15_0 = 0xffff;
		reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
	}	
	f0b_en = 0;		
	f0d_en = 0;
	ofst_en = 0; 
	reg_DFE_COARSE_STEP_EN_LANE = 0; 
	reg_DFE_FINE_STEP_EN_LANE = 0;
	reg_DFE_F0_COARSE_STEP_EN_LANE = 0; 
	reg_DFE_F0_FINE_STEP_EN_LANE = 0;

} 

//void dfe_hardware_cont_stop_ram(void) BANKING_CTRL {
void dfe_hardware_cont_stop_ram(void) {
	if(reg_DFE_ADAPT_CONT_LANE == 1)
	{
		timeout_start((uint16_t)1000);
		reg_DFE_ADAPT_CONT_LANE = 0;
		//reg_DFE_ADAPT_ABORT_LANE = 1; //only for silicon debug
		while(!reg_DFE_DONE_LANE && !timeout);
		reg_DFE_START_LANE = 0;
		//reg_DFE_ADAPT_ABORT_LANE = 0; 
 		timeout_stop;
	}
}

//void dfe_hardware_cont_run_ram(void) BANKING_CTRL {//// hardware cont run
void dfe_hardware_cont_run_ram(void) {//// hardware cont run

	if(cmx_TRAIN_SIM_EN) return;
	if(reg_DFE_ADAPT_CONT_LANE) return;
	if( dfe_dis == 1 ) return;
	if(tag_DFE_ADAPT_NORMAL_SOFT_CONT_EN || lnx_DFE_ADAPT_NORMAL_FORCE_SKIP_LANE ) return;

	dfe_load_type_ram(1);
	pol_table_loop_num_1_0 = 2; pol_table_loop_num_9_2 = 5; //1  -> 0x16 
	enable_all_tap_adapt_ram();
	reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0xfd;
	ofst_en = 1;
	// DFE feedback setting
	data_slic_fb_mode = 0;
	f1p_f1n_fb_mode = 0;
	f0_fb_mode = 0;

	adapt_data_en = 1;
	adapt_slicer_en = 1;
    set_slicer_data_sampler_adapt_ram(BOTH_SMPL);

	reg_DFE_ADAPT_CONT_LANE = 1;

	reg_DFE_START_LANE = 0;
	reg_DFE_START_LANE = 1;

	if(lnx_MAXEO_ADAPT_NORMAL_MODE_EN_LANE) {
		reg_DFE_MMSE_MODE_LANE = MAXEO_ADAPT_MODE;
		reg_DFE_MAXEO_LOW_MODE_LANE = 1;
		//delay01(100); 
		f0d_en = 1;
	}
}

/**
 * desc: DFE_ADAPT_SPLR_EN_LANE[3:0] register setting for sclier/data sampler adapt
 * [3]f1p_slic_samp_adapt_en
 * [2]f1n_slic_samp_adapt_en
 * [1]f1p_data_samp_adapt_en
 * [0]f1n_data_samp_adapt_en
 */
//void set_slicer_data_sampler_adapt_ram(bool flag) BANKING_CTRL {
void set_slicer_data_sampler_adapt_ram(bool flag) {

	uint8_t dfe_adapt_splr_en;

	if (adapt_slicer_en==1 && adapt_data_en==0) {
		dfe_adapt_splr_en = 0x0c;
	}
	else if (adapt_slicer_en==0 && adapt_data_en==1) {
		dfe_adapt_splr_en = 0x03;
	}
	else { // ((adapt_slicer_en==1 && adapt_data_en==1) || (adapt_slicer_en==0 && adapt_data_en==0))
	  if(flag == SLICER_SMPL_ONLY)
		dfe_adapt_splr_en = 0x0c;
	  else
		dfe_adapt_splr_en = 0x0f;
	}

	reg_DFE_ADAPT_SPLR_EN_LANE_3_0 = dfe_adapt_splr_en & ~lnx_CDS_ADAPT_SPLR_DIS_LANE_3_0;
}

//void cal_half_code_ram(void) BANKING_CTRL {
void cal_half_code_ram(void) {
	uint8_t dec_ratio;
	//
	dec_ratio = reg_RX_SPEED_DIV_LANE_2_0&0x03;
	lnx_CDS_UPDATE_ODD_DIS_LANE = 0;
	half_ui_code = 32;
    lnx_CDS_UPDATE_F_DIS_LANE = 0;
	if( dec_ratio == 0x3) {
	reg_DFE_ADAPT_EVEN_EN_LANE = 0;
	reg_DFE_ADAPT_ODD_EN_LANE  = 1;
		cdr_ui_pi_code_num = 8;
    }
	else if( dec_ratio == 0x2) {
	reg_DFE_ADAPT_EVEN_EN_LANE = 1;
	reg_DFE_ADAPT_ODD_EN_LANE  = 0;
		cdr_ui_pi_code_num = 4;
    }
	else if( dec_ratio == 0x1) {
	reg_DFE_ADAPT_EVEN_EN_LANE = 0;
	reg_DFE_ADAPT_ODD_EN_LANE  = 1;
		cdr_ui_pi_code_num = 2;
	lnx_CDS_UPDATE_ODD_DIS_LANE = 1;
	lnx_CDS_UPDATE_F_DIS_LANE = 1;
   }
    else {
	reg_DFE_ADAPT_EVEN_EN_LANE = 1;
	reg_DFE_ADAPT_ODD_EN_LANE  = 1;
		cdr_ui_pi_code_num = 1;
    }

        if(reg_RX_SPEED_DIV_LANE_2_0&0x4) cdr_ui_pi_code_num <<= 1;
        if(dfe_dis==0) half_ui_code = cdr_ui_pi_code_num<<5;

        if(dec_ratio==0) {
                reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 1;
                lnx_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 0;
        }
        else {
                reg_DFE_EVEN_ODD_SIM_ADAPT_LANE = 0;
                lnx_CDS_ADAPT_SPLR_DIS_LANE_3_0 = 5;
        }
}

/* **************************************************
 * DFE_FSM
 * Args:
 *      lpnum: ADAPT_LPNUM & POL_LPNUM
 *      tap_en
 *      0: F0
 *      1: F0~15
 *      2: F0~15+FF*
 *      3: F0+DC
 *      Others: disable all
 * Inputs:
 *      lnx_LOCK_DFE_ON_LANE
 * Outputs:
 *      reg_DFE_UPDATE_EN[15:0]
 *      reg_DFE_UDATE_F_EN[5:0]
 *      reg_DFE_UPDATE_DC_EN
 *      reg_DFE_ADAPT_LPNUM[9:0]
 */
//void dfe_fsm_ram(uint16_t lpnum, uint8_t tap_en) BANKING_CTRL {
void dfe_fsm_ram(uint16_t lpnum, uint8_t tap_en) {

    uint8_t adapt_lpnum;
    uint8_t pol_lpnum;

        if( lnx_DFE_CORE_BYPASS_LANE==1 || dfe_dis == 1 || pin_dfe_en==0) return;

    // fast timer
	if(lnx_FAST_DFE_TIMER_EN_LANE)
    {
        reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = 0;
        reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = 0;
        reg_DFE_POL_LPNUM_LANE_9_0_b0 = 0;
        reg_DFE_POL_LPNUM_LANE_9_0_b1 = 0;
    }else{

                adapt_lpnum = (uint8_t)(lpnum >> 8);
                pol_lpnum = (uint8_t)lpnum;

                reg_DFE_ADAPT_LPNUM_LANE_9_0_b0 = (uint8_t)(adapt_lpnum&0x0f);
        reg_DFE_ADAPT_LPNUM_LANE_9_0_b1 = ((uint8_t)(adapt_lpnum>>4)&0x3f);
        reg_DFE_POL_LPNUM_LANE_9_0_b0 = (uint8_t)(pol_lpnum&0x03);;
        reg_DFE_POL_LPNUM_LANE_9_0_b1 = (uint8_t)((pol_lpnum>>2)&0x3f);
    }

	switch(tap_en)
    {
        case 0: // F0
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 1;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
            reg_DFE_UPDATE_DC_EN_LANE = 0;
            break;
        case 1: // Fixed
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xff;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x00;
            reg_DFE_UPDATE_DC_EN_LANE = 0;
            break;
        case 2: // All
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xff;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
            reg_DFE_UPDATE_DC_EN_LANE = 0;
            break;
        case 3: // DC only
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0; //0xfd;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0; //0xff;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0; //0x3f;
            reg_DFE_UPDATE_DC_EN_LANE = 1;
            break;
         case 4: // All wo f1
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xfd;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
            reg_DFE_UPDATE_DC_EN_LANE = 0;
            break;
         case 5: // f4-f15
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0xf0;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0xff;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
            reg_DFE_UPDATE_DC_EN_LANE = 0;
            break;
	case 6: // f0/f2/f3/ofst
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0x0d;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0x00;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0x3f;
            reg_DFE_UPDATE_DC_EN_LANE = 1;
            break;
                default:
            reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0;
            reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
            reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
            reg_DFE_UPDATE_DC_EN_LANE = 0;
    }

        if(tap_en != Updateoff) {
                if(lnx_LOCK_DFE_ON_LANE)
                {
			reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0x1;
                                reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
                                reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
                }
                else
                {
                        if(lnx_CDS_UPDATE_F_DIS_LANE)
                                reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
                        if(lnx_CDS_UPDATE_ODD_DIS_LANE)
                                reg_DFE_UPDATE_EN_LANE_15_0 &= 0x5555;
                }
        }

        //if(reg_DFE_UPDATE_EN_LANE_15_0_b0 & 0x2)
        //set_ctle_accap(0); // Fast ACCAP for F1 Adaptation
	if(reg_CLK_RXACCAP_SEL_LANE_1_0!=2) //slow settling
                reg_DFE_UPDATE_EN_LANE_15_0_b0 &= 0xfd;

        reg_DFE_START_LANE = 0;
    reg_DFE_START_LANE = 1;
    short_delay_ram();
        if(lnx_BYPASS_DFE_HANG_CHECK_LANE==0) {
                if(do_rxinit){ timeout_start(8); }
                else { timeout_start(1000);     }
                while(!reg_DFE_DONE_LANE) {
                        if(timeout) break;
                }
                reg_DFE_START_LANE = 0;
                if(timeout) {
                        reg_MCU_DEBUGE_LANE_7_0++;
                        #ifdef SUPPORT_RX_INIT_USE_CDS
                        if(do_rxinit) {
                                CKCON = 0x07;                   // MCU WAIT time the slowest
                                reg_RESET_DFE_LANE = 1;
                                reg_RESET_DFE_LANE = 0;
                                CKCON = 0x00;                   // MCU WAIT time setting back to normal.
                                reg_ANA_REG_DFEE_RST_LANE = 1;
                                reg_ANA_REG_DFEO_RST_LANE = 1;
                                reg_ANA_REG_DFEE_RST_LANE = 0;
                                reg_ANA_REG_DFEO_RST_LANE = 0;
                                dfe_load_type_ram(1);
                                dc_load_ram(1);
                        }
                        #endif
                        lnx_CDS_ERR_CODE_LANE_7_0 |= 0x1;
                        timeout = 0;
                        dfe_err_found = 1;
                }
                timeout_stop;
        }
        else {
                while(!reg_DFE_DONE_LANE);
                reg_DFE_START_LANE = 0;
        }

	#if _DEBUG
	//Printf("\r\n\t cds_tb:%4x: cds_state%d: dfe_update=%x:%d %04x(%x, %x)",cds_tb, lnx_CDS_STATE_LANE_7_0, reg_DFE_UPDATE_EN_LANE_15_0, reg_DFE_UPDATE_DC_EN_LANE, lpnum, adapt_lpnum, pol_lpnum);
 	#endif

	//set_ctle_accap(1);
	reg_DFE_UPDATE_EN_LANE_15_0_b0 = 0;
	reg_DFE_UPDATE_EN_LANE_15_0_b1 = 0;
	reg_DFE_UPDATE_F_EN_LANE_5_0 = 0;
	reg_DFE_UPDATE_DC_EN_LANE = 0;
	return;
}

/* **************************************************
 * DC_LOAD
 * Args:
 *   type
 *      0: Calibration Result
 *      1: Training Saved Result
 * Inputs:
 *      lnx_CAL_OFST_* // 2C
 * Outputs:
 *      reg_DFE_FEXTDC_*
 *      reg_DFE_FENDC_*
 *      reg_DFE_CTRL_BYPASS
 *      reg_DFE_CTRL_SPLR_LANE_1_0
 */
#ifdef _28G_X2_DFE
//void dc_load_ram(uint8_t type) BANKING_CTRL
void dc_load_ram(uint8_t type)
{
    reg_OFST_RES_LANE_1_0 = lnx_CAL_SAMPLER_RES_LANE_7_0;

    if(type==1)
    {
                reg_DFE_INIT_SEL_LANE = 1; //load from fext

        //  load adapted DC values to samplers
	reg_DFE_FEXTDC_D_P_E_LANE_6_0 = dfe_sm_dc.dc_d_p_e;
        reg_DFE_FEXTDC_D_N_E_LANE_6_0 = dfe_sm_dc.dc_d_n_e;
        reg_DFE_FEXTDC_S_P_E_LANE_6_0 = dfe_sm_dc.dc_s_p_e;
        reg_DFE_FEXTDC_S_N_E_LANE_6_0 = dfe_sm_dc.dc_s_n_e;
        reg_DFE_FEXTDC_D_P_O_LANE_6_0 = dfe_sm_dc.dc_d_p_o;
        reg_DFE_FEXTDC_D_N_O_LANE_6_0 = dfe_sm_dc.dc_d_n_o;
        reg_DFE_FEXTDC_S_P_O_LANE_6_0 = dfe_sm_dc.dc_s_p_o;
        reg_DFE_FEXTDC_S_N_O_LANE_6_0 = dfe_sm_dc.dc_s_n_o;
    }
        else {
                reg_DFE_INIT_SEL_LANE = 0; //load from cal
        }

        reg_DFE_DC_LOAD_LANE = 1;
        reg_DFE_DC_LOAD_LANE = 0;
        /*reg_DFE_TAP_REFRESH_E_LANE = 1;
	reg_DFE_TAP_REFRESH_E_LANE = 0;
	reg_DFE_TAP_REFRESH_O_LANE = 1;
	reg_DFE_TAP_REFRESH_O_LANE = 0;
        */
	timeout_start(100);
        while(1) {
                if(timeout) break;
                if(reg_DFE_UPDATED_LANE & reg_DFE_UPDATED_LANE ) break;
        }

 /*   reg_DFE_CTRL_BYPASS_LANE = 1;
	reg_DFE_CTRL_SPLR_LANE_2_0 = 1; 
        reg_DFE_FENDC_D_P_E_LANE = 1; reg_DFE_FENDC_D_P_E_LANE = 0; 
    reg_DFE_FENDC_D_P_O_LANE = 1; reg_DFE_FENDC_D_P_O_LANE = 0; 
        while(!reg_DFE_UPDATED_LANE);
        
    reg_DFE_CTRL_SPLR_LANE_2_0 = 0; 
        reg_DFE_FENDC_D_N_E_LANE = 1; reg_DFE_FENDC_D_N_E_LANE = 0; 
    reg_DFE_FENDC_D_N_O_LANE = 1; reg_DFE_FENDC_D_N_O_LANE = 0; 
        while(!reg_DFE_UPDATED_LANE);
        
    reg_DFE_CTRL_SPLR_LANE_2_0 = 3; 
        reg_DFE_FENDC_S_P_E_LANE = 1; reg_DFE_FENDC_S_P_E_LANE = 0; 
    reg_DFE_FENDC_S_P_O_LANE = 1; reg_DFE_FENDC_S_P_O_LANE = 0; 
        while(!reg_DFE_UPDATED_LANE);
        
    reg_DFE_CTRL_SPLR_LANE_2_0 = 2; 
        reg_DFE_FENDC_S_N_E_LANE = 1; reg_DFE_FENDC_S_N_E_LANE = 0; 
    reg_DFE_FENDC_S_N_O_LANE = 1; reg_DFE_FENDC_S_N_O_LANE = 0; 
        while(!reg_DFE_UPDATED_LANE);
        
    reg_DFE_CTRL_SPLR_LANE_2_0 = 4; 
        reg_DFE_FENDC_E_E_LANE = 1; reg_DFE_FENDC_E_E_LANE = 0;         
        reg_DFE_FENDC_E_E_LANE = 1; reg_DFE_FENDC_E_O_LANE = 0;         
        while(!reg_DFE_UPDATED_LANE);

    reg_DFE_CTRL_BYPASS_LANE = 0;
*/
	#if _DEBUG
        if(do_rxinit)
        {
    Printf("\r\ncal_ofst: %d %d %d %d %d %d %d %d  %d %d\r\n",
        (int8_t)lnx_CAL_OFST_F1P_D_E_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_D_E_LANE_7_0,
        (int8_t)lnx_CAL_OFST_F1P_S_E_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_S_E_LANE_7_0,
        (int8_t)lnx_CAL_OFST_F1P_D_O_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_D_O_LANE_7_0,
        (int8_t)lnx_CAL_OFST_F1P_S_O_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_S_O_LANE_7_0,
        (int8_t)lnx_CAL_OFST_EDGE_E_LANE_7_0,  (int8_t)lnx_CAL_OFST_EDGE_O_LANE_7_0);

        print_osft_f1p_ram();
        }
        Printf("\r\ndfe_dc:  %d %d %d %d %d %d %d %d \r\n",
        (int8_t)reg_DFE_DC_D_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_E_2C_LANE_7_0,
        (int8_t)reg_DFE_DC_S_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_E_2C_LANE_7_0,
        (int8_t)reg_DFE_DC_D_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_O_2C_LANE_7_0,
        (int8_t)reg_DFE_DC_S_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_O_2C_LANE_7_0 );

        #endif
}

#else

//uint8_t ofst_2ctosm_ram(int8_t ofst) BANKING_CTRL {
uint8_t ofst_2ctosm_ram(int8_t ofst) {

	uint8_t fextdc;

        if(ofst >= 0) { //polarity reversed
                fextdc = ofst;
		fextdc |= 0x40;
        }
        else {
            fextdc = -ofst;
        }

    return fextdc;
}

//void dc_load_ram(uint8_t type) BANKING_CTRL
void dc_load_ram(uint8_t type)
{
        uint8_t val;

    sampler_sel_ram(OFST_EDGE_E); set_sampler_ram(lnx_CAL_OFST_EDGE_E_LANE_7_0);
    sampler_sel_ram(OFST_EDGE_O); set_sampler_ram(lnx_CAL_OFST_EDGE_O_LANE_7_0);

    if(type==0 || type==2)
    {
        reg_OFST_RES_LANE_1_0 = lnx_CAL_SAMPLER_RES_LANE_7_0;
        val = ofst_2ctosm_ram(lnx_CAL_OFST_F1P_D_E_LANE_7_0);  reg_DFE_FEXTDC_D_P_E_LANE_6_0 = val;  dfe_sm_dc.dc_d_p_e = val;
        val = ofst_2ctosm_ram(lnx_CAL_OFST_F1N_D_E_LANE_7_0);  reg_DFE_FEXTDC_D_N_E_LANE_6_0 = val;  dfe_sm_dc.dc_d_n_e = val;
        val = ofst_2ctosm_ram(lnx_CAL_OFST_F1P_S_E_LANE_7_0);  reg_DFE_FEXTDC_S_P_E_LANE_6_0 = val;  dfe_sm_dc.dc_s_p_e = val;
        val = ofst_2ctosm_ram(lnx_CAL_OFST_F1N_S_E_LANE_7_0);  reg_DFE_FEXTDC_S_N_E_LANE_6_0 = val;  dfe_sm_dc.dc_s_n_e = val;
        val = ofst_2ctosm_ram(lnx_CAL_OFST_F1P_D_O_LANE_7_0);  reg_DFE_FEXTDC_D_P_O_LANE_6_0 = val;  dfe_sm_dc.dc_d_p_o = val;
        val = ofst_2ctosm_ram(lnx_CAL_OFST_F1N_D_O_LANE_7_0);  reg_DFE_FEXTDC_D_N_O_LANE_6_0 = val;  dfe_sm_dc.dc_d_n_o = val;
        val = ofst_2ctosm_ram(lnx_CAL_OFST_F1P_S_O_LANE_7_0);  reg_DFE_FEXTDC_S_P_O_LANE_6_0 = val;  dfe_sm_dc.dc_s_p_o = val;
        val = ofst_2ctosm_ram(lnx_CAL_OFST_F1N_S_O_LANE_7_0);  reg_DFE_FEXTDC_S_N_O_LANE_6_0 = val;  dfe_sm_dc.dc_s_n_o = val;
                if(type==2) goto exit0; //return;
    }
        else if(type==3) {
        reg_OFST_RES_LANE_1_0 = lnx_CAL_SAMPLER_RES_LANE_7_0;

                //use dfe_fextdc that already loaded during sampler_cal
        }
            else
	{                
		//  load adapted DC values to samplers
		reg_DFE_FEXTDC_D_P_E_LANE_6_0 = dfe_sm_dc.dc_d_p_e;
        reg_DFE_FEXTDC_D_N_E_LANE_6_0 = dfe_sm_dc.dc_d_n_e;
        reg_DFE_FEXTDC_S_P_E_LANE_6_0 = dfe_sm_dc.dc_s_p_e;
        reg_DFE_FEXTDC_S_N_E_LANE_6_0 = dfe_sm_dc.dc_s_n_e;
        reg_DFE_FEXTDC_D_P_O_LANE_6_0 = dfe_sm_dc.dc_d_p_o;
        reg_DFE_FEXTDC_D_N_O_LANE_6_0 = dfe_sm_dc.dc_d_n_o;
        reg_DFE_FEXTDC_S_P_O_LANE_6_0 = dfe_sm_dc.dc_s_p_o;
        reg_DFE_FEXTDC_S_N_O_LANE_6_0 = dfe_sm_dc.dc_s_n_o;
    }

    reg_DFE_CTRL_BYPASS_LANE = 1;

    reg_DFE_CTRL_SPLR_LANE_1_0 = 1; reg_DFE_FENDC_D_P_E_LANE = 1; reg_DFE_FENDC_D_P_E_LANE = 0; while(!reg_DFE_UPDATED_LANE);
    reg_DFE_CTRL_SPLR_LANE_1_0 = 0; reg_DFE_FENDC_D_N_E_LANE = 1; reg_DFE_FENDC_D_N_E_LANE = 0; while(!reg_DFE_UPDATED_LANE);
    reg_DFE_CTRL_SPLR_LANE_1_0 = 3; reg_DFE_FENDC_S_P_E_LANE = 1; reg_DFE_FENDC_S_P_E_LANE = 0; while(!reg_DFE_UPDATED_LANE);
    reg_DFE_CTRL_SPLR_LANE_1_0 = 2; reg_DFE_FENDC_S_N_E_LANE = 1; reg_DFE_FENDC_S_N_E_LANE = 0; while(!reg_DFE_UPDATED_LANE);
    reg_DFE_CTRL_SPLR_LANE_1_0 = 1; reg_DFE_FENDC_D_P_O_LANE = 1; reg_DFE_FENDC_D_P_O_LANE = 0; while(!reg_DFE_UPDATED_LANE);
    reg_DFE_CTRL_SPLR_LANE_1_0 = 0; reg_DFE_FENDC_D_N_O_LANE = 1; reg_DFE_FENDC_D_N_O_LANE = 0; while(!reg_DFE_UPDATED_LANE);
    reg_DFE_CTRL_SPLR_LANE_1_0 = 3; reg_DFE_FENDC_S_P_O_LANE = 1; reg_DFE_FENDC_S_P_O_LANE = 0; while(!reg_DFE_UPDATED_LANE);
    reg_DFE_CTRL_SPLR_LANE_1_0 = 2; reg_DFE_FENDC_S_N_O_LANE = 1; reg_DFE_FENDC_S_N_O_LANE = 0; while(!reg_DFE_UPDATED_LANE);

    reg_DFE_CTRL_BYPASS_LANE = 0;

exit0:
	#if _DEBUG
        if(do_rxinit)
        {
    Printf("\r\ncal_ofst: %d %d %d %d %d %d %d %d  %d %d\r\n",
        (int8_t)lnx_CAL_OFST_F1P_D_E_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_D_E_LANE_7_0,
        (int8_t)lnx_CAL_OFST_F1P_S_E_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_S_E_LANE_7_0,
        (int8_t)lnx_CAL_OFST_F1P_D_O_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_D_O_LANE_7_0,
        (int8_t)lnx_CAL_OFST_F1P_S_O_LANE_7_0, (int8_t)lnx_CAL_OFST_F1N_S_O_LANE_7_0,
        (int8_t)lnx_CAL_OFST_EDGE_E_LANE_7_0,  (int8_t)lnx_CAL_OFST_EDGE_O_LANE_7_0);

        print_osft_f1p_ram();
        }
        Printf("\r\ndfe_dc:  %d %d %d %d %d %d %d %d \r\n",
        (int8_t)reg_DFE_DC_D_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_E_2C_LANE_7_0,
        (int8_t)reg_DFE_DC_S_P_E_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_E_2C_LANE_7_0,
        (int8_t)reg_DFE_DC_D_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_D_N_O_2C_LANE_7_0,
        (int8_t)reg_DFE_DC_S_P_O_2C_LANE_7_0, (int8_t)reg_DFE_DC_S_N_O_2C_LANE_7_0 );

        Printf("\r\ndfe_dc_sm:  %02x %02x %02x %02x %02x %02x %02x %02x \r\n",
        reg_DFE_FEXTDC_D_P_E_LANE_6_0, reg_DFE_FEXTDC_D_N_E_LANE_6_0,
        reg_DFE_FEXTDC_S_P_E_LANE_6_0, reg_DFE_FEXTDC_S_N_E_LANE_6_0,
        reg_DFE_FEXTDC_D_P_O_LANE_6_0, reg_DFE_FEXTDC_D_N_O_LANE_6_0,
        reg_DFE_FEXTDC_S_P_O_LANE_6_0, reg_DFE_FEXTDC_S_N_O_LANE_6_0 );
        #endif
}
#endif


/* **************************************************
 * SET_DFE_FBMD
 * Args:
 *      type
 *      0: Feedback to all
 *      1: Feedback F0 to all
 *      2: Feedback to self
 * Inputs:
 *      reg_DFE_MMSE_MODE_LANE
 *      reg_DFE_ADAPT_SPLR_EN_LANE_3_0
 *      RXEQ_STATE
 * Outputs:
 *      reg_DFE_FBMD_F0_LANE
 *      reg_DFE_FBMD_F1PN_LANE
 *      reg_DFE_FBMD_DATASLICER_LANE
 */
//void set_dfe_fbmd_ram(uint8_t type) BANKING_CTRL {
void set_dfe_fbmd_ram(uint8_t type) {

	switch(type)
    {
        case 0:
            reg_DFE_FBMD_F0_LANE = 1;
            reg_DFE_FBMD_F1PN_LANE = 1;
            reg_DFE_FBMD_DATASLICER_LANE = 1;
            break;
        case 1:
            reg_DFE_FBMD_F0_LANE = 1;
            reg_DFE_FBMD_F1PN_LANE = 0;
            reg_DFE_FBMD_DATASLICER_LANE = 0;
            break;
        default:
		//if(reg_DFE_MMSE_MODE_LANE)
		//{
		//    reg_DFE_FBMD_F0_LANE = 0;
		//}else{
			reg_DFE_FBMD_F0_LANE = 0;
		//}
		if(reg_DFE_ADAPT_SPLR_EN_LANE_3_0 == 0xf)
		{
                reg_DFE_FBMD_DATASLICER_LANE = 0;
            }else{
                reg_DFE_FBMD_DATASLICER_LANE = 1;
            }
                reg_DFE_FBMD_F1PN_LANE = 0;
            break;
    }
}

// PHASE CTRL FUNCTIONS
/* **************************************************
 * SET_PH_MODE
 *      set phase control mode
 * Args:
 *      mode 0/1/2/3
 * Inputs:
 *      tag_ADAPT_DATA_EN
 *      tag_ADAPT_SLICER_EN
 *      tag_EOM_DRIVE_DATA_EN_MODE1
 *      tag_EOM_DRIVE_DATA_EN_MODE2
 * Outputs:
 *      reg_EOM_EN_D_LANE
 *      reg_EOM_EN_S_LANE
 *      reg_EOM_EN_E_LANE
 */
//void set_ph_mode_ram(void) BANKING_CTRL {
void set_ph_mode_ram(void) {
	//ph_mode = ph_control_mode;
	switch (ph_control_mode)
    {
        case 0:
            reg_EOM_EN_D_LANE = 0;
            reg_EOM_EN_S_LANE = 0;
            reg_EOM_EN_E_LANE = 0;
            break;
        case 1:
            reg_EOM_EN_D_LANE = tag_ADAPT_DATA_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE1;
            reg_EOM_EN_S_LANE = tag_ADAPT_SLICER_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE1;
            reg_EOM_EN_E_LANE = 0;
            break;
        case 2:
            reg_EOM_EN_D_LANE = tag_ADAPT_DATA_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE2;
            reg_EOM_EN_S_LANE = tag_ADAPT_SLICER_EN ? 1: tag_EOM_DRIVE_DATA_EN_MODE2;
            reg_EOM_EN_E_LANE = 0;
            break;
        case 3:
            reg_EOM_EN_D_LANE = 0;
            reg_EOM_EN_S_LANE = 0;
            reg_EOM_EN_E_LANE = 1;
            break;
        default: break;
    }
    //set_edge_dly_ram();
}

#endif //SUPPORT_EXT_MEM
