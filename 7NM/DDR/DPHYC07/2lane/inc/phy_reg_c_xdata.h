#ifndef PHY_REG_C_XDATA_H
#define PHY_REG_C_XDATA_H



// 0x0000	MCU		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t IRQTIMER0                                : 1;	/*     16       r 1'h0*/
		uint8_t IRQTIMER1                                : 1;	/*     17       r 1'h0*/
		uint8_t IRQTIMER2                                : 1;	/*     18       r 1'h0*/
		uint8_t IRQTIMER3                                : 1;	/*     19       r 1'h0*/
		uint8_t MCU__INTOCCUR                            : 1;	/*     20       r 1'h0*/
		uint8_t MCU__HOLDA                               : 1;	/*     21       r 1'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t MCU__PORT0O_7_0                          : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} MCU_t;
__xdata __at( 0x0 ) volatile MCU_t MCU;

#define reg_R0         MCU.BF.RESERVED_0
#define reg_R8         MCU.BF.RESERVED_8

#define reg_IRQTIMER0  MCU.BF.IRQTIMER0
#define reg_IRQTIMER1  MCU.BF.IRQTIMER1
#define reg_IRQTIMER2  MCU.BF.IRQTIMER2
#define reg_IRQTIMER3  MCU.BF.IRQTIMER3
#define reg_MCU__INTOCCUR  MCU.BF.MCU__INTOCCUR
#define reg_MCU__HOLDA  MCU.BF.MCU__HOLDA
#define reg_MCU__PORT0O_7_0  MCU.BF.MCU__PORT0O_7_0

// 0x0004	CSR		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t MCU_EN__CSR                              : 1;	/*     16     r/w 1'h0*/
		uint8_t MCURST_EN__CSR                           : 1;	/*     17     r/w 1'h0*/
		uint8_t CLKPMEM_EN__CSR                          : 1;	/*     18     r/w 1'h0*/
		uint8_t CLKDFISEL__CSR                           : 1;	/*     19     r/w 1'h0*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w 12'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w 12'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CSR_t;
__xdata __at( 0x4 ) volatile CSR_t CSR;
#define reg_MCU_EN__CSR  CSR.BF.MCU_EN__CSR
#define reg_MCURST_EN__CSR  CSR.BF.MCURST_EN__CSR
#define reg_CLKPMEM_EN__CSR  CSR.BF.CLKPMEM_EN__CSR
#define reg_CLKDFISEL__CSR  CSR.BF.CLKDFISEL__CSR

// 0x0008	CLKTIMER		
typedef union {
	struct {
		uint8_t CLKTIMER0_EN__CSR                        : 1;	/*      0     r/w 1'h0*/
		uint8_t CLKTIMER0RST_EN__CSR                     : 1;	/*      1     r/w 1'h0*/
		uint8_t CLKTIMER1_EN__CSR                        : 1;	/*      2     r/w 1'h0*/
		uint8_t CLKTIMER1RST_EN__CSR                     : 1;	/*      3     r/w 1'h0*/
		uint8_t CLKTIMER2_EN__CSR                        : 1;	/*      4     r/w 1'h0*/
		uint8_t CLKTIMER2RST_EN__CSR                     : 1;	/*      5     r/w 1'h0*/
		uint8_t CLKTIMER3_EN__CSR                        : 1;	/*      6     r/w 1'h0*/
		uint8_t CLKTIMER3RST_EN__CSR                     : 1;	/*      7     r/w 1'h0*/
		uint8_t CLKTIMER0_SEL__CSR                       : 1;	/*      8     r/w 1'h0*/
		uint8_t CLKTIMER1_SEL__CSR                       : 1;	/*      9     r/w 1'h0*/
		uint8_t CLKTIMER2_SEL__CSR                       : 1;	/*     10     r/w 1'h0*/
		uint8_t CLKTIMER3_SEL__CSR                       : 1;	/*     11     r/w 1'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t CLKTIMEREXT0_EN__CSR                     : 1;	/*     16     r/w 1'h0*/
		uint8_t CLKTIMEREXT0RST_EN__CSR                  : 1;	/*     17     r/w 1'h0*/
		uint8_t CLKTIMEREXT1_EN__CSR                     : 1;	/*     18     r/w 1'h0*/
		uint8_t CLKTIMEREXT1RST_EN__CSR                  : 1;	/*     19     r/w 1'h0*/
		uint8_t CLKTIMEREXT2_EN__CSR                     : 1;	/*     20     r/w 1'h0*/
		uint8_t CLKTIMEREXT2RST_EN__CSR                  : 1;	/*     21     r/w 1'h0*/
		uint8_t CLKTIMEREXT3_EN__CSR                     : 1;	/*     22     r/w 1'h0*/
		uint8_t CLKTIMEREXT3RST_EN__CSR                  : 1;	/*     23     r/w 1'h0*/
		uint8_t CLKTIMEREXT0_SEL__CSR                    : 1;	/*     24     r/w 1'h0*/
		uint8_t CLKTIMEREXT1_SEL__CSR                    : 1;	/*     25     r/w 1'h0*/
		uint8_t CLKTIMEREXT2_SEL__CSR                    : 1;	/*     26     r/w 1'h0*/
		uint8_t CLKTIMEREXT3_SEL__CSR                    : 1;	/*     27     r/w 1'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLKTIMER_t;
__xdata __at( 0x8 ) volatile CLKTIMER_t CLKTIMER;
#define reg_CLKTIMER0_EN__CSR  CLKTIMER.BF.CLKTIMER0_EN__CSR
#define reg_CLKTIMER0RST_EN__CSR  CLKTIMER.BF.CLKTIMER0RST_EN__CSR
#define reg_CLKTIMER1_EN__CSR  CLKTIMER.BF.CLKTIMER1_EN__CSR
#define reg_CLKTIMER1RST_EN__CSR  CLKTIMER.BF.CLKTIMER1RST_EN__CSR
#define reg_CLKTIMER2_EN__CSR  CLKTIMER.BF.CLKTIMER2_EN__CSR
#define reg_CLKTIMER2RST_EN__CSR  CLKTIMER.BF.CLKTIMER2RST_EN__CSR
#define reg_CLKTIMER3_EN__CSR  CLKTIMER.BF.CLKTIMER3_EN__CSR
#define reg_CLKTIMER3RST_EN__CSR  CLKTIMER.BF.CLKTIMER3RST_EN__CSR
#define reg_CLKTIMER0_SEL__CSR  CLKTIMER.BF.CLKTIMER0_SEL__CSR
#define reg_CLKTIMER1_SEL__CSR  CLKTIMER.BF.CLKTIMER1_SEL__CSR
#define reg_CLKTIMER2_SEL__CSR  CLKTIMER.BF.CLKTIMER2_SEL__CSR
#define reg_CLKTIMER3_SEL__CSR  CLKTIMER.BF.CLKTIMER3_SEL__CSR
#define reg_CLKTIMEREXT0_EN__CSR  CLKTIMER.BF.CLKTIMEREXT0_EN__CSR
#define reg_CLKTIMEREXT0RST_EN__CSR  CLKTIMER.BF.CLKTIMEREXT0RST_EN__CSR
#define reg_CLKTIMEREXT1_EN__CSR  CLKTIMER.BF.CLKTIMEREXT1_EN__CSR
#define reg_CLKTIMEREXT1RST_EN__CSR  CLKTIMER.BF.CLKTIMEREXT1RST_EN__CSR
#define reg_CLKTIMEREXT2_EN__CSR  CLKTIMER.BF.CLKTIMEREXT2_EN__CSR
#define reg_CLKTIMEREXT2RST_EN__CSR  CLKTIMER.BF.CLKTIMEREXT2RST_EN__CSR
#define reg_CLKTIMEREXT3_EN__CSR  CLKTIMER.BF.CLKTIMEREXT3_EN__CSR
#define reg_CLKTIMEREXT3RST_EN__CSR  CLKTIMER.BF.CLKTIMEREXT3RST_EN__CSR
#define reg_CLKTIMEREXT0_SEL__CSR  CLKTIMER.BF.CLKTIMEREXT0_SEL__CSR
#define reg_CLKTIMEREXT1_SEL__CSR  CLKTIMER.BF.CLKTIMEREXT1_SEL__CSR
#define reg_CLKTIMEREXT2_SEL__CSR  CLKTIMER.BF.CLKTIMEREXT2_SEL__CSR
#define reg_CLKTIMEREXT3_SEL__CSR  CLKTIMER.BF.CLKTIMEREXT3_SEL__CSR

#endif
