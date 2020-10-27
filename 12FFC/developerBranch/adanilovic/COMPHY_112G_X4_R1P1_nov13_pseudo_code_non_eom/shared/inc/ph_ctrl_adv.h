#include "common.h"

// added by JL
// enum
typedef enum {
    // all positive numbers mean the larger it is, the better
    // e.g. larger f0d is better
    f0d = 1,

    // all negative numbers mean the smaller the better

    // f1_fn1 stands for abs(f1-kfn1), where k is a programmable factor
    // we want f1_fn1 to be small to balance f1 and fn1
    f1_fn1 = -1
} PH_TRAIN_MODE_t;

typedef enum {
    All = 0,
    Sel = 1

} PH_TRAIN_PATH_SEL_t;

typedef enum {
    P2P4_A90 = 0,
    P1P3_A90 = 1,
    P2P4_DCC = 2,
    P1P3_DCC = 3,
    P1_DtoS = 4,
    P2_DtoS = 5,
    P3_DtoS = 6,
    P4_DtoS = 7,
    ALL = 8
} PH_TRAIN_CTRL_t;



// function handles
void save_to_ph_train_adv(Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL;
void load_from_ph_train_adv(Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL;
void save_rx_align90_de(Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL;
void save_rx_align90_dd(Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL;
uint8_t convert_rx_align90_de_reg_to_code() BANKING_CTRL;
uint8_t convert_rx_align90_dd_reg_to_code() BANKING_CTRL;
void save_rx_dcc(uint8_t x, Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL;
uint8_t convert_rx_dcc_reg_to_code_h(uint8_t reg_rx_dcc_10_3, uint8_t reg_rx_dcc_2_0) BANKING_CTRL;
uint8_t convert_rx_dcc_reg_to_code(uint8_t rx_dcc_1or4) BANKING_CTRL;
void save_ckpx_tune(uint8_t x, Status_Phase_Train_Adv_t* ph_train_struct) BANKING_CTRL;
int8_t convert_ckpx_tune_reg_to_code(uint8_t x) BANKING_CTRL;

void set_rx_align90_de_reg(uint8_t rx_align90_de_ref_code_7_0) BANKING_CTRL;
void set_rx_align90_dd_reg(uint8_t rx_align90_dd_ref_code_7_0) BANKING_CTRL;
void set_rx_dcc_reg(uint8_t x, uint8_t rx_dcc_ref_code_7_0) BANKING_CTRL;
void set_ckpx_tune_reg(uint8_t x, int8_t reg_ckpx_tune_code_4_0) BANKING_CTRL;

void optimize_rx_align90_de(PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel) BANKING_CTRL;
void optimize_rx_align90_dd(PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel) BANKING_CTRL;


void adv_rx_phase_opt(PH_TRAIN_MODE_t train_mode, PH_TRAIN_PATH_SEL_t path_sel) BANKING_CTRL;

void get_fx(void) BANKING_CTRL;

uint16_t compute_f1_fn1_h(int8_t f1, int8_t fn1) BANKING_CTRL;
uint16_t compute_f1_fn1(PH_TRAIN_CTRL_t control) BANKING_CTRL;


