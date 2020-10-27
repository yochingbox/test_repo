#**************************************************
# 	        Marvell Semiconductor  
#**************************************************
# SDCC (Small Device C Compiler) Makefile
# History:
#  Initial 10/13/2015 Heejeong Ryu 
#

.EXPORT_ALL_VARIABLES:: ;

INCDIR  = ./../inc
SRCDIR  = ./../src
TARGETDIR = ./../release
LIBDIR  =  

CODE_BASE	= 0x0000
CODE_SIZE	= 0xFFFF
XDATA_BASE  = 0x6200 
XDATA_SIZE	= 0x0600
REG_BASE 	= 0x0000

CC = sdcc
AS = sdas8051
#LIBS    = 
#LIBPATH = -L $(LIBDIR)

#DEBUG = --debug
AFLAGS = -l -s
CFLAGS = -I$(INCDIR) --model-small -mmcs51 --std-c99 --stack-auto --iram-size 256 --xram-size $(XDATA_SIZE) --code-size $(CODE_SIZE) --opt-code-speed --no-xinit-opt $(DEF) -D XDATA_BASE=$(XDATA_BASE)
LFLAGS = $(LIBPATH) $(LIBS) --code-loc $(CODE_BASE) --data-loc 0x18 --xram-loc $(XDATA_BASE) $(DEBUG)

ALLRELS += global.rel
ALLRELS += interrupt.rel
ALLRELS += cpu.rel
ALLRELS += cal_top.rel
ALLRELS += ring_pll_cal.rel
ALLRELS += pll_cal.rel
ALLRELS += pll_temp_cal.rel
ALLRELS += pll_dcc_cal.rel
ALLRELS += process_cal.rel
ALLRELS += align90_cal.rel
ALLRELS += phase_adaptation.rel
ALLRELS += phase_train.rel
ALLRELS += eom.rel
ALLRELS += eom_align_cal.rel
ALLRELS += dcc_cal.rel
ALLRELS += imp_cal.rel
ALLRELS += sampler_cal.rel
ALLRELS += txdetect_cal.rel
ALLRELS += squelch_cal.rel
ALLRELS += dll_cal.rel
ALLRELS += vdd_cal.rel
ALLRELS += spd_ctrl.rel
ALLRELS += power.rel
ALLRELS += power_sata.rel
ALLRELS += power_pcie.rel
ALLRELS += cds.rel
ALLRELS += dfe_adaptation.rel
ALLRELS += rx_init.rel
ALLRELS += trx_train.rel
ALLRELS += tx_train.rel
ALLRELS += rx_train.rel
ALLRELS += train_if.rel
ALLRELS += misc.rel
ALLRELS += uart.rel
ALLRELS += printf.rel

.PHONY: all target

all: target

target: main.hex

main.hex: main.rel $(ALLRELS)
	$(CC) --verbose $(CFLAGS) $(LFLAGS) $^
	packihx main.ihx > $(TARGETDIR)/main.hex

test : test_main.hex

test_main.hex: test_main.rel $(ALLRELS)
	$(CC) --verbose $(CFLAGS) $(LFLAGS) $^
	packihx test_main.ihx > $(TARGETDIR)/main.hex

%.hex: %.ihx
	packihx $^ > $@

%.ihx: %.rel
	$(CC) --verbose $@ $(LFLAGS) $^

%.rel: $(SRCDIR)/%.c
	$(CC) --verbose $@ $(CFLAGS) -c $^

clean:
	rm -rf *.hex *.ihx *.lnk *.lst *.map *.rel *.rst *.sym *.mem *.asm *.lk
	rm -rf $(TARGET).hex
