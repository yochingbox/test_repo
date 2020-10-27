/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file pll_state.h
* \purpose Definitions, Declaration
* \History
*	1/7/2020 Andrew Danilovic		Initial commit 
*/
#ifndef PLL_STATE_H
#define PLL_STATE_H

enum PLL_SEQUENCE__SEQUENCES {
     PLL_SEQUENCE__Invalid_Seq                 = 0x0,   //PLL powered off
     PLL_SEQUENCE__PowerUp_Seq                 = 0x1,   //PLL powered on
     PLL_SEQUENCE__Calibration                 = 0x2,   //PLL powered on
     PLL_SEQUENCE__Calibration_rx              = 0x3,   //PLL powered on
     PLL_SEQUENCE__Calibration_tx              = 0x4,   //PLL powered on
     PLL_SEQUENCE__SpeedChange                 = 0x5,   //PLL powered on
     PLL_SEQUENCE__SpeedChange_rx              = 0x6,   //PLL powered on
     PLL_SEQUENCE__SpeedChange_tx              = 0x7,   //PLL powered on
     PLL_SEQUENCE__Power_P0s_P1                = 0x8,   //PLL powered on
     PLL_SEQUENCE__Power_P2                    = 0x9,   //PLL powered off
     PLL_SEQUENCE__Power_P2_P1                 = 0xA,   //PLL powered on
     PLL_SEQUENCE__Power_P1_P0                 = 0xB,   //PLL powered on
     PLL_SEQUENCE__Power_Slumber               = 0xC,   //PLL powered off
     PLL_SEQUENCE__Power_Slumber_Wk            = 0xD,   //PLL powered on
     PLL_SEQUENCE__Power_Partial_Slumber_Tx    = 0xE,   //PLL powered on
     PLL_SEQUENCE__Power_Partial_Slumber_Rx    = 0xF,   //PLL powered on
     PLL_SEQUENCE__Power_Partial_Slumber_Wk_Tx = 0x10,  //PLL powered on
     PLL_SEQUENCE__Power_Partial_Slumber_Wk_Rx = 0x11,  //PLL powered on
     PLL_SEQUENCE__Rx_Soft_Reset               = 0x12,  //PLL powered off
     PLL_SEQUENCE__Rx_Soft_Reset_Release       = 0x13,  //PLL powered on
     PLL_SEQUENCE__Tx_Soft_Reset               = 0x14,  //PLL powered off
     PLL_SEQUENCE__Tx_Soft_Reset_Release       = 0x15,  //PLL powered on
     PLL_SEQUENCE__Num_Seqs,
     PLL_SEQUENCE__NeverAssigned
};

enum PLL_SLAVE_LANE_STATE__STATES {
     PLL_SLAVE_LANE_STATE__Invalid_State              = 0x0,
     PLL_SLAVE_LANE_STATE__WillNeverNeedMaster        = 0x1,
     PLL_SLAVE_LANE_STATE__RequestingPLLAccess        = 0x2,
     PLL_SLAVE_LANE_STATE__InUseSendPLLAccessCommands = 0x3,
     PLL_SLAVE_LANE_STATE__InUseSyncPLLAccess         = 0x4,
     PLL_SLAVE_LANE_STATE__InUseSkipPLLAccess         = 0x5,
     PLL_SLAVE_LANE_STATE__InUse                      = 0x6,
     PLL_SLAVE_LANE_STATE__Free                       = 0x7,
     PLL_SLAVE_LANE_STATE__Num_States
};

enum PLL_SLAVE_LANE_COMMAND__COMMANDS {
     PLL_SLAVE_LANE_COMMAND__Invalid_Command  = 0x0,
     PLL_SLAVE_LANE_COMMAND__RequestPLLAccess = 0x1,
     PLL_SLAVE_LANE_COMMAND__PllAccessCommand = 0x2,
     PLL_SLAVE_LANE_COMMAND__Free             = 0x3,
     PLL_SLAVE_LANE_COMMAND__Num_Commands
};

enum PLL_SLAVE_LANE_INDICES {
     PLL_SLAVE_LANE_INDICES__Slave0 = 0x0,
     PLL_SLAVE_LANE_INDICES__Slave1 = 0x1,
     PLL_SLAVE_LANE_INDICES__Slave2 = 0x2,
     PLL_SLAVE_LANE_INDICES__NumSlaves,
     PLL_SLAVE_LANE_INDICES__Invalid_Index
};

enum PLL_MASTER_LANE_STATE__STATES {
     PLL_MASTER_LANE_STATE__Invalid_State                      = 0x0,

     PLL_MASTER_LANE_STATE__SlavePLLAccessRequestPending       = 0x1,

     //Master lane is requesting PLL access for itself
     PLL_MASTER_LANE_STATE__RequestingPLLAccess                = 0x2,

     //Master will perform PLL access alone
     PLL_MASTER_LANE_STATE__InUsePerformPllAccess              = 0x3,

     //Master will execute PLL access commands from a slave
     PLL_MASTER_LANE_STATE__InUsePerformPllAccessNoSync        = 0x4,

     //Master will perform PLL access and sync with slave lanes at each step
     PLL_MASTER_LANE_STATE__InUsePerformPllAccessWithSync      = 0x5,

     //Slave and/or Master will skip PLL access
     PLL_MASTER_LANE_STATE__InUseSkipPLLAccess                 = 0x6,

     //Master is using the PLL
     PLL_MASTER_LANE_STATE__InUse                              = 0x7,

     //Master is not using the PLL (e.g. the lane is fully powered down)
     PLL_MASTER_LANE_STATE__Free                               = 0x8,

     PLL_MASTER_LANE_STATE__Num_States
};

enum PLL_MASTER_LANE_COMMAND__COMMANDS {
     PLL_MASTER_LANE_COMMAND__Invalid_Command              = 0x0,
     PLL_MASTER_LANE_COMMAND__RequestingPLLAccessForMaster = 0x1,
     PLL_MASTER_LANE_COMMAND__CheckIfPLLAccessPending      = 0x2,
     PLL_MASTER_LANE_COMMAND__PllAccessCommand             = 0x3,
     PLL_MASTER_LANE_COMMAND__Free                         = 0x4,
     PLL_MASTER_LANE_COMMAND__Num_Commands
};

enum PLL_MASTER_LANE_INDICES {
     PLL_MASTER_LANE_INDICES__Master0 = 0x0,
     PLL_MASTER_LANE_INDICES__Master1 = 0x1,
     PLL_MASTER_LANE_INDICES__NumMasters,
     PLL_MASTER_LANE_INDICES__Invalid_Index
};

enum PLL_REQUEST_ACCESS_RETURN_CODES {
     PLL_REQUEST_RETURN_CODE__Invalid_Code                = 0x0,

     PLL_REQUEST_RETURN_CODE__RequestAccessRejected_InUse = 0x1,

     PLL_REQUEST_RETURN_CODE__PLLFree                     = 0x2,

     //At most one slave lane will send PLL access commands to the master
     PLL_REQUEST_RETURN_CODE__SendPLLAccessCommands       = 0x3,

     //The master will perform all PLL access itself without receiving commands.
     //All slave lanes will sync with the master at each PLL access step.
     PLL_REQUEST_RETURN_CODE__SyncPLLAccess               = 0x4,

     //The master will perform all PLL access itself alone.
     PLL_REQUEST_RETURN_CODE__PerformPLLAccess            = 0x5,

     //All lanes (master and/or slave) will skip PLL access because the PLL is already
     //in use by one or more lanes.
     PLL_REQUEST_RETURN_CODE__SkipPLLAccess               = 0x6,

     PLL_REQUEST_RETURN_CODE__Num_Codes,
};

enum PLL_ACCESS_STATE__STATES {
     PLL_ACCESS_STATE__Invalid_State         = 0x0,
     PLL_ACCESS_STATE__InUse                 = 0x1,
     PLL_ACCESS_STATE__InUseBySlave          = 0x2,
     PLL_ACCESS_STATE__InUseByMaster         = 0x3,
     PLL_ACCESS_STATE__InUseBySlaveAndMaster = 0x4, 
     PLL_ACCESS_STATE__Free                  = 0x5,
     PLL_ACCESS_STATE__Num_States
};

enum PLL_ACCESS_COMMAND__COMMANDS {
     PLL_ACCESS_COMMAND__Invalid_Command  = 0x0,
     PLL_ACCESS_COMMAND__RequestPLLAccess = 0x1,
     PLL_ACCESS_COMMAND__Free             = 0x2,
     PLL_ACCESS_COMMAND__Num_Commands
};

void pll_state_full_init() BANKING_CTRL;
void pll_state_lane_init(const uint8_t mcuid_local) BANKING_CTRL;

enum PLL_ACCESS_STATE__STATES
pll_a_get_current_state(const enum PLL_MASTER_LANE_INDICES pll_index);

enum PLL_REQUEST_ACCESS_RETURN_CODES
pll_a_handle_event(const enum PLL_MASTER_LANE_INDICES pll_index,
                               const enum PLL_ACCESS_COMMAND__COMMANDS command);

enum PLL_SLAVE_LANE_STATE__STATES
pll_s_get_current_state(const uint8_t lane_index);

enum PLL_SEQUENCE__SEQUENCES pll_s_get_current_seq(const uint8_t slave_lane_index);

void pll_s_set_current_seq(const uint8_t slave_lane_index,
                           const enum PLL_SEQUENCE__SEQUENCES seq);

//uint8_t pll_s_get_mcuid_from_slave_index(const enum PLL_SLAVE_LANE_INDICES slave_index) BANKING_CTRL;

//enum PLL_SLAVE_LANE_INDICES pll_s_get_slave_index_from_mcuid(const uint8_t mcuid_local) BANKING_CTRL;

enum PLL_REQUEST_ACCESS_RETURN_CODES
pll_s_handle_event(const uint8_t lane_index,
                                   const enum PLL_SLAVE_LANE_COMMAND__COMMANDS command,
                                   const uint8_t data1,
                                   const uint8_t data2,
                                   const uint8_t data3);

bool pll_s_any_lane_in_state(const uint8_t lane_bit_map,
                                             const enum PLL_SLAVE_LANE_STATE__STATES state);

bool pll_all_slave_lanes_in_same_seq(const uint8_t slave_lane_bit_map,
                                     enum PLL_SEQUENCE__SEQUENCES *seq_return);

bool pll_all_lanes_in_same_seq(const uint8_t slave_lane_bit_map,
                               const uint8_t master_index);

bool pll_any_lane_pll_in_use(const uint8_t slave_lane_bit_map,
                             const uint8_t master_index);

enum PLL_MASTER_LANE_STATE__STATES
pll_m_get_current_state(const enum PLL_MASTER_LANE_INDICES master_index);

void pll_m_set_state(const uint8_t master_index,
                     const enum PLL_MASTER_LANE_STATE__STATES state);

uint8_t pll_m_get_mcuid_from_master_index(const enum PLL_MASTER_LANE_INDICES master_index);
enum PLL_MASTER_LANE_INDICES pll_m_get_master_index_from_mcuid(const uint8_t mcuid_local);

void
pll_m_handle_event(const enum PLL_MASTER_LANE_INDICES master_index,
                                    const enum PLL_MASTER_LANE_COMMAND__COMMANDS command,
                                    const uint8_t data1,
                                    const uint8_t data2,
                                    const uint8_t data3);
#endif //#ifndef PLL_STATE_H
