/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file sfr_r8051.h
* \purpose Special Function Registers for R8051 CPU
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/ 
#ifndef SFR_REFFILE_H
#define SFR_REFFILE_H
/////////////////////////////////
// Internal SFR
/////////////////////////////////

SFR(P0,		0x80);
SFR(DPL,	0x82);
SFR(DPH,	0x83);
SFR(WDTREL,	0x86);
SFR(PCON,	0x87);
SFR(TCON,	0x88);
SFR(TMOD,	0x89);
SFR(TL0,	0x8A);
SFR(TL1,	0x8B);
SFR(TH0,	0x8C);
SFR(TH1,	0x8D);
SFR(CKCON,	0x8E);
SFR(P1,		0x90);
SFR(DPS,	0x92);
SFR(PSBANK, 0x94);
SFR(SCON,	0x98);
SFR(SBUF,	0x99);
SFR(IEN2,	0x9A);
SFR(P2,		0xA0);
SFR(DMAS0,  0xA1);
SFR(DMAS1,  0xA2);
SFR(DMAS2,  0xA3);
SFR(DMAT0,  0xA4);
SFR(DMAT1,  0xA5);
SFR(DMAT2,  0xA6);
SFR(IEN0,	0xA8);
SFR(IP0,	0xA9);
SFR(S0RELL, 0xAA);
SFR(P3,		0xB0);
SFR(DMAC0,  0xB1);
SFR(DMAC1,  0xB2);
SFR(DMAC2,  0xB3);
SFR(DMASEL, 0xB4);
SFR(DMAM0,  0xB5);
SFR(DMAM1,  0xB6);
SFR(IEN1,	0xB8);
SFR(IP1,	0xB9);
SFR(S0RELH, 0xBA);
SFR(IRCON,  0xC0);
SFR(CCEN,   0xC1);
SFR(T2CON,	0xC8);
SFR(RCAP2L, 0xCA);
SFR(RCAP2H, 0xCB);
SFR(TL2,    0xCC);
SFR(TH2,    0xCD);
SFR(PSW,	0xD0);
SFR(ADCON,	0xD8);
SFR(ACC,	0xE0);
SFR(EIE,	0xE8);
SFR(B,		0xF0);
SFR(SRST,   0xF7);

SFR16E(TMR0,    0x8C8A);
SFR16E(TMR1,    0x8D8B);
SFR16E(TMR2,    0xCDCC);
SFR16E(DMASA,	0xA2A1);
SFR16E(DMATA,	0xA5A4);
SFR16E(DMAC,	0xB2B1);

// Bit-Addressable Internal SFR
//P0
SBIT(P0_0,	0x80, 0);
SBIT(P0_1,	0x80, 1);
SBIT(P0_2,	0x80, 2);
SBIT(P0_3,	0x80, 3);
SBIT(P0_4,	0x80, 4);
SBIT(P0_5,	0x80, 5);
SBIT(P0_6,	0x80, 6);
SBIT(P0_7,	0x80, 7);

//P1
SBIT(P1_0,	0x90, 0);
SBIT(P1_1,	0x90, 1);
SBIT(P1_2,	0x90, 2);
SBIT(P1_3,	0x90, 3);
SBIT(P1_4,	0x90, 4);
SBIT(P1_5,	0x90, 5);
SBIT(P1_6,	0x90, 6);
SBIT(P1_7,	0x90, 7);

//P2
SBIT(P2_0,	0xa0, 0);
SBIT(P2_1,	0xa0, 1);
SBIT(P2_2,	0xa0, 2);
SBIT(P2_3,	0xa0, 3);
SBIT(P2_4,	0xa0, 4);
SBIT(P2_5,	0xa0, 5);
SBIT(P2_6,	0xa0, 6);
SBIT(P2_7,	0xa0, 7);

//P3
SBIT(P3_0,	0xb0, 0);
SBIT(P3_1,	0xb0, 1);
SBIT(P3_2,	0xb0, 2);
SBIT(P3_3,	0xb0, 3);
SBIT(P3_4,	0xb0, 4);
SBIT(P3_5,	0xb0, 5);
SBIT(P3_6,	0xb0, 6);
SBIT(P3_7,	0xb0, 7);

// TCON
SBIT(IT0,	0x88, 0);
SBIT(IE0,	0x88, 1);
SBIT(IT1,	0x88, 2);
SBIT(IE1,	0x88, 3);
SBIT(TR0,	0x88, 4);
SBIT(TF0,	0x88, 5);
SBIT(TR1,	0x88, 6);
SBIT(TF1,	0x88, 7);

// IEN0
SBIT(EX0,	0xA8, 0);
SBIT(ET0,	0xA8, 1);
SBIT(EX1,	0xA8, 2);
SBIT(ET1,	0xA8, 3);
SBIT(ES,	0xA8, 4); 
SBIT(ET2,	0xA8, 5); 
SBIT(WDT,	0xA8, 6); 
SBIT(EA,	0xA8, 7);

// IEN1
SBIT(EX7,   0xB8, 0);
SBIT(EX2,   0xB8, 1);
SBIT(EX3,   0xB8, 2);
SBIT(EX4,   0xB8, 3);
SBIT(EX5,   0xB8, 4);
SBIT(EX6,   0xB8, 5);
SBIT(PS1,   0xB8, 6);

//SCON
SBIT(RI, 0x98, 0);
SBIT(TI, 0x98, 1);

//IRCON
SBIT(TF2,   0xC0, 6);
SBIT(EXF2,  0xC0, 7);
#endif
