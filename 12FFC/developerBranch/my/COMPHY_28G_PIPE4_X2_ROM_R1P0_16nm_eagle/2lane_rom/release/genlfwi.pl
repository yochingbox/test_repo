$filename = "localfw.info"; # output file
open FP_OUTINFO, ">$filename" or die "Error: Can't open $filename for writing!";
binmode FP_OUTINFO;
$cks_file = 'pcie/main.cks';
if ( -e $cks_file )
{
	open FP_CKS, "<$cks_file";
	print FP_OUTINFO "PCIe Firmware MAIN Checksum: ".<FP_CKS>;
	close FP_CKS;
}
$cks_file = 'sas/main.cks';
if ( -e $cks_file )
{
	open FP_CKS, "<$cks_file";
	print FP_OUTINFO "SAS Firmware RAM Checksum: ".<FP_CKS>;
	close FP_CKS;
}
$cks_file = 'serdes/main.cks';
if ( -e $cks_file )
{
	open FP_CKS, "<$cks_file";
	print FP_OUTINFO "SerDes Firmware RAM Checksum: ".<FP_CKS>;
	close FP_CKS;
}
$cks_file = 'pcie/main_rom.cks';	
if ( -e $cks_file )
{
	open FP_CKS, "<$cks_file";
	print FP_OUTINFO "PCIe Firmware MAIN_ROM Checksum: ".<FP_CKS>;
	close FP_CKS;
}
else
{
	$cks_file = 'serdes/main_rom.cks';	
	if ( -e $cks_file )
	{
		open FP_CKS, "<$cks_file";
		print FP_OUTINFO "Firmware ROM Checksum: ".<FP_CKS>;
		close FP_CKS;
	}
}

print "generate $filename success!\n";
close FP_OUTINFO;
