#**************************************************
# 	        Marvell Semiconductor  
#**************************************************
# SDCC (Small Device C Compiler) Makefile
# History:
#  Initial 10/13/2015 Heejeong Ryu 
#

.EXPORT_ALL_VARIABLES:: ;
INCDIR  = ./../inc
SRCDIR  = ./../../shared/src
SHARED_INCDIR = ./../../shared/inc
SHARED_SRCDIR  = ./../src
OBJDIR  := .
#target_pcie clean_pcie : OBJDIR := $(OBJDIR)/pcie
#target_sas clean_sas : OBJDIR := $(OBJDIR)/sas
#target_serdes clean_serdes: OBJDIR := $(OBJDIR)/serdes
target_ddr clean_ddr : OBJDIR := $(OBJDIR)/ddr
target : OBJDIR := $(OBJDIR)/comphy
TARGETDIR := ./../release
#target_pcie clean_pcie : TARGETDIR := $(TARGETDIR)/pcie
#target_sas clean_sas : TARGETDIR := $(TARGETDIR)/sas
#target_serdes clean_serdes : TARGETDIR := $(TARGETDIR)/serdes
target_ddr clean_ddr : TARGETDIR := $(TARGETDIR)/ddr
target: TARGETDIR := $(TARGETDIR)/comphy
#SRC_FILES = $(sort $(wildcard $(SRCDIR)/*.c $(SHARED_SRCDIR)/*.c))
SRC_FILES =  $(SRCDIR)/main.c $(SRCDIR)/cpu.c 
OBJ_FILES = $(addprefix $(OBJDIR)/, $(notdir $(SRC_FILES:.c=.rel)))
# For test_c test firmware
TESTDIR = ./../../shared/test_c
TEST_FILES = $(wildcard $(TESTDIR)/*.c)
TEST_TARGETS = $(notdir $(TEST_FILES:.c=))

LIBDIR  =  

CODE_BASE	= 0x0000
target target_ddr $(TEST_TARGETS): CODE_SIZE	= 0x1FFFF
target_64k : CODE_SIZE = 0xFFFF
XDATA_BASE  = 0x6600 
XDATA_SIZE	= 0x0200
REG_BASE 	= 0x0000

CC = sdcc
AS = sdas8051
#LIBS    = 
#LIBPATH = -L $(LIBDIR)

#DEBUG = --debug
AFLAGS = -l -s
CFLAGS_CMN = -I$(INCDIR) -I$(SHARED_INCDIR) --model-small -mmcs51 --std-c99 --stack-auto --iram-size 256 --xram-size $(XDATA_SIZE) --code-size $(CODE_SIZE) --opt-code-speed --no-xinit-opt $(DEF) -D XDATA_BASE=$(XDATA_BASE)
LFLAGS_CMN = $(LIBPATH) $(LIBS) $(LDFLAGS) --code-loc $(CODE_BASE) --data-loc 0x18 --xram-loc $(XDATA_BASE) $(DEBUG)
target_64k : CFLAGS = $(CFLAGS_CMN)
target_64k : LFLAGS = $(LFLAGS_CMN)
target $(TEST_TARGETS): CFLAGS = -DUSE_BANKING $(CFLAGS_CMN)
#target_pcie : CFLAGS = -DUSE_BANKING -D_PCIE_USB_BUILD $(CFLAGS_CMN)
#target_sas : CFLAGS = -DUSE_BANKING -D_SATA_SERDES_BUILD $(CFLAGS_CMN)
#target_serdes : CFLAGS = -DUSE_BANKING -D_SATA_SERDES_BUILD $(CFLAGS_CMN)
target_ddr : CFLAGS = -DUSE_BANKING  $(CFLAGS_CMN)
#target target_ddr $(TEST_TARGETS): LFLAGS = -Wl-bCSEG=0x000000 -Wl-bCONST=0x00000 -Wl-bBANK1=0x018000 -Wl-bBANK2=0x028000 -Wl-r $(LFLAGS_CMN)
target target_ddr $(TEST_TARGETS): LFLAGS = -Wl-bCSEG=0x000000 -Wl-bCONST=0x00000 -Wl-r $(LFLAGS_CMN)

.PHONY: all target target_64k $(TEST_TARGETS)

#target target_pcie target_sas target_serdes: main.hex
target target_ddr: main.hex
	
main.hex: $(OBJ_FILES)
	$(CC) --verbose $(CFLAGS) $(LFLAGS) -o $(OBJDIR)/main.ihx $(OBJ_FILES)
	packihx $(OBJDIR)/main.ihx > $(TARGETDIR)/main.hex

target_64k : main_64k.hex
main_64k.hex: $(OBJ_FILES) 
	$(CC) --verbose $(CFLAGS) $(LFLAGS) -o $(OBJDIR)/main.ihx $^
	packihx $(OBJDIR)/main.ihx > $(TARGETDIR)/main.hex

#replace the original main.rel with test_c compile result
$(TEST_TARGETS): % : %.hex
	$(CC) --verbose $(CFLAGS) -c -o $(OBJDIR)/main.rel $(TESTDIR)/$@.c
	$(CC) --verbose $(CFLAGS) $(LFLAGS) -o $(OBJDIR)/$@.ihx $(OBJ_FILES) $^
	packihx $(OBJDIR)/$@.ihx > $(TARGETDIR)/$@.hex
$(addsuffix .hex, $(TEST_TARGETS) ) : %.hex : $(OBJ_FILES)
	
#Shared by all targets - compile only
$(OBJDIR)/%.rel: $(SRCDIR)/%.c
	$(CC) --verbose $(CFLAGS) -c -o $(OBJDIR)/$@ $^
$(OBJDIR)/%.rel: $(SHARED_SRCDIR)/%.c
	$(CC) --verbose $(CFLAGS) -c -o $(OBJDIR)/$@ $^


#clean: clean_pcie clean_sas clean_serdes
#clean_pcie clean_sas clean_serdes:
clean: clean_ddr
clean_ddr:
	#rm -rf $(OBJDIR)/*.rel
	#rm -rf $(OBJDIR)/*.asm
	#rm -rf $(OBJDIR)/*.lst	
	#rm -rf $(OBJDIR)/*.sym
	rm -rf $(OBJDIR)/*
	#rm -rf $(TARGETDIR)/main.hex
	rm -rf $(TARGETDIR)/*

