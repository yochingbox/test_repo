/******************************************************************
 * 	        Marvell Semiconductor
 *******************************************************************
 * \file spdtbl_pemem.c
 * \purpose Program memory to store raw speed table data
 * \History
 *	2/1/18 Initial
 *  2/28/2018 Used DMA to transfer spdtbl data to XDAT
 */
#include "common.h"
#ifdef SPD_TBL_IN_PMEM
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK2
#pragma constseg BANK2
#endif

#define SPDTBL_PMEM_ADDR 0xF000
#define SPDTBL_PMEM_PHYSICAL_ADDR 0x17000
#define SPDTBL_SIZE 2048

// Using fixed MCU to avoid reading xdata before finishing copying from program memory
#define COPY_CMN_XDAT_LANE 0

void CopySpeedTableToXData() BANKING_CTRL
{
	if ( 0 == BYPASS_SPDTBL_LOAD ) {
		#ifndef USE_DMA_LOAD_SPDTBL
		__code uint8_t* pSpdTblCmnProgram = (__code uint8_t*)SPDTBL_PMEM_ADDR;	// Speed table common address in program memory
		__xdata uint8_t* pSpdTblCmnData = (__xdata uint8_t*)SPDTBL_XDAT_CMN_BASE; // Speed table common in XDATA
		__code uint8_t* pSpdTblLaneProgram = pSpdTblCmnProgram + SPDTBL_SIZE;	// Speed table lane address in program memory
		__xdata uint8_t* pSpdTblLaneData = (__xdata uint8_t*)XDAT_BASE; // Speed table lane in XDATA
		uint16_t index;

		for ( index = 0; index < SPDTBL_SIZE; ++index )
		{
			*( pSpdTblCmnData + index ) = *( pSpdTblCmnProgram + index );
			*( pSpdTblLaneData + index ) = *( pSpdTblLaneProgram + index );
		}
		#else
		//~45usec consume for 4KByte transfer
		if ( mcuid == COPY_CMN_XDAT_LANE ) { // lane 0 is loading xdata common
			memcpy_prom_to_xdat( SPDTBL_XDAT_CMN_BASE, SPDTBL_PMEM_PHYSICAL_ADDR, SPDTBL_SIZE);
		}
		memcpy_prom_to_xdat( XDAT_BASE, (SPDTBL_PMEM_PHYSICAL_ADDR + SPDTBL_SIZE), SPDTBL_SIZE);
		#endif
		// set MCU_INIT_DONE to indicate simulation can write speed up registers
		if ( mcuid == COPY_CMN_XDAT_LANE ) // lane 0 is loading xdata common
			cmx_MCU_INIT_DONE = 1;
		else
			while ( 0 == cmx_MCU_INIT_DONE ); // lane 1 needs to wait for xdata common copy finish
	}
	else {
		if ( mcuid == COPY_CMN_XDAT_LANE )
			cmx_MCU_INIT_DONE = 1;
		else {
			while(cmx_MCU_INIT_DONE==0);
		}
	}
	
	
}

void InitPrePowerUp() BANKING_CTRL
{
	if ( mcuid== master_mcu )	// Common registers
	{
		cmx_PHY_GEN_MAX_3_0 = 3; // max 16G
		cmx_MCU_FREQ_15_0 = 357; // default to use 357 MCU clock (Eagle)
		// Enable ECC interrupt - CMN
		reg_XDATA_ECC_1ERR_ENABLE = 1;
		reg_XDATA_ECC_2ERR_ENABLE = 1;
		reg_ROM_PARITY_ERR_ENABLE = 1;
		if ( reg_MCU_FW_SWITCH_EN_LANE_31_0_b0 != 0 ) { // Using SRAM in the crash mode code
			reg_PRAM_ECC_1ERR_ENABLE = 1;
			reg_PRAM_ECC_2ERR_ENABLE = 1;
		}
	}
	// lane registers
	reg_DET_BYPASS_LANE = 1;
	reg_LINK_TRAIN_MODE_LANE = 1;
	// Enable ECC interrupt - lane
	reg_XDATA_ECC_1ERR_ENABLE_LANE = 1;
	reg_XDATA_ECC_2ERR_ENABLE_LANE = 1;
	reg_IRAM_ECC_1ERR_ENABLE_LANE = 1;
	reg_IRAM_ECC_2ERR_ENABLE_LANE = 1;
	reg_CACHE_ECC_1ERR_ENABLE_LANE = 1;
	reg_CACHE_ECC_2ERR_ENABLE_LANE = 1;

        // For Super Micro mother slot #6
        reg_TXDETRX_VTH_LANE_1_0 = 3;
        reg_TXDETRX_SAMPLING_POINT_LANE_2_0 = 0;
        reg_CFG_RX_EQ_CTRL_LANE = 1;
        

	reg_RESET_CORE_FM_PIPE = 1;
	// Last register to write is to release PIPE_SFT_RESET
	reg_PIPE_SFT_RESET = 0;
}
#endif // of #ifdef SPD_TBL_IN_PMEM
