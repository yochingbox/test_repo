;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.0.0 #6037 (May 26 2011) (Linux)
; This file was generated Mon Jul 13 14:41:29 2020
;--------------------------------------------------------
	.module cpu
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _TF2
	.globl _TI
	.globl _RI
	.globl _EX12
	.globl _EX11
	.globl _EX10
	.globl _EX9
	.globl _EX8
	.globl _ES1
	.globl _PS1
	.globl _EX6
	.globl _EX5
	.globl _EX4
	.globl _EX3
	.globl _EX2
	.globl _EX7
	.globl _EA
	.globl _WDT
	.globl _ET2
	.globl _ES
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _P3_7
	.globl _P3_6
	.globl _P3_5
	.globl _P3_4
	.globl _P3_3
	.globl _P3_2
	.globl _P3_1
	.globl _P3_0
	.globl _P2_7
	.globl _P2_6
	.globl _P2_5
	.globl _P2_4
	.globl _P2_3
	.globl _P2_2
	.globl _P2_1
	.globl _P2_0
	.globl _P1_7
	.globl _P1_6
	.globl _P1_5
	.globl _P1_4
	.globl _P1_3
	.globl _P1_2
	.globl _P1_1
	.globl _P1_0
	.globl _P0_7
	.globl _P0_6
	.globl _P0_5
	.globl _P0_4
	.globl _P0_3
	.globl _P0_2
	.globl _P0_1
	.globl _P0_0
	.globl _DMAC
	.globl _DMATA
	.globl _DMASA
	.globl _TMR2
	.globl _TMR1
	.globl _TMR0
	.globl _SRST
	.globl _B
	.globl _EIE
	.globl _ACC
	.globl _ADCON
	.globl _PSW
	.globl _TH2
	.globl _TL2
	.globl _RCAP2H
	.globl _RCAP2L
	.globl _T2CON
	.globl _CCEN
	.globl _IRCON
	.globl _S0RELH
	.globl _IP1
	.globl _IEN1
	.globl _DMAM1
	.globl _DMAM0
	.globl _DMASEL
	.globl _DMAC2
	.globl _DMAC1
	.globl _DMAC0
	.globl _P3
	.globl _S0RELL
	.globl _IP0
	.globl _IEN0
	.globl _DMAT2
	.globl _DMAT1
	.globl _DMAT0
	.globl _DMAS2
	.globl _DMAS1
	.globl _DMAS0
	.globl _P2
	.globl _IEN2
	.globl _SBUF
	.globl _SCON
	.globl _PSBANK
	.globl _DPS
	.globl _P1
	.globl _CKCON
	.globl _TH1
	.globl _TH0
	.globl _TL1
	.globl _TL0
	.globl _TMOD
	.globl _TCON
	.globl _PCON
	.globl _WDTREL
	.globl _DPH
	.globl _DPL
	.globl _P0
	.globl _CLKTIMER
	.globl _CSR
	.globl _MCU
	.globl _cpu_init
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0	=	0x0080
_DPL	=	0x0082
_DPH	=	0x0083
_WDTREL	=	0x0086
_PCON	=	0x0087
_TCON	=	0x0088
_TMOD	=	0x0089
_TL0	=	0x008a
_TL1	=	0x008b
_TH0	=	0x008c
_TH1	=	0x008d
_CKCON	=	0x008e
_P1	=	0x0090
_DPS	=	0x0092
_PSBANK	=	0x0094
_SCON	=	0x0098
_SBUF	=	0x0099
_IEN2	=	0x009a
_P2	=	0x00a0
_DMAS0	=	0x00a1
_DMAS1	=	0x00a2
_DMAS2	=	0x00a3
_DMAT0	=	0x00a4
_DMAT1	=	0x00a5
_DMAT2	=	0x00a6
_IEN0	=	0x00a8
_IP0	=	0x00a9
_S0RELL	=	0x00aa
_P3	=	0x00b0
_DMAC0	=	0x00b1
_DMAC1	=	0x00b2
_DMAC2	=	0x00b3
_DMASEL	=	0x00b4
_DMAM0	=	0x00b5
_DMAM1	=	0x00b6
_IEN1	=	0x00b8
_IP1	=	0x00b9
_S0RELH	=	0x00ba
_IRCON	=	0x00c0
_CCEN	=	0x00c1
_T2CON	=	0x00c8
_RCAP2L	=	0x00ca
_RCAP2H	=	0x00cb
_TL2	=	0x00cc
_TH2	=	0x00cd
_PSW	=	0x00d0
_ADCON	=	0x00d8
_ACC	=	0x00e0
_EIE	=	0x00e8
_B	=	0x00f0
_SRST	=	0x00f7
_TMR0	=	0x8c8a
_TMR1	=	0x8d8b
_TMR2	=	0xcdcc
_DMASA	=	0xa2a1
_DMATA	=	0xa5a4
_DMAC	=	0xb2b1
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0_0	=	0x0080
_P0_1	=	0x0081
_P0_2	=	0x0082
_P0_3	=	0x0083
_P0_4	=	0x0084
_P0_5	=	0x0085
_P0_6	=	0x0086
_P0_7	=	0x0087
_P1_0	=	0x0090
_P1_1	=	0x0091
_P1_2	=	0x0092
_P1_3	=	0x0093
_P1_4	=	0x0094
_P1_5	=	0x0095
_P1_6	=	0x0096
_P1_7	=	0x0097
_P2_0	=	0x00a0
_P2_1	=	0x00a1
_P2_2	=	0x00a2
_P2_3	=	0x00a3
_P2_4	=	0x00a4
_P2_5	=	0x00a5
_P2_6	=	0x00a6
_P2_7	=	0x00a7
_P3_0	=	0x00b0
_P3_1	=	0x00b1
_P3_2	=	0x00b2
_P3_3	=	0x00b3
_P3_4	=	0x00b4
_P3_5	=	0x00b5
_P3_6	=	0x00b6
_P3_7	=	0x00b7
_IT0	=	0x0088
_IE0	=	0x0089
_IT1	=	0x008a
_IE1	=	0x008b
_TR0	=	0x008c
_TF0	=	0x008d
_TR1	=	0x008e
_TF1	=	0x008f
_EX0	=	0x00a8
_ET0	=	0x00a9
_EX1	=	0x00aa
_ET1	=	0x00ab
_ES	=	0x00ac
_ET2	=	0x00ad
_WDT	=	0x00ae
_EA	=	0x00af
_EX7	=	0x00b8
_EX2	=	0x00b9
_EX3	=	0x00ba
_EX4	=	0x00bb
_EX5	=	0x00bc
_EX6	=	0x00bd
_PS1	=	0x00be
_ES1	=	0x009a
_EX8	=	0x009b
_EX9	=	0x009c
_EX10	=	0x009d
_EX11	=	0x009e
_EX12	=	0x009f
_RI	=	0x0098
_TI	=	0x0099
_TF2	=	0x00c6
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area OSEG    (OVR,DATA)
;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
_MCU	=	0x0000
_CSR	=	0x0004
_CLKTIMER	=	0x0008
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'cpu_init'
;------------------------------------------------------------
;------------------------------------------------------------
;	../../shared/src/cpu.c:11: void cpu_init(void) {
;	-----------------------------------------
;	 function cpu_init
;	-----------------------------------------
_cpu_init:
	ar2 = 0x02
	ar3 = 0x03
	ar4 = 0x04
	ar5 = 0x05
	ar6 = 0x06
	ar7 = 0x07
	ar0 = 0x00
	ar1 = 0x01
;	../../shared/src/cpu.c:13: TCON  = 0x05; //EX0/EX1=FALL
	mov	_TCON,#0x05
;	../../shared/src/cpu.c:14: TMOD  = 0x51; //mode1, ct1 
	mov	_TMOD,#0x51
;	../../shared/src/cpu.c:19: PCON = 0x88; //SMOD=1
	mov	_PCON,#0x88
;	../../shared/src/cpu.c:20: ADCON = 0x80;
	mov	_ADCON,#0x80
;	../../shared/src/cpu.c:21: SCON = 0x50; //0101_0000  mode 1: 8-bit 1start/1Stop
	mov	_SCON,#0x50
;	../../shared/src/cpu.c:27: S0RELH = 0x03; //115200
	mov	_S0RELH,#0x03
;	../../shared/src/cpu.c:28: S0RELL = 0x93; 
	mov	_S0RELL,#0x93
;	../../shared/src/cpu.c:33: IP0   = 0x1c; 
	mov	_IP0,#0x1C
;	../../shared/src/cpu.c:34: IP1   = 0x06;
	mov	_IP1,#0x06
;	../../shared/src/cpu.c:35: ET1   = 1;
	setb	_ET1
;	../../shared/src/cpu.c:36: ET2   = 1;
	setb	_ET2
;	../../shared/src/cpu.c:37: EX0   = 1;
	setb	_EX0
;	../../shared/src/cpu.c:38: EX1   = 1;
	setb	_EX1
;	../../shared/src/cpu.c:39: ET0   = 0;
	clr	_ET0
;	../../shared/src/cpu.c:42: IEN1  = 0x3f; //EX6|5|4|3|2|7=1
	mov	_IEN1,#0x3F
;	../../shared/src/cpu.c:43: T2CON = 0x78;//x60; //EX2/EX3:RISE, (Timer2)
	mov	_T2CON,#0x78
;	../../shared/src/cpu.c:44: IEN2  = 0x3e; //EX12|11|10|9|8=1
	mov	_IEN2,#0x3E
	ret
	.area CSEG    (CODE)
	.area CSEG    (CODE)
	.area CABS    (ABS,CODE)
