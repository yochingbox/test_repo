#**************************************************
# 	        Marvell Semiconductor  
#**************************************************
# SDCC (Small Device C Compiler) Makefile
# History:
#  Initial 10/13/2015 Heejeong Ryu 
#

.EXPORT_ALL_VARIABLES:: ;
INCDIR  = ./../inc
INCDIR_PCIE  = ./../inc/pcie
INCDIR_SERDES = ./../inc/serdes
INCDIR_SAS  = ./../inc/sas
INCDIR_USB = ./../inc/usb
SRCDIR  = ./../../shared/src
SHARED_INCDIR = ./../../shared/inc
SHARED_SRCDIR  = ./../src
GCC_TEST_SRCDIR = ./../../gcc_tests
OBJDIR  := .
target_pcie clean_pcie : OBJDIR := $(OBJDIR)/pcie
target_sas clean_sas : OBJDIR := $(OBJDIR)/sas
target_serdes clean_serdes: OBJDIR := $(OBJDIR)/serdes
target_usb clean_usb: OBJDIR := $(OBJDIR)/usb
target : OBJDIR := $(OBJDIR)/comphy
target_gcc_tests clean_gcc_tests : GCC_TESTS_OBJDIR := $(OBJDIR)/gcc_tests
TARGETDIR := ./../release
target_pcie clean_pcie : TARGETDIR := $(TARGETDIR)/pcie
target_sas clean_sas : TARGETDIR := $(TARGETDIR)/sas
target_serdes clean_serdes : TARGETDIR := $(TARGETDIR)/serdes
target_usb clean_usb : TARGETDIR := $(TARGETDIR)/usb
target_gcc_tests clean_gcc_tests : TARGETDOR := $(TARGETDIR)/gcc_tests
target: TARGETDIR := $(TARGETDIR)/comphy
SRC_FILES = $(sort $(wildcard $(SRCDIR)/*.c $(SHARED_SRCDIR)/*.c))
GCC_TEST_SRC_FILES = $(sort $(wildcard $(GCC_TEST_SRCDIR)/*.cpp))
OBJ_FILES = $(addprefix $(OBJDIR)/, $(notdir $(SRC_FILES:.c=.rel)))
GCC_TEST_OBJ_FILES = $(addprefix $(OBJDIR)/, $(notdir $(GCC_TEST_SRC_FILES:.cpp=.o)))
# For test_c test firmware
TESTDIR = ./../../shared/test_c
TEST_FILES = $(wildcard $(TESTDIR)/*.c)
TEST_FILESF = $(notdir $(TEST_FILES))
TEST_TARGETS = $(basename $(TEST_FILESF))

LIBDIR  =  

CODE_BASE	= 0x0000
target target_pcie target_sas target_serdes target_usb $(TEST_TARGETS): CODE_SIZE	= 0x1FFFF
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
CFLAGS_CMN = -I$(INCDIR) -I$(SHARED_INCDIR) --model-small -mmcs51 --std-c99 --stack-auto --iram-size 256 --xram-size $(XDATA_SIZE) --code-size $(CODE_SIZE) --opt-code-speed --no-xinit-opt $(DEF) -D XDATA_BASE=$(XDATA_BASE) -D_56G_5NM
LFLAGS_CMN = $(LIBPATH) $(LIBS) $(LDFLAGS) --code-loc $(CODE_BASE) --data-loc 0x18 --xram-loc $(XDATA_BASE) $(DEBUG)
target_64k : CFLAGS = $(CFLAGS_CMN)
target_64k : LFLAGS = $(LFLAGS_CMN)
target_pcie : CFLAGS = -DUSE_BANKING -D_PCIE_BUILD $(CFLAGS_CMN) -I$(INCDIR_PCIE)
target_usb : CFLAGS = -DUSE_BANKING -D_USB_BUILD $(CFLAGS_CMN) -I$(INCDIR_USB)
target_sas : CFLAGS = -DUSE_BANKING -D_SAS_BUILD $(CFLAGS_CMN) -I$(INCDIR_SAS)
target_serdes : CFLAGS = -DUSE_BANKING -D_SERDES_BUILD $(CFLAGS_CMN) -I$(INCDIR_SERDES)
$(TEST_TARGETS): CFLAGS = -DUSE_BANKING -D_SERDES_BUILD $(CFLAGS_CMN) -I$(INCDIR_SERDES)

target target_pcie target_usb target_sas target_serdes $(TEST_TARGETS): LFLAGS = -Wl-bCSEG=0x000000 -Wl-bCONST=0x00000 -Wl-bBANK1=0x018000 -Wl-bBANK2=0x028000 -Wl-bBANK3=0x038000 -Wl-r $(LFLAGS_CMN)

.PHONY: all target target_64k $(TEST_TARGETS)

.PHONY: listall
listall:
	@echo $(TEST_TARGETS)
	@echo CFLAGE=$(CFLAGS)
	@echo $(GCC_TEST_SRC_FILES)

target target_pcie target_usb target_sas target_serdes: main.hex 

main.hex: $(OBJ_FILES)
	$(CC) --verbose $(CFLAGS) $(LFLAGS) -o $(OBJDIR)/main.ihx $(OBJ_FILES)
	packihx $(OBJDIR)/main.ihx > $(TARGETDIR)/main.hex

test_pll_sharing : $(GCC_TEST_SRC_FILES) ../../4lane/src/mcu_command.c ../../4lane/inc/mcu_command.h ../../4lane/inc/pll_state.h ../../4lane/src/pll_state.c ../../4lane/src/pll_sharing.c ../../4lane/inc/pll_sharing.h
	g++ -Wall -Wextra -std=c++11 -lpthread -fdiagnostics-show-option $(GCC_TEST_SRC_FILES) ../../4lane/src/mcu_command.c ../../4lane/src/pll_state.c ../../4lane/src/pll_sharing.c -I ../../gcc_tests -I ../inc -o test_pll_sharing

target_64k : main_64k.hex
main_64k.hex: $(OBJ_FILES) 
	$(CC) --verbose $(CFLAGS) $(LFLAGS) -o $(OBJDIR)/main.ihx $^
	packihx $(OBJDIR)/main.ihx > $(TARGETDIR)/main.hex

#replace the original main.rel with test_c compile result
$(TEST_TARGETS): % : %.hex
	$(CC) --verbose $(CFLAGS) -c -o $(OBJDIR)/main.rel $(TESTDIR)/$@.c
	$(CC) --verbose $(CFLAGS) $(LFLAGS) -o $(OBJDIR)/$@.ihx $(OBJ_FILES) $^
	packihx $(OBJDIR)/$@.ihx > $(TARGETDIR)/serdes/$@.hex
$(addsuffix .hex, $(TEST_TARGETS) ) : %.hex : $(OBJ_FILES)

gcc_tests : $(OBJ_FILES)
	
#Shared by all targets - compile only
$(OBJDIR)/%.rel: $(SRCDIR)/%.c
	$(CC) --verbose $(CFLAGS) -c -o $(OBJDIR)/$@ $^
$(OBJDIR)/%.rel: $(SHARED_SRCDIR)/%.c
	$(CC) --verbose $(CFLAGS) -c -o $(OBJDIR)/$@ $^


clean: clean_pcie clean_sas clean_serdes clean_usb
clean_pcie clean_sas clean_serdes clean_usb:
	rm -rf $(OBJDIR)/*.*
	rm -rf $(TARGETDIR)/main.hex

