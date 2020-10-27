/*
 * reg_interface.h
 *
 *  Created on: Mar 28, 2017
 *      Author: echeng
 */

#ifndef INC_REG_INTERFACE_H_
#define INC_REG_INTERFACE_H_

/* The purpose of this file is to define the register interface*/
/* between hardware and fw.									   */

#define reg_TX_SPEED_DIV_LANE_2_0				reg_TXSPEED_DIV_LANE_2_0
#define reg_RX_SPEED_DIV_LANE_2_0				reg_RXSPEED_DIV_LANE_2_0
#define reg_ALIGN90_DAC_LANE_5_0				reg_ALIGN90_DAC_LANE_6_0
#define reg_DTL_LOOP_FREEZE_LANE				reg_ANA_RX_DTL_LOOP_FREEZE_LANE
#define reg_TX_CK_SEL_LANE						reg_TXCK_SEL_LANE
#define reg_RX_CK_SEL_LANE						reg_RXCK_SEL_LANE
#define reg_TX_REG_SPEED_TRK_CLK_LANE_2_0		reg_TXREG_SPEEDTRK_CLK_LANE_2_0
#define reg_TX_REG_SPEED_TRK_DATA_LANE_2_0		reg_TXREG_SPEEDTRK_DATA_LANE_2_0
#define reg_SLEWRATE_EN_LANE_1_0				reg_SLEWRATE_EN_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0	reg_RXREG_SPEEDTRK_CLK_LANE_2_0
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE	reg_RXREG_SPEEDTRK_CLK_HALF_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0	reg_RXREG_SPEEDTRK_DATA_LANE_2_0


#define reg_SMPLR_CAL_SEL_LANE_2_0				reg_SMPLR_CAL_SEL_LANE_3_0
#define	reg_OFST_RES_LANE_1_0					reg_OFST_RES_LANE
#define reg_TRAIN_PAT_NUM_LANE_8_0_b0			reg_TRAIN_PAT_NUM_LANE_9_0_b0
#define reg_TRAIN_PAT_NUM_LANE_8_0_b1			reg_TRAIN_PAT_NUM_LANE_9_0_b1
/*#define
#define

#define
#define
#define

#define
#define
#define*/


#endif /* INC_REG_INTERFACE_H_ */
