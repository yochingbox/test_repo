                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Mon Jul 13 14:41:29 2020
                              5 ;--------------------------------------------------------
                              6 	.module cpu
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _TF2
                             13 	.globl _TI
                             14 	.globl _RI
                             15 	.globl _EX12
                             16 	.globl _EX11
                             17 	.globl _EX10
                             18 	.globl _EX9
                             19 	.globl _EX8
                             20 	.globl _ES1
                             21 	.globl _PS1
                             22 	.globl _EX6
                             23 	.globl _EX5
                             24 	.globl _EX4
                             25 	.globl _EX3
                             26 	.globl _EX2
                             27 	.globl _EX7
                             28 	.globl _EA
                             29 	.globl _WDT
                             30 	.globl _ET2
                             31 	.globl _ES
                             32 	.globl _ET1
                             33 	.globl _EX1
                             34 	.globl _ET0
                             35 	.globl _EX0
                             36 	.globl _TF1
                             37 	.globl _TR1
                             38 	.globl _TF0
                             39 	.globl _TR0
                             40 	.globl _IE1
                             41 	.globl _IT1
                             42 	.globl _IE0
                             43 	.globl _IT0
                             44 	.globl _P3_7
                             45 	.globl _P3_6
                             46 	.globl _P3_5
                             47 	.globl _P3_4
                             48 	.globl _P3_3
                             49 	.globl _P3_2
                             50 	.globl _P3_1
                             51 	.globl _P3_0
                             52 	.globl _P2_7
                             53 	.globl _P2_6
                             54 	.globl _P2_5
                             55 	.globl _P2_4
                             56 	.globl _P2_3
                             57 	.globl _P2_2
                             58 	.globl _P2_1
                             59 	.globl _P2_0
                             60 	.globl _P1_7
                             61 	.globl _P1_6
                             62 	.globl _P1_5
                             63 	.globl _P1_4
                             64 	.globl _P1_3
                             65 	.globl _P1_2
                             66 	.globl _P1_1
                             67 	.globl _P1_0
                             68 	.globl _P0_7
                             69 	.globl _P0_6
                             70 	.globl _P0_5
                             71 	.globl _P0_4
                             72 	.globl _P0_3
                             73 	.globl _P0_2
                             74 	.globl _P0_1
                             75 	.globl _P0_0
                             76 	.globl _DMAC
                             77 	.globl _DMATA
                             78 	.globl _DMASA
                             79 	.globl _TMR2
                             80 	.globl _TMR1
                             81 	.globl _TMR0
                             82 	.globl _SRST
                             83 	.globl _B
                             84 	.globl _EIE
                             85 	.globl _ACC
                             86 	.globl _ADCON
                             87 	.globl _PSW
                             88 	.globl _TH2
                             89 	.globl _TL2
                             90 	.globl _RCAP2H
                             91 	.globl _RCAP2L
                             92 	.globl _T2CON
                             93 	.globl _CCEN
                             94 	.globl _IRCON
                             95 	.globl _S0RELH
                             96 	.globl _IP1
                             97 	.globl _IEN1
                             98 	.globl _DMAM1
                             99 	.globl _DMAM0
                            100 	.globl _DMASEL
                            101 	.globl _DMAC2
                            102 	.globl _DMAC1
                            103 	.globl _DMAC0
                            104 	.globl _P3
                            105 	.globl _S0RELL
                            106 	.globl _IP0
                            107 	.globl _IEN0
                            108 	.globl _DMAT2
                            109 	.globl _DMAT1
                            110 	.globl _DMAT0
                            111 	.globl _DMAS2
                            112 	.globl _DMAS1
                            113 	.globl _DMAS0
                            114 	.globl _P2
                            115 	.globl _IEN2
                            116 	.globl _SBUF
                            117 	.globl _SCON
                            118 	.globl _PSBANK
                            119 	.globl _DPS
                            120 	.globl _P1
                            121 	.globl _CKCON
                            122 	.globl _TH1
                            123 	.globl _TH0
                            124 	.globl _TL1
                            125 	.globl _TL0
                            126 	.globl _TMOD
                            127 	.globl _TCON
                            128 	.globl _PCON
                            129 	.globl _WDTREL
                            130 	.globl _DPH
                            131 	.globl _DPL
                            132 	.globl _P0
                            133 	.globl _CLKTIMER
                            134 	.globl _CSR
                            135 	.globl _MCU
                            136 	.globl _cpu_init
                            137 ;--------------------------------------------------------
                            138 ; special function registers
                            139 ;--------------------------------------------------------
                            140 	.area RSEG    (ABS,DATA)
   0000                     141 	.org 0x0000
                    0080    142 _P0	=	0x0080
                    0082    143 _DPL	=	0x0082
                    0083    144 _DPH	=	0x0083
                    0086    145 _WDTREL	=	0x0086
                    0087    146 _PCON	=	0x0087
                    0088    147 _TCON	=	0x0088
                    0089    148 _TMOD	=	0x0089
                    008A    149 _TL0	=	0x008a
                    008B    150 _TL1	=	0x008b
                    008C    151 _TH0	=	0x008c
                    008D    152 _TH1	=	0x008d
                    008E    153 _CKCON	=	0x008e
                    0090    154 _P1	=	0x0090
                    0092    155 _DPS	=	0x0092
                    0094    156 _PSBANK	=	0x0094
                    0098    157 _SCON	=	0x0098
                    0099    158 _SBUF	=	0x0099
                    009A    159 _IEN2	=	0x009a
                    00A0    160 _P2	=	0x00a0
                    00A1    161 _DMAS0	=	0x00a1
                    00A2    162 _DMAS1	=	0x00a2
                    00A3    163 _DMAS2	=	0x00a3
                    00A4    164 _DMAT0	=	0x00a4
                    00A5    165 _DMAT1	=	0x00a5
                    00A6    166 _DMAT2	=	0x00a6
                    00A8    167 _IEN0	=	0x00a8
                    00A9    168 _IP0	=	0x00a9
                    00AA    169 _S0RELL	=	0x00aa
                    00B0    170 _P3	=	0x00b0
                    00B1    171 _DMAC0	=	0x00b1
                    00B2    172 _DMAC1	=	0x00b2
                    00B3    173 _DMAC2	=	0x00b3
                    00B4    174 _DMASEL	=	0x00b4
                    00B5    175 _DMAM0	=	0x00b5
                    00B6    176 _DMAM1	=	0x00b6
                    00B8    177 _IEN1	=	0x00b8
                    00B9    178 _IP1	=	0x00b9
                    00BA    179 _S0RELH	=	0x00ba
                    00C0    180 _IRCON	=	0x00c0
                    00C1    181 _CCEN	=	0x00c1
                    00C8    182 _T2CON	=	0x00c8
                    00CA    183 _RCAP2L	=	0x00ca
                    00CB    184 _RCAP2H	=	0x00cb
                    00CC    185 _TL2	=	0x00cc
                    00CD    186 _TH2	=	0x00cd
                    00D0    187 _PSW	=	0x00d0
                    00D8    188 _ADCON	=	0x00d8
                    00E0    189 _ACC	=	0x00e0
                    00E8    190 _EIE	=	0x00e8
                    00F0    191 _B	=	0x00f0
                    00F7    192 _SRST	=	0x00f7
                    8C8A    193 _TMR0	=	0x8c8a
                    8D8B    194 _TMR1	=	0x8d8b
                    CDCC    195 _TMR2	=	0xcdcc
                    A2A1    196 _DMASA	=	0xa2a1
                    A5A4    197 _DMATA	=	0xa5a4
                    B2B1    198 _DMAC	=	0xb2b1
                            199 ;--------------------------------------------------------
                            200 ; special function bits
                            201 ;--------------------------------------------------------
                            202 	.area RSEG    (ABS,DATA)
   0000                     203 	.org 0x0000
                    0080    204 _P0_0	=	0x0080
                    0081    205 _P0_1	=	0x0081
                    0082    206 _P0_2	=	0x0082
                    0083    207 _P0_3	=	0x0083
                    0084    208 _P0_4	=	0x0084
                    0085    209 _P0_5	=	0x0085
                    0086    210 _P0_6	=	0x0086
                    0087    211 _P0_7	=	0x0087
                    0090    212 _P1_0	=	0x0090
                    0091    213 _P1_1	=	0x0091
                    0092    214 _P1_2	=	0x0092
                    0093    215 _P1_3	=	0x0093
                    0094    216 _P1_4	=	0x0094
                    0095    217 _P1_5	=	0x0095
                    0096    218 _P1_6	=	0x0096
                    0097    219 _P1_7	=	0x0097
                    00A0    220 _P2_0	=	0x00a0
                    00A1    221 _P2_1	=	0x00a1
                    00A2    222 _P2_2	=	0x00a2
                    00A3    223 _P2_3	=	0x00a3
                    00A4    224 _P2_4	=	0x00a4
                    00A5    225 _P2_5	=	0x00a5
                    00A6    226 _P2_6	=	0x00a6
                    00A7    227 _P2_7	=	0x00a7
                    00B0    228 _P3_0	=	0x00b0
                    00B1    229 _P3_1	=	0x00b1
                    00B2    230 _P3_2	=	0x00b2
                    00B3    231 _P3_3	=	0x00b3
                    00B4    232 _P3_4	=	0x00b4
                    00B5    233 _P3_5	=	0x00b5
                    00B6    234 _P3_6	=	0x00b6
                    00B7    235 _P3_7	=	0x00b7
                    0088    236 _IT0	=	0x0088
                    0089    237 _IE0	=	0x0089
                    008A    238 _IT1	=	0x008a
                    008B    239 _IE1	=	0x008b
                    008C    240 _TR0	=	0x008c
                    008D    241 _TF0	=	0x008d
                    008E    242 _TR1	=	0x008e
                    008F    243 _TF1	=	0x008f
                    00A8    244 _EX0	=	0x00a8
                    00A9    245 _ET0	=	0x00a9
                    00AA    246 _EX1	=	0x00aa
                    00AB    247 _ET1	=	0x00ab
                    00AC    248 _ES	=	0x00ac
                    00AD    249 _ET2	=	0x00ad
                    00AE    250 _WDT	=	0x00ae
                    00AF    251 _EA	=	0x00af
                    00B8    252 _EX7	=	0x00b8
                    00B9    253 _EX2	=	0x00b9
                    00BA    254 _EX3	=	0x00ba
                    00BB    255 _EX4	=	0x00bb
                    00BC    256 _EX5	=	0x00bc
                    00BD    257 _EX6	=	0x00bd
                    00BE    258 _PS1	=	0x00be
                    009A    259 _ES1	=	0x009a
                    009B    260 _EX8	=	0x009b
                    009C    261 _EX9	=	0x009c
                    009D    262 _EX10	=	0x009d
                    009E    263 _EX11	=	0x009e
                    009F    264 _EX12	=	0x009f
                    0098    265 _RI	=	0x0098
                    0099    266 _TI	=	0x0099
                    00C6    267 _TF2	=	0x00c6
                            268 ;--------------------------------------------------------
                            269 ; overlayable register banks
                            270 ;--------------------------------------------------------
                            271 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     272 	.ds 8
                            273 ;--------------------------------------------------------
                            274 ; internal ram data
                            275 ;--------------------------------------------------------
                            276 	.area DSEG    (DATA)
                            277 ;--------------------------------------------------------
                            278 ; overlayable items in internal ram 
                            279 ;--------------------------------------------------------
                            280 	.area OSEG    (OVR,DATA)
                            281 ;--------------------------------------------------------
                            282 ; indirectly addressable internal ram data
                            283 ;--------------------------------------------------------
                            284 	.area ISEG    (DATA)
                            285 ;--------------------------------------------------------
                            286 ; absolute internal ram data
                            287 ;--------------------------------------------------------
                            288 	.area IABS    (ABS,DATA)
                            289 	.area IABS    (ABS,DATA)
                            290 ;--------------------------------------------------------
                            291 ; bit data
                            292 ;--------------------------------------------------------
                            293 	.area BSEG    (BIT)
                            294 ;--------------------------------------------------------
                            295 ; paged external ram data
                            296 ;--------------------------------------------------------
                            297 	.area PSEG    (PAG,XDATA)
                            298 ;--------------------------------------------------------
                            299 ; external ram data
                            300 ;--------------------------------------------------------
                            301 	.area XSEG    (XDATA)
                    0000    302 _MCU	=	0x0000
                    0004    303 _CSR	=	0x0004
                    0008    304 _CLKTIMER	=	0x0008
                            305 ;--------------------------------------------------------
                            306 ; absolute external ram data
                            307 ;--------------------------------------------------------
                            308 	.area XABS    (ABS,XDATA)
                            309 ;--------------------------------------------------------
                            310 ; external initialized ram data
                            311 ;--------------------------------------------------------
                            312 	.area HOME    (CODE)
                            313 	.area GSINIT0 (CODE)
                            314 	.area GSINIT1 (CODE)
                            315 	.area GSINIT2 (CODE)
                            316 	.area GSINIT3 (CODE)
                            317 	.area GSINIT4 (CODE)
                            318 	.area GSINIT5 (CODE)
                            319 	.area GSINIT  (CODE)
                            320 	.area GSFINAL (CODE)
                            321 	.area CSEG    (CODE)
                            322 ;--------------------------------------------------------
                            323 ; global & static initialisations
                            324 ;--------------------------------------------------------
                            325 	.area HOME    (CODE)
                            326 	.area GSINIT  (CODE)
                            327 	.area GSFINAL (CODE)
                            328 	.area GSINIT  (CODE)
                            329 ;--------------------------------------------------------
                            330 ; Home
                            331 ;--------------------------------------------------------
                            332 	.area HOME    (CODE)
                            333 	.area HOME    (CODE)
                            334 ;--------------------------------------------------------
                            335 ; code
                            336 ;--------------------------------------------------------
                            337 	.area CSEG    (CODE)
                            338 ;------------------------------------------------------------
                            339 ;Allocation info for local variables in function 'cpu_init'
                            340 ;------------------------------------------------------------
                            341 ;------------------------------------------------------------
                            342 ;	../../shared/src/cpu.c:11: void cpu_init(void) {
                            343 ;	-----------------------------------------
                            344 ;	 function cpu_init
                            345 ;	-----------------------------------------
   009D                     346 _cpu_init:
                    0002    347 	ar2 = 0x02
                    0003    348 	ar3 = 0x03
                    0004    349 	ar4 = 0x04
                    0005    350 	ar5 = 0x05
                    0006    351 	ar6 = 0x06
                    0007    352 	ar7 = 0x07
                    0000    353 	ar0 = 0x00
                    0001    354 	ar1 = 0x01
                            355 ;	../../shared/src/cpu.c:13: TCON  = 0x05; //EX0/EX1=FALL
   009D 75 88 05            356 	mov	_TCON,#0x05
                            357 ;	../../shared/src/cpu.c:14: TMOD  = 0x51; //mode1, ct1 
   00A0 75 89 51            358 	mov	_TMOD,#0x51
                            359 ;	../../shared/src/cpu.c:19: PCON = 0x88; //SMOD=1
   00A3 75 87 88            360 	mov	_PCON,#0x88
                            361 ;	../../shared/src/cpu.c:20: ADCON = 0x80;
   00A6 75 D8 80            362 	mov	_ADCON,#0x80
                            363 ;	../../shared/src/cpu.c:21: SCON = 0x50; //0101_0000  mode 1: 8-bit 1start/1Stop
   00A9 75 98 50            364 	mov	_SCON,#0x50
                            365 ;	../../shared/src/cpu.c:27: S0RELH = 0x03; //115200
   00AC 75 BA 03            366 	mov	_S0RELH,#0x03
                            367 ;	../../shared/src/cpu.c:28: S0RELL = 0x93; 
   00AF 75 AA 93            368 	mov	_S0RELL,#0x93
                            369 ;	../../shared/src/cpu.c:33: IP0   = 0x1c; 
   00B2 75 A9 1C            370 	mov	_IP0,#0x1C
                            371 ;	../../shared/src/cpu.c:34: IP1   = 0x06;
   00B5 75 B9 06            372 	mov	_IP1,#0x06
                            373 ;	../../shared/src/cpu.c:35: ET1   = 1;
   00B8 D2 AB               374 	setb	_ET1
                            375 ;	../../shared/src/cpu.c:36: ET2   = 1;
   00BA D2 AD               376 	setb	_ET2
                            377 ;	../../shared/src/cpu.c:37: EX0   = 1;
   00BC D2 A8               378 	setb	_EX0
                            379 ;	../../shared/src/cpu.c:38: EX1   = 1;
   00BE D2 AA               380 	setb	_EX1
                            381 ;	../../shared/src/cpu.c:39: ET0   = 0;
   00C0 C2 A9               382 	clr	_ET0
                            383 ;	../../shared/src/cpu.c:42: IEN1  = 0x3f; //EX6|5|4|3|2|7=1
   00C2 75 B8 3F            384 	mov	_IEN1,#0x3F
                            385 ;	../../shared/src/cpu.c:43: T2CON = 0x78;//x60; //EX2/EX3:RISE, (Timer2)
   00C5 75 C8 78            386 	mov	_T2CON,#0x78
                            387 ;	../../shared/src/cpu.c:44: IEN2  = 0x3e; //EX12|11|10|9|8=1
   00C8 75 9A 3E            388 	mov	_IEN2,#0x3E
   00CB 22                  389 	ret
                            390 	.area CSEG    (CODE)
                            391 	.area CSEG    (CODE)
                            392 	.area CABS    (ABS,CODE)
