#ifndef PH_CTRL_H
#define PH_CTRL_H

#define cur_ph_mode reg_CUR_PH_MODE_LANE_1_0
#define cur_ph_dat  reg_CUR_PH_OS_DAT_LANE_15_0
#define cur_ph_esm  reg_CUR_PH_OS_ESM_LANE_7_0

#define CAL_ALIGN90_REF         lnx_CAL_PHASE_LANE_7_0
#define CAL_EOM_DPHER           lnx_CAL_EOM_DPHER_LANE_7_0
#define tag_CDR_HALF_UI_PI_CODE 32
// tag_USE_SEL_EDGE_DLY
// tag_CDR_EOM_INC_IS_CLOCK_DELAY
// tag_CDR_ALIGN90_INC_IS_CLOCK_DELAY
// tag_EOM_DRIVE_DATA_EN_MODE1
// tag_EOM_DRIVE_DATA_EN_MODE2


extern __code int8_t sel_sdge_dly_tb2[];
extern __code int8_t sel_sdge_dly_tb3[];

void set_ph_dat(int16_t phase);
void set_ph_esm(int8_t phase);
void align90_phase_update(uint8_t new_phase_os);
void move_eom_phase(int16_t update_ph) ;

#define eom_ui_align()  EOM_clock_analog_align()
#define eom_f1_align()  EOM_Clock_Alignment()

#endif
