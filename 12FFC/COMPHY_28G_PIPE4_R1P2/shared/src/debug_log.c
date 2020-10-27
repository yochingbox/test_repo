#include "common.h"

#if SUPPORT_DEBUG_LOG

#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

void debug_log(void) BANKING_CTRL 
{
    // The code hasn't been done. It is just for estimating the code size.
    // XDAT_BASE is not the base of the XDAT DEBUG register base !
    uint8_t * debug_base = (uint8_t *) XDAT_BASE + debug_offset;
    *(debug_base+0) = train.eo;
    *(debug_base+1) = train.f0a;
    *(debug_base+2) = train.f0;
    *(debug_base+3) = dfe_res_f0; 
    *(debug_base+4) = dfe_res_f1; 
    *(debug_base+5) = reg_DFE_RES_F234_LANE; 
    *(debug_base+6) = reg_FFE_CAP1_SEL_LANE_3_0; 
    *(debug_base+7) = reg_FFE_CAP2_SEL_O_LANE_3_0; 
    *(debug_base+8) = reg_FFE_CAP2_SEL_E_LANE_3_0; 
    *(debug_base+9) = reg_ALIGN90_REF_LANE_5_0;
    *(debug_base+10) = train_g0_index;  
    *(debug_base+11) = train_g1_index; 
    *(debug_base+12) = train_gn1_index;
    *(debug_base+13) = reg_FFE_RES1_SEL_LANE_3_0; 
    *(debug_base+14) = reg_FFE_RES2_SEL_O_LANE_3_0;
    *(debug_base+15) = reg_FFE_RES2_SEL_E_LANE_3_0;
    *(debug_base+16) = dfe_f0_res_sel; 
    *(debug_base+17) = dfe_f1_res_sel; 
    *(debug_base+18) = reg_TX_EM_PEAK_CTRL_LANE_3_0; 
    *(debug_base+19) = reg_TX_EM_PRE_CTRL_LANE_3_0; 

/*    *(XDAT_BASE + debug_offset+20) = 
    *(XDAT_BASE + debug_offset+21) = 
    *(XDAT_BASE + debug_offset+22) = 
    *(XDAT_BASE + debug_offset+23) = 
    *(XDAT_BASE + debug_offset+24) = 
    *(XDAT_BASE + debug_offset+25) = 
    *(XDAT_BASE + debug_offset+26) = 
    *(XDAT_BASE + debug_offset+27) = 
    *(XDAT_BASE + debug_offset+28) = 
    *(XDAT_BASE + debug_offset+29) = 
    *(XDAT_BASE + debug_offset+30) =
    *(XDAT_BASE + debug_offset+31) =
    *(XDAT_BASE + debug_offset+32) =
    *(XDAT_BASE + debug_offset+33) =
    *(XDAT_BASE + debug_offset+34) =
    *(XDAT_BASE + debug_offset+35) =
    *(XDAT_BASE + debug_offset+36) =
    *(XDAT_BASE + debug_offset+37) =
    *(XDAT_BASE + debug_offset+38) =
    *(XDAT_BASE + debug_offset+39) =
*/
}


#endif
