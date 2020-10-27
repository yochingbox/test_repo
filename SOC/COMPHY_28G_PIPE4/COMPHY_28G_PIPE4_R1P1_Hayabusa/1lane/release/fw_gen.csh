#!/bin/tcsh -f
cd ../compile
make clean
if ( $#argv == 0 ) then
	make target_pcie -j
    make target_sas -j
    make target_serdes -j
	cd -
	chmod +w pcie/main.mem pcie/main_rom.mem
	chmod +w sas/main.mem sas/main_rom.mem
	chmod +w serdes/main.mem serdes/main_rom.mem
        rm -f sas/*.bin serdes/*.bin pcie/*.bin
	perl ihex2mem.pl pcie/main.hex
	perl mem2dat_cks.pl pcie/main.mem
	perl mem2dat.pl pcie/main_rom.mem
	perl ihex2mem.pl sas/main.hex
	perl mem2dat_cks.pl sas/main.mem
	perl mem2dat.pl sas/main_rom.mem
	perl ihex2mem.pl serdes/main.hex
	perl mem2dat_cks.pl serdes/main.mem
	perl mem2dat.pl serdes/main_rom.mem
	perl genlfwi.pl
else
	make $1
	cd -
	if $1 == target_64k then
		chmod +w main.hex
		perl ihex2mem.pl main.hex
		perl mem2dat.pl main.mem
	else
		chmod +w $1.mem
		perl ihex2mem.pl $1.hex
		perl mem2dat.pl $1.mem
	endif
endif

#cd -
#soscmd co -Nlock main.mem
#./checkout.csh main.mem
#chmod +w main.mem
#perl ihex2mem.pl main.hex
#perl mem2dat.pl main.mem
date

