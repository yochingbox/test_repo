#!/bin/tcsh -f
chmod +w *.dat
if( $#argv > 1) then
   echo "Usage: $0 [XXX.dat]"
   exit 1;
endif

if ( $#argv == 0 ) then
	rm -f dat/*.bin
	chmod +w -f dat/*.dat
	perl dat_cks.pl dat/SAS_LANE.dat
	perl dat_cks.pl dat/SAS_REF25MHz_CMN.dat
	perl dat_cks.pl dat/SAS_REF30MHz_CMN.dat
	perl dat_cks.pl dat/SAS_REF40MHz_CMN.dat
	perl dat_cks.pl dat/SAS_REF50MHz_CMN.dat
	perl dat_cks.pl dat/SAS_REF62MHz_CMN.dat
	perl dat_cks.pl dat/SAS_REF100MHz_CMN.dat
	perl dat_cks.pl dat/SAS_REF125MHz_CMN.dat
	perl dat_cks.pl dat/SAS_REF156MHz_CMN.dat

	perl dat_cks.pl dat/PCIE_LANE.dat
	perl dat_cks.pl dat/PCIE_REF25MHz_CMN.dat
	perl dat_cks.pl dat/PCIE_REF30MHz_CMN.dat
	perl dat_cks.pl dat/PCIE_REF40MHz_CMN.dat
	perl dat_cks.pl dat/PCIE_REF50MHz_CMN.dat
	perl dat_cks.pl dat/PCIE_REF62MHz_CMN.dat
	perl dat_cks.pl dat/PCIE_REF100MHz_CMN.dat
	perl dat_cks.pl dat/PCIE_REF125MHz_CMN.dat
	perl dat_cks.pl dat/PCIE_REF156MHz_CMN.dat

	perl dat_cks.pl dat/USB_LANE.dat
	perl dat_cks.pl dat/USB_REF25MHz_CMN.dat
	perl dat_cks.pl dat/USB_REF30MHz_CMN.dat
	perl dat_cks.pl dat/USB_REF40MHz_CMN.dat
	perl dat_cks.pl dat/USB_REF50MHz_CMN.dat
	perl dat_cks.pl dat/USB_REF62MHz_CMN.dat
	perl dat_cks.pl dat/USB_REF100MHz_CMN.dat
	perl dat_cks.pl dat/USB_REF125MHz_CMN.dat
	perl dat_cks.pl dat/USB_REF156MHz_CMN.dat

	perl dat_cks.pl dat/SERDES_G0_LANE.dat
	perl dat_cks.pl dat/SERDES_G1_LANE.dat
	perl dat_cks.pl dat/SERDES_G2_LANE.dat
	perl dat_cks.pl dat/SERDES_G3_LANE.dat
	perl dat_cks.pl dat/SERDES_G4_LANE.dat
	perl dat_cks.pl dat/SERDES_G5_LANE.dat
	perl dat_cks.pl dat/SERDES_G6_LANE.dat
	perl dat_cks.pl dat/SERDES_G7_LANE.dat
	perl dat_cks.pl dat/SERDES_G8_LANE.dat
	perl dat_cks.pl dat/SERDES_G9_LANE.dat
	perl dat_cks.pl dat/SERDES_G10_LANE.dat
	perl dat_cks.pl dat/SERDES_G11_LANE.dat
	perl dat_cks.pl dat/SERDES_G12_LANE.dat
	perl dat_cks.pl dat/SERDES_G13_LANE.dat	
	perl dat_cks.pl dat/SERDES_G14_LANE.dat	
	perl dat_cks.pl dat/SERDES_G15_LANE.dat	
	perl dat_cks.pl dat/SERDES_G16_LANE.dat	
	perl dat_cks.pl dat/SERDES_G17_LANE.dat	
	perl dat_cks.pl dat/SERDES_G18_LANE.dat	
        perl dat_cks.pl dat/SERDES_SPDCHG0_LANE.dat
        perl dat_cks.pl dat/SERDES_SPDCHG1_LANE.dat
        perl dat_cks.pl dat/SERDES_SPDCHG2_LANE.dat
	perl dat_cks.pl dat/SERDES_REF25MHz_CMN.dat
	perl dat_cks.pl dat/SERDES_REF30MHz_CMN.dat
	perl dat_cks.pl dat/SERDES_REF40MHz_CMN.dat
	perl dat_cks.pl dat/SERDES_REF50MHz_CMN.dat
	perl dat_cks.pl dat/SERDES_REF62MHz_CMN.dat
	perl dat_cks.pl dat/SERDES_REF100MHz_CMN.dat
	perl dat_cks.pl dat/SERDES_REF125MHz_CMN.dat
	perl dat_cks.pl dat/SERDES_REF156MHz_CMN.dat
  
#        rm -f dat/*.txt
else
	perl dat_cks.pl $1	
endif

#cd -
#soscmd co -Nlock main.mem
#./checkout.csh main.mem
#chmod +w main.mem
#perl ihex2mem.pl main.hex
#perl mem2dat.pl main.mem
date

