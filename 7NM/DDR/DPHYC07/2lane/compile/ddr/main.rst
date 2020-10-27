                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.0.0 #6037 (May 26 2011) (Linux)
                              4 ; This file was generated Mon Jul 13 14:41:29 2020
                              5 ;--------------------------------------------------------
                              6 	.module main
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _delay
                             14 	.globl _delay_us
                             15 	.globl _TF2
                             16 	.globl _TI
                             17 	.globl _RI
                             18 	.globl _EX12
                             19 	.globl _EX11
                             20 	.globl _EX10
                             21 	.globl _EX9
                             22 	.globl _EX8
                             23 	.globl _ES1
                             24 	.globl _PS1
                             25 	.globl _EX6
                             26 	.globl _EX5
                             27 	.globl _EX4
                             28 	.globl _EX3
                             29 	.globl _EX2
                             30 	.globl _EX7
                             31 	.globl _EA
                             32 	.globl _WDT
                             33 	.globl _ET2
                             34 	.globl _ES
                             35 	.globl _ET1
                             36 	.globl _EX1
                             37 	.globl _ET0
                             38 	.globl _EX0
                             39 	.globl _TF1
                             40 	.globl _TR1
                             41 	.globl _TF0
                             42 	.globl _TR0
                             43 	.globl _IE1
                             44 	.globl _IT1
                             45 	.globl _IE0
                             46 	.globl _IT0
                             47 	.globl _P3_7
                             48 	.globl _P3_6
                             49 	.globl _P3_5
                             50 	.globl _P3_4
                             51 	.globl _P3_3
                             52 	.globl _P3_2
                             53 	.globl _P3_1
                             54 	.globl _P3_0
                             55 	.globl _P2_7
                             56 	.globl _P2_6
                             57 	.globl _P2_5
                             58 	.globl _P2_4
                             59 	.globl _P2_3
                             60 	.globl _P2_2
                             61 	.globl _P2_1
                             62 	.globl _P2_0
                             63 	.globl _P1_7
                             64 	.globl _P1_6
                             65 	.globl _P1_5
                             66 	.globl _P1_4
                             67 	.globl _P1_3
                             68 	.globl _P1_2
                             69 	.globl _P1_1
                             70 	.globl _P1_0
                             71 	.globl _P0_7
                             72 	.globl _P0_6
                             73 	.globl _P0_5
                             74 	.globl _P0_4
                             75 	.globl _P0_3
                             76 	.globl _P0_2
                             77 	.globl _P0_1
                             78 	.globl _P0_0
                             79 	.globl _DMAC
                             80 	.globl _DMATA
                             81 	.globl _DMASA
                             82 	.globl _TMR2
                             83 	.globl _TMR1
                             84 	.globl _TMR0
                             85 	.globl _SRST
                             86 	.globl _B
                             87 	.globl _EIE
                             88 	.globl _ACC
                             89 	.globl _ADCON
                             90 	.globl _PSW
                             91 	.globl _TH2
                             92 	.globl _TL2
                             93 	.globl _RCAP2H
                             94 	.globl _RCAP2L
                             95 	.globl _T2CON
                             96 	.globl _CCEN
                             97 	.globl _IRCON
                             98 	.globl _S0RELH
                             99 	.globl _IP1
                            100 	.globl _IEN1
                            101 	.globl _DMAM1
                            102 	.globl _DMAM0
                            103 	.globl _DMASEL
                            104 	.globl _DMAC2
                            105 	.globl _DMAC1
                            106 	.globl _DMAC0
                            107 	.globl _P3
                            108 	.globl _S0RELL
                            109 	.globl _IP0
                            110 	.globl _IEN0
                            111 	.globl _DMAT2
                            112 	.globl _DMAT1
                            113 	.globl _DMAT0
                            114 	.globl _DMAS2
                            115 	.globl _DMAS1
                            116 	.globl _DMAS0
                            117 	.globl _P2
                            118 	.globl _IEN2
                            119 	.globl _SBUF
                            120 	.globl _SCON
                            121 	.globl _PSBANK
                            122 	.globl _DPS
                            123 	.globl _P1
                            124 	.globl _CKCON
                            125 	.globl _TH1
                            126 	.globl _TH0
                            127 	.globl _TL1
                            128 	.globl _TL0
                            129 	.globl _TMOD
                            130 	.globl _TCON
                            131 	.globl _PCON
                            132 	.globl _WDTREL
                            133 	.globl _DPH
                            134 	.globl _DPL
                            135 	.globl _P0
                            136 	.globl _CLKTIMER
                            137 	.globl _CSR
                            138 	.globl _MCU
                            139 	.globl _test_tog
                            140 	.globl __sdcc_external_startup
                            141 ;--------------------------------------------------------
                            142 ; special function registers
                            143 ;--------------------------------------------------------
                            144 	.area RSEG    (ABS,DATA)
   0000                     145 	.org 0x0000
                    0080    146 _P0	=	0x0080
                    0082    147 _DPL	=	0x0082
                    0083    148 _DPH	=	0x0083
                    0086    149 _WDTREL	=	0x0086
                    0087    150 _PCON	=	0x0087
                    0088    151 _TCON	=	0x0088
                    0089    152 _TMOD	=	0x0089
                    008A    153 _TL0	=	0x008a
                    008B    154 _TL1	=	0x008b
                    008C    155 _TH0	=	0x008c
                    008D    156 _TH1	=	0x008d
                    008E    157 _CKCON	=	0x008e
                    0090    158 _P1	=	0x0090
                    0092    159 _DPS	=	0x0092
                    0094    160 _PSBANK	=	0x0094
                    0098    161 _SCON	=	0x0098
                    0099    162 _SBUF	=	0x0099
                    009A    163 _IEN2	=	0x009a
                    00A0    164 _P2	=	0x00a0
                    00A1    165 _DMAS0	=	0x00a1
                    00A2    166 _DMAS1	=	0x00a2
                    00A3    167 _DMAS2	=	0x00a3
                    00A4    168 _DMAT0	=	0x00a4
                    00A5    169 _DMAT1	=	0x00a5
                    00A6    170 _DMAT2	=	0x00a6
                    00A8    171 _IEN0	=	0x00a8
                    00A9    172 _IP0	=	0x00a9
                    00AA    173 _S0RELL	=	0x00aa
                    00B0    174 _P3	=	0x00b0
                    00B1    175 _DMAC0	=	0x00b1
                    00B2    176 _DMAC1	=	0x00b2
                    00B3    177 _DMAC2	=	0x00b3
                    00B4    178 _DMASEL	=	0x00b4
                    00B5    179 _DMAM0	=	0x00b5
                    00B6    180 _DMAM1	=	0x00b6
                    00B8    181 _IEN1	=	0x00b8
                    00B9    182 _IP1	=	0x00b9
                    00BA    183 _S0RELH	=	0x00ba
                    00C0    184 _IRCON	=	0x00c0
                    00C1    185 _CCEN	=	0x00c1
                    00C8    186 _T2CON	=	0x00c8
                    00CA    187 _RCAP2L	=	0x00ca
                    00CB    188 _RCAP2H	=	0x00cb
                    00CC    189 _TL2	=	0x00cc
                    00CD    190 _TH2	=	0x00cd
                    00D0    191 _PSW	=	0x00d0
                    00D8    192 _ADCON	=	0x00d8
                    00E0    193 _ACC	=	0x00e0
                    00E8    194 _EIE	=	0x00e8
                    00F0    195 _B	=	0x00f0
                    00F7    196 _SRST	=	0x00f7
                    8C8A    197 _TMR0	=	0x8c8a
                    8D8B    198 _TMR1	=	0x8d8b
                    CDCC    199 _TMR2	=	0xcdcc
                    A2A1    200 _DMASA	=	0xa2a1
                    A5A4    201 _DMATA	=	0xa5a4
                    B2B1    202 _DMAC	=	0xb2b1
                            203 ;--------------------------------------------------------
                            204 ; special function bits
                            205 ;--------------------------------------------------------
                            206 	.area RSEG    (ABS,DATA)
   0000                     207 	.org 0x0000
                    0080    208 _P0_0	=	0x0080
                    0081    209 _P0_1	=	0x0081
                    0082    210 _P0_2	=	0x0082
                    0083    211 _P0_3	=	0x0083
                    0084    212 _P0_4	=	0x0084
                    0085    213 _P0_5	=	0x0085
                    0086    214 _P0_6	=	0x0086
                    0087    215 _P0_7	=	0x0087
                    0090    216 _P1_0	=	0x0090
                    0091    217 _P1_1	=	0x0091
                    0092    218 _P1_2	=	0x0092
                    0093    219 _P1_3	=	0x0093
                    0094    220 _P1_4	=	0x0094
                    0095    221 _P1_5	=	0x0095
                    0096    222 _P1_6	=	0x0096
                    0097    223 _P1_7	=	0x0097
                    00A0    224 _P2_0	=	0x00a0
                    00A1    225 _P2_1	=	0x00a1
                    00A2    226 _P2_2	=	0x00a2
                    00A3    227 _P2_3	=	0x00a3
                    00A4    228 _P2_4	=	0x00a4
                    00A5    229 _P2_5	=	0x00a5
                    00A6    230 _P2_6	=	0x00a6
                    00A7    231 _P2_7	=	0x00a7
                    00B0    232 _P3_0	=	0x00b0
                    00B1    233 _P3_1	=	0x00b1
                    00B2    234 _P3_2	=	0x00b2
                    00B3    235 _P3_3	=	0x00b3
                    00B4    236 _P3_4	=	0x00b4
                    00B5    237 _P3_5	=	0x00b5
                    00B6    238 _P3_6	=	0x00b6
                    00B7    239 _P3_7	=	0x00b7
                    0088    240 _IT0	=	0x0088
                    0089    241 _IE0	=	0x0089
                    008A    242 _IT1	=	0x008a
                    008B    243 _IE1	=	0x008b
                    008C    244 _TR0	=	0x008c
                    008D    245 _TF0	=	0x008d
                    008E    246 _TR1	=	0x008e
                    008F    247 _TF1	=	0x008f
                    00A8    248 _EX0	=	0x00a8
                    00A9    249 _ET0	=	0x00a9
                    00AA    250 _EX1	=	0x00aa
                    00AB    251 _ET1	=	0x00ab
                    00AC    252 _ES	=	0x00ac
                    00AD    253 _ET2	=	0x00ad
                    00AE    254 _WDT	=	0x00ae
                    00AF    255 _EA	=	0x00af
                    00B8    256 _EX7	=	0x00b8
                    00B9    257 _EX2	=	0x00b9
                    00BA    258 _EX3	=	0x00ba
                    00BB    259 _EX4	=	0x00bb
                    00BC    260 _EX5	=	0x00bc
                    00BD    261 _EX6	=	0x00bd
                    00BE    262 _PS1	=	0x00be
                    009A    263 _ES1	=	0x009a
                    009B    264 _EX8	=	0x009b
                    009C    265 _EX9	=	0x009c
                    009D    266 _EX10	=	0x009d
                    009E    267 _EX11	=	0x009e
                    009F    268 _EX12	=	0x009f
                    0098    269 _RI	=	0x0098
                    0099    270 _TI	=	0x0099
                    00C6    271 _TF2	=	0x00c6
                            272 ;--------------------------------------------------------
                            273 ; overlayable register banks
                            274 ;--------------------------------------------------------
                            275 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     276 	.ds 8
                            277 ;--------------------------------------------------------
                            278 ; internal ram data
                            279 ;--------------------------------------------------------
                            280 	.area DSEG    (DATA)
   0018                     281 _test_tog::
   0018                     282 	.ds 1
                            283 ;--------------------------------------------------------
                            284 ; overlayable items in internal ram 
                            285 ;--------------------------------------------------------
                            286 	.area OSEG    (OVR,DATA)
                            287 ;--------------------------------------------------------
                            288 ; Stack segment in internal ram 
                            289 ;--------------------------------------------------------
                            290 	.area	SSEG	(DATA)
   0019                     291 __start__stack:
   0019                     292 	.ds	1
                            293 
                            294 ;--------------------------------------------------------
                            295 ; indirectly addressable internal ram data
                            296 ;--------------------------------------------------------
                            297 	.area ISEG    (DATA)
                            298 ;--------------------------------------------------------
                            299 ; absolute internal ram data
                            300 ;--------------------------------------------------------
                            301 	.area IABS    (ABS,DATA)
                            302 	.area IABS    (ABS,DATA)
                            303 ;--------------------------------------------------------
                            304 ; bit data
                            305 ;--------------------------------------------------------
                            306 	.area BSEG    (BIT)
                            307 ;--------------------------------------------------------
                            308 ; paged external ram data
                            309 ;--------------------------------------------------------
                            310 	.area PSEG    (PAG,XDATA)
                            311 ;--------------------------------------------------------
                            312 ; external ram data
                            313 ;--------------------------------------------------------
                            314 	.area XSEG    (XDATA)
                    0000    315 _MCU	=	0x0000
                    0004    316 _CSR	=	0x0004
                    0008    317 _CLKTIMER	=	0x0008
                            318 ;--------------------------------------------------------
                            319 ; absolute external ram data
                            320 ;--------------------------------------------------------
                            321 	.area XABS    (ABS,XDATA)
                            322 ;--------------------------------------------------------
                            323 ; external initialized ram data
                            324 ;--------------------------------------------------------
                            325 	.area HOME    (CODE)
                            326 	.area GSINIT0 (CODE)
                            327 	.area GSINIT1 (CODE)
                            328 	.area GSINIT2 (CODE)
                            329 	.area GSINIT3 (CODE)
                            330 	.area GSINIT4 (CODE)
                            331 	.area GSINIT5 (CODE)
                            332 	.area GSINIT  (CODE)
                            333 	.area GSFINAL (CODE)
                            334 	.area CSEG    (CODE)
                            335 ;--------------------------------------------------------
                            336 ; interrupt vector 
                            337 ;--------------------------------------------------------
                            338 	.area HOME    (CODE)
   0000                     339 __interrupt_vect:
   0000 02 00 08            340 	ljmp	__sdcc_gsinit_startup
                            341 ;--------------------------------------------------------
                            342 ; global & static initialisations
                            343 ;--------------------------------------------------------
                            344 	.area HOME    (CODE)
                            345 	.area GSINIT  (CODE)
                            346 	.area GSFINAL (CODE)
                            347 	.area GSINIT  (CODE)
                            348 	.globl __sdcc_gsinit_startup
                            349 	.globl __sdcc_program_startup
                            350 	.globl __start__stack
                            351 	.globl __mcs51_genRAMCLEAR
                            352 ;	../../shared/src/main.c:27: int8_t test_tog = 1;
   001B 75 18 01            353 	mov	_test_tog,#0x01
                            354 	.area GSFINAL (CODE)
   001E 02 00 03            355 	ljmp	__sdcc_program_startup
                            356 ;--------------------------------------------------------
                            357 ; Home
                            358 ;--------------------------------------------------------
                            359 	.area HOME    (CODE)
                            360 	.area HOME    (CODE)
   0003                     361 __sdcc_program_startup:
   0003 12 00 68            362 	lcall	_main
                            363 ;	return from main will lock up
   0006 80 FE               364 	sjmp .
                            365 ;--------------------------------------------------------
                            366 ; code
                            367 ;--------------------------------------------------------
                            368 	.area CSEG    (CODE)
                            369 ;------------------------------------------------------------
                            370 ;Allocation info for local variables in function 'delay_us'
                            371 ;------------------------------------------------------------
                            372 ;t                         Allocated to registers r2 r3 
                            373 ;------------------------------------------------------------
                            374 ;	../../shared/src/main.c:29: void delay_us(int16_t t)
                            375 ;	-----------------------------------------
                            376 ;	 function delay_us
                            377 ;	-----------------------------------------
   0021                     378 _delay_us:
                    0002    379 	ar2 = 0x02
                    0003    380 	ar3 = 0x03
                    0004    381 	ar4 = 0x04
                    0005    382 	ar5 = 0x05
                    0006    383 	ar6 = 0x06
                    0007    384 	ar7 = 0x07
                    0000    385 	ar0 = 0x00
                    0001    386 	ar1 = 0x01
   0021 AA 82               387 	mov	r2,dpl
   0023 AB 83               388 	mov	r3,dph
   0025                     389 00104$:
                            390 ;	../../shared/src/main.c:31: for(; t > 0; t--)
   0025 C3                  391 	clr	c
   0026 E4                  392 	clr	a
   0027 9A                  393 	subb	a,r2
   0028 74 80               394 	mov	a,#(0x00 ^ 0x80)
   002A 8B F0               395 	mov	b,r3
   002C 63 F0 80            396 	xrl	b,#0x80
   002F 95 F0               397 	subb	a,b
   0031 50 16               398 	jnc	00108$
                            399 ;	../../shared/src/main.c:33: TH0 = 0xff;
   0033 75 8C FF            400 	mov	_TH0,#0xFF
                            401 ;	../../shared/src/main.c:34: TL0 = 0xa0;
   0036 75 8A A0            402 	mov	_TL0,#0xA0
                            403 ;	../../shared/src/main.c:36: TR0 = 1;
   0039 D2 8C               404 	setb	_TR0
                            405 ;	../../shared/src/main.c:38: while(TF0 != 1) ;
   003B                     406 00101$:
   003B 30 8D FD            407 	jnb	_TF0,00101$
                            408 ;	../../shared/src/main.c:40: TR0 = 0;
   003E C2 8C               409 	clr	_TR0
                            410 ;	../../shared/src/main.c:41: TF0 = 0;
   0040 C2 8D               411 	clr	_TF0
                            412 ;	../../shared/src/main.c:31: for(; t > 0; t--)
   0042 1A                  413 	dec	r2
   0043 BA FF DF            414 	cjne	r2,#0xff,00104$
   0046 1B                  415 	dec	r3
   0047 80 DC               416 	sjmp	00104$
   0049                     417 00108$:
   0049 22                  418 	ret
                            419 ;------------------------------------------------------------
                            420 ;Allocation info for local variables in function 'delay'
                            421 ;------------------------------------------------------------
                            422 ;i                         Allocated to registers r2 r3 
                            423 ;------------------------------------------------------------
                            424 ;	../../shared/src/main.c:45: void delay(void)
                            425 ;	-----------------------------------------
                            426 ;	 function delay
                            427 ;	-----------------------------------------
   004A                     428 _delay:
                            429 ;	../../shared/src/main.c:48: for(i = 0; i < 200; i++)
   004A 7A C8               430 	mov	r2,#0xC8
   004C 7B 00               431 	mov	r3,#0x00
   004E                     432 00103$:
                            433 ;	../../shared/src/main.c:60: __endasm;
                            434 	
   004E 00                  435 	     nop
   004F 00                  436 	     nop
   0050 00                  437 	     nop
   0051 00                  438 	     nop
   0052 00                  439 	     nop
   0053 00                  440 	     nop
   0054 00                  441 	     nop
   0055 00                  442 	     nop
   0056 00                  443 	     nop
                            444 	 
   0057 1A                  445 	dec	r2
   0058 BA FF 01            446 	cjne	r2,#0xff,00109$
   005B 1B                  447 	dec	r3
   005C                     448 00109$:
                            449 ;	../../shared/src/main.c:48: for(i = 0; i < 200; i++)
   005C EA                  450 	mov	a,r2
   005D 4B                  451 	orl	a,r3
   005E 60 03               452 	jz	00110$
   0060 02 00 4E            453 	ljmp	00103$
   0063                     454 00110$:
   0063 22                  455 	ret
                            456 ;------------------------------------------------------------
                            457 ;Allocation info for local variables in function '_sdcc_external_startup'
                            458 ;------------------------------------------------------------
                            459 ;------------------------------------------------------------
                            460 ;	../../shared/src/main.c:86: _sdcc_external_startup() {
                            461 ;	-----------------------------------------
                            462 ;	 function _sdcc_external_startup
                            463 ;	-----------------------------------------
   0064                     464 __sdcc_external_startup:
                            465 ;	../../shared/src/main.c:87: return(1);
   0064 90 00 01            466 	mov	dptr,#0x0001
   0067 22                  467 	ret
                            468 ;------------------------------------------------------------
                            469 ;Allocation info for local variables in function 'main'
                            470 ;------------------------------------------------------------
                            471 ;------------------------------------------------------------
                            472 ;	../../shared/src/main.c:99: void main(){
                            473 ;	-----------------------------------------
                            474 ;	 function main
                            475 ;	-----------------------------------------
   0068                     476 _main:
                            477 ;	../../shared/src/main.c:100: CKCON = 0x00; 
   0068 75 8E 00            478 	mov	_CKCON,#0x00
                            479 ;	../../shared/src/main.c:102: EA = 0;
   006B C2 AF               480 	clr	_EA
                            481 ;	../../shared/src/main.c:119: cpu_init();
   006D 12 00 9D            482 	lcall	_cpu_init
                            483 ;	../../shared/src/main.c:183: EA = 1;
   0070 D2 AF               484 	setb	_EA
                            485 ;	../../shared/src/main.c:191: while(1){
   0072                     486 00105$:
                            487 ;	../../shared/src/main.c:324: if(test_tog == 1)
   0072 74 01               488 	mov	a,#0x01
   0074 B5 18 10            489 	cjne	a,_test_tog,00102$
                            490 ;	../../shared/src/main.c:326: reg_R0 = 1;
   0077 90 00 00            491 	mov	dptr,#_MCU
   007A 74 01               492 	mov	a,#0x01
   007C F0                  493 	movx	@dptr,a
                            494 ;	../../shared/src/main.c:327: reg_R8 = 0;
   007D 90 00 01            495 	mov	dptr,#(_MCU + 0x0001)
   0080 E4                  496 	clr	a
   0081 F0                  497 	movx	@dptr,a
                            498 ;	../../shared/src/main.c:329: test_tog = 0;
   0082 75 18 00            499 	mov	_test_tog,#0x00
   0085 80 0E               500 	sjmp	00103$
   0087                     501 00102$:
                            502 ;	../../shared/src/main.c:333: reg_R0 = 0;
   0087 90 00 00            503 	mov	dptr,#_MCU
   008A E4                  504 	clr	a
   008B F0                  505 	movx	@dptr,a
                            506 ;	../../shared/src/main.c:334: reg_R8 = 1;
   008C 90 00 01            507 	mov	dptr,#(_MCU + 0x0001)
   008F 74 01               508 	mov	a,#0x01
   0091 F0                  509 	movx	@dptr,a
                            510 ;	../../shared/src/main.c:335: test_tog = 1;
   0092 75 18 01            511 	mov	_test_tog,#0x01
   0095                     512 00103$:
                            513 ;	../../shared/src/main.c:339: delay_us(2); 
   0095 90 00 02            514 	mov	dptr,#0x0002
   0098 12 00 21            515 	lcall	_delay_us
   009B 80 D5               516 	sjmp	00105$
                            517 	.area CSEG    (CODE)
                            518 	.area CONST   (CODE)
                            519 	.area CABS    (ABS,CODE)
   0200                     520 	.org 0x0200
   0200                     521 _gaFwRev:
   0200 01                  522 	.db #0x01	; 1
   0201 23                  523 	.db #0x23	; 35
   0202 45                  524 	.db #0x45	; 69	E
   0203 67                  525 	.db #0x67	; 103	g
   0204                     526 	.org 0x0204
   0204                     527 _gnFwPhyMode:
   0204 04                  528 	.db #0x04	; 4
