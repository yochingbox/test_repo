#ifndef PHY_REG_C_RX_CMN_H
#define PHY_REG_C_RX_CMN_H



// 0x0000	RX_CMN_0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CMN_0_t;
__xdata __at( 0xa100 ) volatile RX_CMN_0_t RX_CMN_0;

#endif
