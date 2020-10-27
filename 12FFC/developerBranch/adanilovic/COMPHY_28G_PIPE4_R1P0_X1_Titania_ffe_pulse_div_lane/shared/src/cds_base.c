
/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cds_base.c
* \purpose CDR DFE Control
* \History
*	1/12/2018 Heejeong Ryu		moved some function from CDS
*/

#include "common.h"

#ifdef USE_BANKING
#ifdef _28G_X2_DFE
#pragma codeseg BANK2
#else
#pragma codeseg BANK1
#endif
#endif

#ifdef _28G_X2_ROM
#define tag_EYE_CHK_THRESH_ERR  cmx_EYE_CHK_THRESH_ERR_15_0 //1024L   
#define tag_EYE_CHK_THRESH_VLD  cmx_EYE_CHK_THRESH_VLD_7_0 //100L    
#else
#define tag_EYE_CHK_THRESH_ERR  1024L   
#define tag_EYE_CHK_THRESH_VLD  100L    
#endif


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
uint32_t maxu32(uint32_t a, uint32_t b) BANKING_CTRL {
    if(a>b) return a;
    else return b;
}
bool check_eye(void) BANKING_CTRL
{
    uint32_t err_cnt;
    uint32_t pop_cnt;
	
    pop_cnt = EOM_VLD_REG0.VAL;
    pop_cnt = maxu32(pop_cnt,EOM_VLD_REG1.VAL);
    pop_cnt = maxu32(pop_cnt,EOM_VLD_REG2.VAL);
    pop_cnt = maxu32(pop_cnt,EOM_VLD_REG3.VAL);
    err_cnt = EOM_ERR_REG0.VAL;
    err_cnt = maxu32(err_cnt,EOM_ERR_REG1.VAL);
    err_cnt = maxu32(err_cnt,EOM_ERR_REG2.VAL);
    err_cnt = maxu32(err_cnt,EOM_ERR_REG3.VAL);

    if(pop_cnt < tag_EYE_CHK_THRESH_VLD) return 0;
    if(err_cnt > tag_EYE_CHK_THRESH_ERR) return 0;
    return 1;
}

void set_esm_voltage(uint8_t f0) BANKING_CTRL {
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
 * dfe_load_type
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
void dfe_load_type(uint8_t type) BANKING_CTRL {
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
            memcpy((uint8_t *)&DFE_FEXT_EVEN_REG0, (uint8_t *)&dfe_sm, sizeof(Status_dfe_sm_t));
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
void dfe_save() BANKING_CTRL {
    memcpy((uint8_t *)&dfe_sm, (uint8_t *)&DFE_READ_EVEN_SM_REG0, sizeof(Status_dfe_sm_t));
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
void cds_save(uint8_t type) BANKING_CTRL {
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
            memcpy((uint8_t *)&(cds28.dfe_2c), (uint8_t *)&DFE_READ_EVEN_2C_REG0, sizeof(Status_dfe_2c_t));
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
void cds_load_f0(uint8_t type) BANKING_CTRL {
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
void set_ctle_accap(uint8_t mode) BANKING_CTRL {
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

void enable_all_tap_adapt(void) BANKING_CTRL {

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


 

