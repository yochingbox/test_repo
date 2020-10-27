#!/bin/tcsh
cd ../compile
make clean
if ( $#argv == 0 ) then
	make target_serdes
    make target_pcie
    make target_sas
        make target_usb
	cd -
    chmod +w pcie/main.mem
    chmod +w sas/main.mem
	chmod +w serdes/main.mem
        chmod +w usb/main.mem 
    perl ihex2mem.pl pcie/main.hex
    perl mem2dat_cks.pl pcie/main.mem
    perl ihex2mem.pl sas/main.hex
    perl mem2dat_cks.pl sas/main.mem
	perl ihex2mem.pl serdes/main.hex
	perl mem2dat_cks.pl serdes/main.mem
    perl ihex2mem.pl usb/main.hex
    perl mem2dat_cks.pl usb/main.mem
	perl genlfwi.pl
else
	make $1
	cd -
	if $1 == target_64k then
		chmod +w main.hex
		perl ihex2mem.pl main.hex
		perl mem2dat.pl main.mem
	else
		chmod +w serdes/$1.mem
		perl ihex2mem.pl serdes/$1.hex
		perl mem2dat.pl serdes/$1.mem
		cp -f serdes/$1.mem serdes/main.mem
	endif
endif

#cd -
#soscmd co -Nlock main.mem
#./checkout.csh main.mem
#chmod +w main.mem
#perl ihex2mem.pl main.hex
#perl mem2dat.pl main.mem
date
