#ifndef ROM_REPLACEMENT_H
#define ROM_REPLACEMENT_H

#define ROM_REPLACEMENT // 4-lane project. Flag to replace ROM code implementation after tape out

BIT is_num_toggle_pat( uint8_t val, uint8_t output_cnt, uint8_t target_toggles  ) BANKING_CTRL;

void vdd_cal_01(void) BANKING_CTRL;
void vdd_cal_sel_01( uint8_t sel ) BANKING_CTRL;
int16_t read_tsen_01(void) BANKING_CTRL;

void txdcc_cal_01(void) BANKING_CTRL;
void txdcc_pdiv_cal_01(void) BANKING_CTRL;
void rxdcc_dll_cal_01(void) BANKING_CTRL;
void rxdcc_data_cal_01(void) BANKING_CTRL;
void rxdcc_eom_cal_01(void) BANKING_CTRL;

#endif	
