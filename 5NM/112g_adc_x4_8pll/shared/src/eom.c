#include "common.h"
#include "driver.h"

void esm_preparation(void);
void esm_set_recon_flt(void);
void esm_measure(void);
void esm_exit(void);

void Check_EOM_Stage_fmExt(void)
{
#ifdef SUPPORT_EOM

    esm_preparation();
    esm_set_recon_flt();
    esm_measure();
    esm_exit();

#endif   // EOM

}

void esm_preparation(void)
{
#ifdef SUPPORT_EOM
    if(lnx_ESM_EN_LANE && lnx_EOM_READY_LANE==0)
    {
        save_status = PHY_STATUS;
        PHY_STATUS = ST_EOM;
        drv_eom_prepare();
        cur_esm_phase = 0;
        lnx_EOM_READY_LANE = 1;
    }
#endif
}

void esm_set_recon_flt(void)
{
#ifdef SUPPORT_EOM
    int16_t new_esm_phase;

    if(lnx_ESM_EN_LANE && lnx_EOM_READY_LANE && lnx_EOM_CALL_CONV_LANE)
    {
        if(reg_EOM_REC_MODE_LANE==0){
            if(lnx_ESM_PHASE_LANE_9_0_b1 & 0x02) {
                new_esm_phase = 0xfc00 | (lnx_ESM_PHASE_LANE_9_0_b1<<8) | lnx_ESM_PHASE_LANE_9_0_b0; 
            } else {
                new_esm_phase = (lnx_ESM_PHASE_LANE_9_0_b1<<8) | lnx_ESM_PHASE_LANE_9_0_b0;
            }

            drv_eom_move_phase(new_esm_phase - cur_esm_phase);
            cur_esm_phase = new_esm_phase;

            drv_eom_set_recon_flt();
        }
        lnx_EOM_CALL_CONV_LANE = 0;
    }
#endif
}

/*
 * esm_measure()
 *
 * input:
 *    lnx_ESM_VOLTAGE_LANE_7_0 - positive value
 *
 * output:
 *   FW returns two set of results.
 *   One from the 2 complement of the input voltage and one from the input voltage.
 */
void esm_measure(void)
{
#ifdef SUPPORT_EOM
    int8_t voltage;

    if(lnx_ESM_EN_LANE && lnx_EOM_READY_LANE && lnx_EOM_CALL_LANE)
    {
        voltage = lnx_ESM_VOLTAGE_LANE_7_0;
        voltage = ~voltage + 1;
        reg_EOM_HIST_DELTA_TH_TOP_LANE_6_0 = voltage;
        reg_EOM_HIST_DELTA_TH_MID_LANE_7_0 = voltage;
        reg_EOM_HIST_DELTA_TH_BOT_LANE_6_0 = voltage;

        reg_RX_EQ_EOM_RST_LANE = 1;
        reg_RX_EQ_EOM_RST_LANE = 0;

        // Call EOM Hardware
        reg_EOM_HIST_EN_LANE = 1;
        //while((reg_MCU_DEBUGA_LANE_7_0=0x41)&&!reg_EOM_HIST_DONE_LANE);
        wait_for(reg_EOM_HIST_DONE_LANE,0);
        reg_EOM_HIST_EN_LANE = 0;

        // save counter results
#if 1
        memcpy((uint8_t *)&EOM_HIST_REG0, (uint8_t *)&EOM_REG7, 40);
#else
        lnx_EOM_HIST_N_BOT_H_CNT_LANE_31_0 = EOM_REG7.VAL;
        lnx_EOM_HIST_N_BOT_L_CNT_LANE_31_0 = EOM_REG8.VAL;
        lnx_EOM_HIST_N_MID_H_CNT_LANE_31_0 = EOM_REG9.VAL;
        lnx_EOM_HIST_N_MID_L_CNT_LANE_31_0 = EOM_REG10.VAL;
        lnx_EOM_HIST_N_TOP_H_CNT_LANE_31_0 = EOM_REG11.VAL;
        lnx_EOM_HIST_N_TOP_L_CNT_LANE_31_0 = EOM_REG12.VAL;
        lnx_EOM_HIST_N_D00_CNT_LANE_31_0 = EOM_REG13.VAL;
        lnx_EOM_HIST_N_D01_CNT_LANE_31_0 = EOM_REG14.VAL;
        lnx_EOM_HIST_N_D10_CNT_LANE_31_0 = EOM_REG15.VAL;
        lnx_EOM_HIST_N_D11_CNT_LANE_31_0 = EOM_REG16.VAL;
#endif

        if(voltage!=0){
            voltage = ~voltage + 1;
            reg_EOM_HIST_DELTA_TH_TOP_LANE_6_0 = voltage;
            reg_EOM_HIST_DELTA_TH_MID_LANE_7_0 = voltage;
            reg_EOM_HIST_DELTA_TH_BOT_LANE_6_0 = voltage;

            reg_RX_EQ_EOM_RST_LANE = 1;
            reg_RX_EQ_EOM_RST_LANE = 0;

            // Call EOM Hardware
            reg_EOM_HIST_EN_LANE = 1;
            //while((reg_MCU_DEBUGA_LANE_7_0=0x42)&&!reg_EOM_HIST_DONE_LANE);
            wait_for(reg_EOM_HIST_DONE_LANE,0);
            reg_EOM_HIST_EN_LANE = 0;
        }

        lnx_EOM_CALL_LANE = 0;
    }
#endif
}

void esm_exit(void)
{
#ifdef SUPPORT_EOM
    if(lnx_ESM_EN_LANE==0 && lnx_EOM_READY_LANE)
    {
        drv_eom_exit();
        lnx_EOM_READY_LANE = 0;
        PHY_STATUS = save_status;
    }
#endif
}

