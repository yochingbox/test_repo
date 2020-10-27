/******************************************************************
*           Marvell Semiconductor  
*******************************************************************
* \file eom_align_cal.c
* \purpose EOM align calibration module
* \History
*   10/15/2015 Heejeong Ryu     Initial 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

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
#define rate							rx_pll_rate

void eom_align_cal(void) BANKING_CTRL{
        uint8_t dir;
        uint8_t eom_dpher;
        uint8_t loop_cnt;
        uint8_t coarse_max;
        uint8_t align_max;
        uint8_t output_cnt;
        uint8_t comp_max;
        uint8_t save_pre_dac;
        uint8_t toggle_cntr;
        uint8_t eom_align_comp_out;


		if(reg_EOM_CLK_EN_LANE==0) return;

        lnx_EOM_ALIGN_CAL_DONE_LANE = 0;

		if( cmx_EOM_ALIGN_CAL_EXT_EN || cmx_EXT_FORCE_CAL_DONE ) {
			EOM_DPHER = lnx_cal_eom_dpher[rate]; 
            reg_EOM_DPHERCK_LANE = 1;
            reg_EOM_DPHERCK_LANE = 0;
            lnx_EOM_ALIGN_CAL_DONE_LANE = 1;
			return; 
		}	
		
        PHY_STATUS = ST_EOM_ALIGN_CAL;
        
        #ifdef _DBG_EOM
        DBG_Printf("\n\rEOM CLK ALIGN CAL");
        #endif

        lnx_EOM_EOMEDG_COARSE_CAL_PASS_LANE = 0;
        lnx_EOM_EOMEDG_FINE_CAL_PASS_LANE = 0;
        lnx_EOM_EOMDAT_CAL_PASS_LANE = 0;
        
        /*if(reg_RX_SPEED_DIV_LANE_2_0 == 0)
            { coarse_max=36; }
        else 
            { coarse_max=72; }
        comp_max = 32;
        fine_max = 68; // need to cover ALIGN90_REF*/

        if(reg_RX_SPEED_DIV_LANE_2_0 == 0)
        {
        	coarse_max = 21;
        }
        else
        {
        	coarse_max = 37;
        }
        comp_max = 32;
        align_max = 68;

        EOM_ALIGN_EN = 1;

        //if(reg_PWRON_SEQ == 0) goto eom_cal; //eom_align_cal called during train
        
        // -- offset    
        lnx_EOM_DAC_CAL_PASS_LANE = 0;
        EOM_ALIGN_COMP_OFSTDAC = 0x8;
        EOM_ALIGN_COMP_CAL_EN = 1;

        dir = eom_comp_out_rd();
        save_pre_dac = EOM_ALIGN_COMP_OFSTDAC;
        loop_cnt = 0;
        output_cnt = 0;
        do {
             delay01(10);
             eom_align_comp_out = eom_comp_out_rd();
             if (dir != eom_align_comp_out) {
            	 EOM_ALIGN_COMP_OFSTDAC = save_pre_dac;
            	 lnx_EOM_DAC_CAL_PASS_LANE = 1;
            	 break;
             }
             dir = eom_align_comp_out;
             if(eom_align_comp_out == 1) {
            	 if (EOM_ALIGN_COMP_OFSTDAC == 0xf){
            		 lnx_EOM_DAC_CAL_PASS_LANE = 1;
            		 break;
            	 }
            	 save_pre_dac = EOM_ALIGN_COMP_OFSTDAC;
                 EOM_ALIGN_COMP_OFSTDAC++;
             }   
             else {
            	 if (EOM_ALIGN_COMP_OFSTDAC ==0x0){
            		 lnx_EOM_DAC_CAL_PASS_LANE = 1;
            		 break;
            	 }
            	 save_pre_dac = EOM_ALIGN_COMP_OFSTDAC;
                 EOM_ALIGN_COMP_OFSTDAC--;
             }

             /*if (dir != eom_align_comp_out) {
            	 EOM_ALIGN_COMP_OFSTDAC = save_pre_dac;
                 lnx_EOM_DAC_CAL_PASS_LANE = 1;
                 break;
             }
             dir = eom_align_comp_out;*/
             if(cmx_EOM_ALIGN_CAL_TIMEOUT_DIS == 0)
            	 loop_cnt ++;

         } while (loop_cnt < comp_max);

         delay01(10);

         lnx_CAL_EOM_ALIGN_COMP_OFSTDAC_LANE_7_0 = EOM_ALIGN_COMP_OFSTDAC; 
         EOM_ALIGN_COMP_CAL_EN = 0;

eom_cal:         
         // -- coarse
        loop_cnt = 0;
        eom_dpher = 0;
        EOM_DPHER = 0;
        EOM_ALIGN_PD_SEL = 0; // CLK_EDGE_P/N and CLK_EOM_P/N 
        dir = 0x3f;

        do {
        	delay01(10);
        	if(cmx_EOM_ALIGN_CAL_TIMEOUT_DIS == 0)
        		loop_cnt ++;
        	dir <<= 1;
        	dir |= eom_comp_out_rd();
        	if((dir & 0x33) == 0x03)
        	{
        		EOM_DPHER = save_pre_dac;
        		reg_EOM_DPHERCK_LANE = 1;
        		reg_EOM_DPHERCK_LANE = 0;
        		lnx_EOM_EOMEDG_COARSE_CAL_PASS_LANE = 1;
        		break;
        	}
        	save_pre_dac = eom_dpher;
        	eom_dpher += eom_coarse_step_size;
        	EOM_DPHER = eom_dpher;
        	reg_EOM_DPHERCK_LANE = 1;
        	reg_EOM_DPHERCK_LANE = 0;
        } while ( loop_cnt < coarse_max );
        #ifdef _DBG_EOM
        DBG_Printf("\n\r\tcoarse lpct=%d",loop_cnt);
        #endif
         
        if (lnx_EOM_EOMEDG_COARSE_CAL_PASS_LANE ==0) goto err_skip;

        EOM_ALIGN_PD_SEL = 1;
        toggle_cntr = 0;
        dir = eom_comp_out_rd();
        loop_cnt = 0;

        while (loop_cnt < align_max){
        	delay01(10);
        	eom_align_comp_out = eom_comp_out_rd();
        	if(dir != eom_align_comp_out)
        	{
        		toggle_cntr ++;
        		dir = eom_align_comp_out;
        	}
        	if (toggle_cntr >= 3)
        	{
        		lnx_EOM_EOMDAT_CAL_PASS_LANE = 1;
        		break;
        	}

        	if(eom_align_comp_out == 0) {
        		if (EOM_DPHER < 127)
        			EOM_DPHER++;
        		else
        			EOM_DPHER = 0;
        	}
        	else {
        		if (EOM_DPHER > 0)
        			EOM_DPHER--;
        		else
        			EOM_DPHER = 127;
        	}
        	reg_EOM_DPHERCK_LANE = 1;
        	reg_EOM_DPHERCK_LANE = 0;

        	if(cmx_EOM_ALIGN_CAL_TIMEOUT_DIS == 0)
        		loop_cnt++;
        }


        #ifdef _DBG_EOM
        DBG_Printf("\n\r\tfine lpct=%d",loop_cnt);
        #endif                
    err_skip:
	
		cal_eom_dpher = reg_EOM_DPHER_LANE_6_0;
        lnx_cal_eom_dpher[rate] = cal_eom_dpher; 

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

bool eom_comp_out_rd(void) BANKING_CTRL
{
	reg_RX_EOM_ALIGN_CMP_OUT_RD_REQ_LANE = 1;
	reg_RX_EOM_ALIGN_CMP_OUT_RD_REQ_LANE = 0;

	return EOM_ALIGN_CMP_OUT;
}
