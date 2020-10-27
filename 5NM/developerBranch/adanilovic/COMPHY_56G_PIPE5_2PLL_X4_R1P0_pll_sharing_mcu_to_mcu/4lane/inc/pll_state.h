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
     PLL_SEQUENCE__Invalid_Seq    = 0x0,
     PLL_SEQUENCE__PowerUp_Seq    = 0x1,
     PLL_SEQUENCE__Calibration    = 0x2,
     PLL_SEQUENCE__Calibration_rx = 0x3,
     PLL_SEQUENCE__Calibration_tx = 0x4,
     PLL_SEQUENCE__SpeedChange    = 0x5,
     PLL_SEQUENCE__SpeedChange_rx = 0x6,
     PLL_SEQUENCE__SpeedChange_tx = 0x7,
     PLL_SEQUENCE__Power_P0s_P1   = 0x8,
     PLL_SEQUENCE__Power_P2       = 0x9,
     PLL_SEQUENCE__Power_P2_P1    = 0xA,
     PLL_SEQUENCE__Power_P1_P0    = 0xB,
     PLL_SEQUENCE__Num_Seqs,
     PLL_SEQUENCE__NeverAssigned
};

enum PLL_SLAVE_LANE_STATE__STATES {
     PLL_SLAVE_LANE_STATE__Invalid_State              = 0x0,
     PLL_SLAVE_LANE_STATE__RequestingPLLAccess        = 0x1,
     PLL_SLAVE_LANE_STATE__InUseSendPLLAccessCommands = 0x2,
     PLL_SLAVE_LANE_STATE__InUseSyncPLLAccess         = 0x3,
     PLL_SLAVE_LANE_STATE__InUseSkipPLLAccess         = 0x4,
     PLL_SLAVE_LANE_STATE__InUse                      = 0x5,
     PLL_SLAVE_LANE_STATE__Free                       = 0x6,
     PLL_SLAVE_LANE_STATE__Num_States
};

enum PLL_SLAVE_LANE_COMMAND__COMMANDS {
     PLL_SLAVE_LANE_COMMAND__Invalid_Command  = 0x0,
     PLL_SLAVE_LANE_COMMAND__RequestPLLAccess = 0x1,
     PLL_SLAVE_LANE_COMMAND__PllAccessCommand = 0x2,
     PLL_SLAVE_LANE_COMMAND__Free             = 0x3,
     PLL_SLAVE_LANE_COMMAND__Num_Commands
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
     //PLL Access Commands here
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

void pll_state_common_init() BANKING_CTRL;
void pll_state_lane_init() BANKING_CTRL;

enum PLL_ACCESS_STATE__STATES
pll_a_get_current_state(const enum PLL_MASTER_LANE_INDICES pll_index) BANKING_CTRL;

enum PLL_REQUEST_ACCESS_RETURN_CODES
pll_a_handle_event(const enum PLL_MASTER_LANE_INDICES pll_index,
                               const enum PLL_ACCESS_COMMAND__COMMANDS command) BANKING_CTRL;

enum PLL_SLAVE_LANE_STATE__STATES
pll_s_get_current_state(const uint8_t lane_index) BANKING_CTRL;

enum PLL_REQUEST_ACCESS_RETURN_CODES
pll_s_handle_event(const uint8_t lane_index,
                                   const enum PLL_SLAVE_LANE_COMMAND__COMMANDS command,
                                   const uint8_t data1) BANKING_CTRL;

bool pll_s_any_lane_in_state(const uint8_t lane_bit_map,
                                             const enum PLL_SLAVE_LANE_STATE__STATES state) BANKING_CTRL;

bool pll_s_all_lanes_in_same_seq(const uint8_t lane_bit_map) BANKING_CTRL;

enum PLL_MASTER_LANE_STATE__STATES
pll_m_get_current_state(const enum PLL_MASTER_LANE_INDICES master_index) BANKING_CTRL;

uint8_t pll_m_get_mcuid_from_master_index(const enum PLL_MASTER_LANE_INDICES master_index) BANKING_CTRL;
enum PLL_MASTER_LANE_INDICES pll_m_get_master_index_from_mcuid(const uint8_t mcu_id_local);

void
pll_m_handle_event(const enum PLL_MASTER_LANE_INDICES master_index,
                                    const enum PLL_MASTER_LANE_COMMAND__COMMANDS command,
                                    const uint8_t data1) BANKING_CTRL;
#endif //#ifndef PLL_STATE_H
