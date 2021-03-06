#!/bin/tcsh
cd ../compile
make clean
if ( $#argv == 0 ) then
	make target
	cd -
	chmod +w localfw.info
	chmod +w serdes/main.mem
	chmod +w serdes/main.dat
	perl ihex2mem.pl serdes/main.hex
	perl mem2dat.pl serdes/main.mem
#	perl mem2dat.pl serdes/main_rom.mem
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
