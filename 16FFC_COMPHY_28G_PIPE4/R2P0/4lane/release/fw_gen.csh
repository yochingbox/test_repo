#!/bin/tcsh -f
cd ../compile
make clean
if ( $#argv == 0 ) then
	make target
	cd -
	chmod +w main.mem main_rom.mem main_ext.mem main_rom.dat main_ext.dat
	perl ihex2mem.pl main.hex
	perl mem2dat.pl main.mem
        perl mem2dat.pl main_rom.mem
        perl mem2dat.pl main_ext.mem
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

