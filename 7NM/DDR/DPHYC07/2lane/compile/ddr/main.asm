;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.0.0 #6037 (May 26 2011) (Linux)
; This file was generated Mon Jul 13 14:41:29 2020
;--------------------------------------------------------
	.module main
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _delay
	.globl _delay_us
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
	.globl _test_tog
	.globl __sdcc_external_startup
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
_test_tog::
	.ds 1
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area OSEG    (OVR,DATA)
;--------------------------------------------------------
; Stack segment in internal ram 
;--------------------------------------------------------
	.area	SSEG	(DATA)
__start__stack:
	.ds	1

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
; interrupt vector 
;--------------------------------------------------------
	.area HOME    (CODE)
__interrupt_vect:
	ljmp	__sdcc_gsinit_startup
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
	.globl __sdcc_gsinit_startup
	.globl __sdcc_program_startup
	.globl __start__stack
	.globl __mcs51_genRAMCLEAR
;	../../shared/src/main.c:27: int8_t test_tog = 1;
	mov	_test_tog,#0x01
	.area GSFINAL (CODE)
	ljmp	__sdcc_program_startup
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
__sdcc_program_startup:
	lcall	_main
;	return from main will lock up
	sjmp .
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'delay_us'
;------------------------------------------------------------
;t                         Allocated to registers r2 r3 
;------------------------------------------------------------
;	../../shared/src/main.c:29: void delay_us(int16_t t)
;	-----------------------------------------
;	 function delay_us
;	-----------------------------------------
_delay_us:
	ar2 = 0x02
	ar3 = 0x03
	ar4 = 0x04
	ar5 = 0x05
	ar6 = 0x06
	ar7 = 0x07
	ar0 = 0x00
	ar1 = 0x01
	mov	r2,dpl
	mov	r3,dph
00104$:
;	../../shared/src/main.c:31: for(; t > 0; t--)
	clr	c
	clr	a
	subb	a,r2
	mov	a,#(0x00 ^ 0x80)
	mov	b,r3
	xrl	b,#0x80
	subb	a,b
	jnc	00108$
;	../../shared/src/main.c:33: TH0 = 0xff;
	mov	_TH0,#0xFF
;	../../shared/src/main.c:34: TL0 = 0xa0;
	mov	_TL0,#0xA0
;	../../shared/src/main.c:36: TR0 = 1;
	setb	_TR0
;	../../shared/src/main.c:38: while(TF0 != 1) ;
00101$:
	jnb	_TF0,00101$
;	../../shared/src/main.c:40: TR0 = 0;
	clr	_TR0
;	../../shared/src/main.c:41: TF0 = 0;
	clr	_TF0
;	../../shared/src/main.c:31: for(; t > 0; t--)
	dec	r2
	cjne	r2,#0xff,00104$
	dec	r3
	sjmp	00104$
00108$:
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'delay'
;------------------------------------------------------------
;i                         Allocated to registers r2 r3 
;------------------------------------------------------------
;	../../shared/src/main.c:45: void delay(void)
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
;	../../shared/src/main.c:48: for(i = 0; i < 200; i++)
	mov	r2,#0xC8
	mov	r3,#0x00
00103$:
;	../../shared/src/main.c:60: __endasm;
	
	     nop
	     nop
	     nop
	     nop
	     nop
	     nop
	     nop
	     nop
	     nop
	 
	dec	r2
	cjne	r2,#0xff,00109$
	dec	r3
00109$:
;	../../shared/src/main.c:48: for(i = 0; i < 200; i++)
	mov	a,r2
	orl	a,r3
	jz	00110$
	ljmp	00103$
00110$:
	ret
;------------------------------------------------------------
;Allocation info for local variables in function '_sdcc_external_startup'
;------------------------------------------------------------
;------------------------------------------------------------
;	../../shared/src/main.c:86: _sdcc_external_startup() {
;	-----------------------------------------
;	 function _sdcc_external_startup
;	-----------------------------------------
__sdcc_external_startup:
;	../../shared/src/main.c:87: return(1);
	mov	dptr,#0x0001
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'main'
;------------------------------------------------------------
;------------------------------------------------------------
;	../../shared/src/main.c:99: void main(){
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	../../shared/src/main.c:100: CKCON = 0x00; 
	mov	_CKCON,#0x00
;	../../shared/src/main.c:102: EA = 0;
	clr	_EA
;	../../shared/src/main.c:119: cpu_init();
	lcall	_cpu_init
;	../../shared/src/main.c:183: EA = 1;
	setb	_EA
;	../../shared/src/main.c:191: while(1){
00105$:
;	../../shared/src/main.c:324: if(test_tog == 1)
	mov	a,#0x01
	cjne	a,_test_tog,00102$
;	../../shared/src/main.c:326: reg_R0 = 1;
	mov	dptr,#_MCU
	mov	a,#0x01
	movx	@dptr,a
;	../../shared/src/main.c:327: reg_R8 = 0;
	mov	dptr,#(_MCU + 0x0001)
	clr	a
	movx	@dptr,a
;	../../shared/src/main.c:329: test_tog = 0;
	mov	_test_tog,#0x00
	sjmp	00103$
00102$:
;	../../shared/src/main.c:333: reg_R0 = 0;
	mov	dptr,#_MCU
	clr	a
	movx	@dptr,a
;	../../shared/src/main.c:334: reg_R8 = 1;
	mov	dptr,#(_MCU + 0x0001)
	mov	a,#0x01
	movx	@dptr,a
;	../../shared/src/main.c:335: test_tog = 1;
	mov	_test_tog,#0x01
00103$:
;	../../shared/src/main.c:339: delay_us(2); 
	mov	dptr,#0x0002
	lcall	_delay_us
	sjmp	00105$
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area CABS    (ABS,CODE)
	.org 0x0200
_gaFwRev:
	.db #0x01	; 1
	.db #0x23	; 35
	.db #0x45	; 69	E
	.db #0x67	; 103	g
	.org 0x0204
_gnFwPhyMode:
	.db #0x04	; 4
