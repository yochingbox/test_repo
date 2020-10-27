#include "hw_interface.h"

uint8_t reg_SHARE_PLL_MODE_LANE_1_0 = 0;
uint8_t lnx_MCU_CTRL_PLL_LANE_1_0 = 0;
uint8_t lnx_PLL_SEL_LANE_1_0 = 0;
uint8_t pll_sel = 0;
uint8_t reg_PIN_PU_PLL_RD_LANE = 0;
uint8_t reg_PIN_PU_PLL_RD_LANE0 = 0;
uint8_t reg_PIN_PU_PLL_RD_LANE1 = 0;
uint8_t reg_PIN_PU_PLL_RD_LANE2 = 0;
uint8_t reg_PIN_PU_PLL_RD_LANE3 = 0;
uint8_t reg_MCU_ID_LANE_7_0 = 0;
uint8_t SPD_CFG = 0;

uint8_t reg_MCU_DEBUG0_LANE_7_0 = 0;
uint8_t reg_MCU_DEBUG1_LANE_7_0 = 0;
uint8_t reg_MCU_DEBUG2_LANE_7_0 = 0;

void hw_interface__init() {
    reg_SHARE_PLL_MODE_LANE_1_0 = 0;
    lnx_MCU_CTRL_PLL_LANE_1_0 = 0;
    lnx_PLL_SEL_LANE_1_0 = 0;
    pll_sel = 0;
    reg_PIN_PU_PLL_RD_LANE = 0;
    reg_PIN_PU_PLL_RD_LANE0 = 0;
    reg_PIN_PU_PLL_RD_LANE1 = 0;
    reg_PIN_PU_PLL_RD_LANE2 = 0;
    reg_PIN_PU_PLL_RD_LANE3 = 0;
    reg_MCU_ID_LANE_7_0 = 0;
    SPD_CFG = 0;

    reg_MCU_DEBUG0_LANE_7_0 = 0;
    reg_MCU_DEBUG1_LANE_7_0 = 0;
    reg_MCU_DEBUG2_LANE_7_0 = 0;
}
