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
OBJDIR  = .
TARGETDIR = ./../release/serdes
SRC_FILES = $(sort $(wildcard $(SRCDIR)/*.c $(SHARED_SRCDIR)/*.c))
OBJ_FILES = $(addprefix $(OBJDIR)/, $(notdir $(SRC_FILES:.c=.rel)))
# For test_c test firmware
TESTDIR = ./../../shared/test_c
TEST_FILES = $(wildcard $(TESTDIR)/*.c)
TEST_TARGETS = $(notdir $(TEST_FILES:.c=))

LIBDIR  =  

CODE_BASE	= 0x0000
target $(TEST_TARGETS): CODE_SIZE	= 0x1FFFF
target_64k : CODE_SIZE = 0xFFFF
XDATA_BASE  = 0x6300
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
target $(TEST_TARGETS): LFLAGS = -Wl-bCSEG=0x000000 -Wl-bBANK1=0x018000 -Wl-bBANK3=0x038000 -Wl-r $(LFLAGS_CMN)

.PHONY: all target target_64k $(TEST_TARGETS)

target: main.hex

main.hex: $(OBJ_FILES)
	$(CC) --verbose $(CFLAGS) $(LFLAGS) -o $(OBJDIR)/main.ihx $^
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
	$(CC) --verbose $(CFLAGS) -I$(INCDIR) -I$(SHARED_INCDIR) -c -o $@ $^
$(OBJDIR)/%.rel: $(SHARED_SRCDIR)/%.c
	$(CC) --verbose $(CFLAGS) -I$(INCDIR) -I$(SHARED_INCDIR) -c -o $@ $^


clean:
	rm -rf $(OBJDIR)/*.*
	rm -rf $(TARGETDIR)/main.hex
