#!/bin/tcsh
cd ../compile
make clean
if ( $#argv == 0 ) then
	make target
else
	make test
endif

cd -
#soscmd co -Nlock main.mem
#./checkout.csh main.mem
chmod +w main.mem
perl ihex2mem.pl main.hex
perl mem2dat.pl main.mem
# PCIE_USB target
cd ../compile
make clean
if ( $#argv == 0 ) then
	make target_pcie
else
	make test_pcie
endif

cd -
#soscmd co -Nlock main.mem
#./checkout.csh main.mem
chmod +w main_pcie.mem
perl ihex2mem.pl main_pcie.hex
perl mem2dat.pl main_pcie.mem
date

