/******************************************************************
*           Marvell Semiconductor  
*******************************************************************
* \file eom_align_cal.c
* \purpose EOM align calibration module
* \History
*   10/15/2015 Heejeong Ryu     Initial 
*/
#include "common.h"

/**
 * \module EOM align Calibration
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NODE>  
 * \note
*/
#define EOM_ALIGN_EN                     reg_EOM_ALIGN_EN_LANE
#define EOM_ALIGN_COMP_CAL_EN            reg_EOM_ALIGN_CMP_CAL_EN_LANE
#define EOM_ALIGN_COMP_OFSTDAC           reg_EOM_ALIGN_CMP_OFSTDAC_LANE_3_0
#define EOM_DPHER                        reg_EOM_DPHER_LANE_6_0
#define EOM_ALIGN_CMP_OUT                reg_ANA_RX_EOM_ALIGN_CMP_OUT_RD_LANE
#define EOM_ALIGN_PD_SEL                 reg_EOM_ALIGN_PD_SEL_LANE
#define eom_coarse_step_size             8

void eom_align_cal(void){
        uint8_t dir;
        uint8_t eom_dpher;
        uint8_t loop_cnt;
        uint8_t coarse_max;
        uint16_t fine_max;
        
        PHY_STATUS = ST_EOM_ALIGN_CAL;
        
        #ifdef _DBG_EOM
        DBG_Printf("\n\rEOM CLK ALIGN CAL");
        #endif

        lnx_EOM_ALIGN_CAL_DONE_LANE = 0;
        lnx_EOM_EOMEDG_COARSE_CAL_PASS_LANE = 0;
        lnx_EOM_EOMEDG_FINE_CAL_PASS_LANE = 0;
        lnx_EOM_EOMDAT_CAL_PASS_LANE = 0;
        
        if(reg_RX_SPEED_DIV_LANE_2_0 == 0) 
            { coarse_max=20; }
        else 
            { coarse_max=128;}//40; }
        fine_max = (64+4)*cdr_ui_pi_code_num;//68; // need to cover ALIGN90_REF

        EOM_ALIGN_EN = 1;
        
        if(lnx_EOM_DAC_CAL_PASS_LANE == 0) goto eom_cal;
        
        // -- offset    
        lnx_EOM_DAC_CAL_PASS_LANE = 0;
        EOM_ALIGN_COMP_OFSTDAC = 0x8;
        EOM_ALIGN_COMP_CAL_EN = 1;

        dir = 0;  
                
        do {
             delay(Tus);
             		 
             if( EOM_ALIGN_CMP_OUT==1) {
                 EOM_ALIGN_COMP_OFSTDAC++;
                 dir = (dir << 1) | 1;                   
             }   
             else {
                 EOM_ALIGN_COMP_OFSTDAC--;
                 dir = (dir << 1); 
             }
             
             dir = dir & 0x0f;
             if (dir ==0x0a || dir ==0x05) {
                 lnx_EOM_DAC_CAL_PASS_LANE = 1;
                 break;
             }
             
             if (EOM_ALIGN_COMP_OFSTDAC ==0x0 || EOM_ALIGN_COMP_OFSTDAC ==0xf) break;

         } while (1);

         delay(Tus);

         if (lnx_EOM_DAC_CAL_PASS_LANE ==0){
             EOM_ALIGN_COMP_OFSTDAC =0x8;
         }
         
         lnx_CAL_EOM_ALIGN_COMP_OFSTDAC_LANE_7_0 = EOM_ALIGN_COMP_OFSTDAC; 
         EOM_ALIGN_COMP_CAL_EN = 0;

eom_cal:         
         // -- coarse
        loop_cnt = 0;
        eom_dpher = 0;
        EOM_DPHER = 0;
        EOM_ALIGN_PD_SEL = 0; // CLK_EDGE_P/N and CLK_EOM_P/N 
        dir = 0;
            do {        
                delay(Tus);
                loop_cnt ++;
                dir <<= 1;      
                if( EOM_ALIGN_CMP_OUT == 0) break;           
                dir |= 0x01;    
                eom_dpher += eom_coarse_step_size;  
                EOM_DPHER = eom_dpher;
                reg_EOM_DPHERCK_LANE = 1;
                reg_EOM_DPHERCK_LANE = 0;
            } while ( loop_cnt < coarse_max );
            
            do {
                delay(Tus);
                loop_cnt ++;
                if( EOM_ALIGN_CMP_OUT == 1) { 
                    if((dir&0x01)==0 ) lnx_EOM_EOMEDG_COARSE_CAL_PASS_LANE = 1; 
                    break;
                }                       
                eom_dpher += eom_coarse_step_size;  
                EOM_DPHER = eom_dpher;
                reg_EOM_DPHERCK_LANE = 1;
                reg_EOM_DPHERCK_LANE = 0;
            } while ( loop_cnt < coarse_max );
            eom_dpher = EOM_DPHER;
        #ifdef _DBG_EOM
        DBG_Printf("\n\r\tcoarse lpct=%d",loop_cnt);
        #endif
         
        if (lnx_EOM_EOMEDG_COARSE_CAL_PASS_LANE ==0) goto err_skip;
         
        // -- fine     
        dir = 0; loop_cnt = 0;
         
        do {
            delay(Tus);
            if( EOM_ALIGN_CMP_OUT == 0) {
             EOM_DPHER++;
             dir = (dir << 1) | 1;                   
            }   
         else {
             EOM_DPHER--;
             dir = (dir << 1); 
            }
        reg_EOM_DPHERCK_LANE = 1;
        reg_EOM_DPHERCK_LANE = 0;
        
         dir = dir & 0x0f;
         if (dir==0x0a || dir==0x05) {
            if(EOM_ALIGN_PD_SEL == 1) {
                 lnx_EOM_EOMDAT_CAL_PASS_LANE = 1;
                 break;
            }
        
            lnx_EOM_EOMEDG_FINE_CAL_PASS_LANE = 1;
            EOM_ALIGN_PD_SEL = 1; // CLK_EDGE_P/N and CLK_C_P/N 
            dir = 0;
          }
        } while (loop_cnt++<fine_max); 
        #ifdef _DBG_EOM
        DBG_Printf("\n\r\tfine lpct=%d",loop_cnt);
        #endif                
    err_skip:
        if (PLL_RATE_SEL == 1) {
          lnx_CAL_EOM_DPHER_R1_LANE_7_0 = EOM_DPHER;
        }
        else {
          lnx_CAL_EOM_DPHER_R0_LANE_7_0 = EOM_DPHER;
        }
 
		cal_eom_dpher = reg_EOM_DPHER_LANE_6_0;

        //EOM_ALIGN_EN = 0;  //to cover hardware bug
        EOM_ALIGN_PD_SEL = 0;
        lnx_EOM_ALIGN_CAL_DONE_LANE = 1;
        #ifdef _DBG_EOM
		DBG_Printf("\n\r\tflag : %d %d %d", 
                lnx_EOM_EOMEDG_COARSE_CAL_PASS_LANE,
                lnx_EOM_EOMEDG_FINE_CAL_PASS_LANE,
                lnx_EOM_EOMDAT_CAL_PASS_LANE);
		DBG_Printf("\n\r\tcal_eom_dpher : %d\n\r", EOM_DPHER);
        #endif
}

