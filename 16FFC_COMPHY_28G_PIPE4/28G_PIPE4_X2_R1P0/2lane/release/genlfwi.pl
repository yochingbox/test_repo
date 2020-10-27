$filename = "localfw.info"; # output file
open FP_OUTINFO, ">$filename" or die "Error: Can't open $filename for writing!";
binmode FP_OUTINFO;
$cks_file = 'main.cks';
if ( -e $cks_file )
{
	open FP_CKS, "<$cks_file";
	print FP_OUTINFO "Firmware RAM Checksum: ".<FP_CKS>;
	close FP_CKS;
}
$cks_file = 'main_rom.cks';	
if ( -e $cks_file )
{
	open FP_CKS, "<$cks_file";
	print FP_OUTINFO "Firmware ROM Checksum: ".<FP_CKS>;
	close FP_CKS;
}

print "generate $filename success!\n";
close FP_OUTINFO;
