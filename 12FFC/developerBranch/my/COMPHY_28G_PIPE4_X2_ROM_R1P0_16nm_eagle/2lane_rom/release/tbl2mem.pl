
#-----------------------------------------------------------------------------
#  File: tbl2mem.pl
#  
#	Function: Append speed table contents to existing .mem file
#            File read   : ./../bintbls/mem/<spdtbl_cmn>.mem & ./../bintbls/mem/<spdtbl_lane>.mem
#            File appended: ./<firmware>.mem
#
#  Last update: 2/11/18
#---------------------------------------------------------------------------- 

$numArgs = $#ARGV + 1;
# Must have 4 arguments: FW_File_Name, which_bank, PHY_MODE and reference_freq
if ($numArgs ne 4) {
	print "\n  tbl2mem, program to append speed table to firmware .mem file\n\n";
	print "  Usage: tbl2mem <dest_fw.mem> <BANK_NUM> <PHY_MODE> <REF_FREQ>\n";
	print "         e.g. tbl2mem main_rom.mem 2 PCIE 40\n\n";
	printf("%d\n", $numArgs);
	exit 0; 
}
# construct the speed table file names
$fname_mem = $ARGV[0];
$fname_tbl_cmn = "./../bintbls/mem/".$ARGV[2]."_REF".$ARGV[3]."MHz_CMN.mem";
$fname_tbl_lane = "./../bintbls/mem/".$ARGV[2]."_LANE.mem";
open( FP_MEM, '>>', $fname_mem ) || die "Error - could not open $fname_mem";
open( FP_TBL_CMN, $fname_tbl_cmn ) || die "Error - could not open $fname_tbl_cmn";
open( FP_TBL_LANE, $fname_tbl_lane ) || die "Error - could not open $fname_tbl_lane";
binmode FP_MEM;
binmode FP_TBL_CMN;
binmode FP_TBL_LANE;
# decide program memory address from bank number
$bank_num = hex( $ARGV[1] );
$mem_address = int( $bank_num / 2 ) * 0x10000 + 0x7000;
if ( $bank_num % 2 ) {$mem_address += 0x8000}
while (<FP_TBL_CMN>) {
    @line = split / {1,}/;
	$bytes = @line;
	print FP_MEM sprintf( "@%06X ", $mem_address);
    for ($i=1; $i<$bytes; $i++){
		print FP_MEM $line[$i];
		if ($i < $bytes - 1) {
			print FP_MEM " ";
		}
	}
	$mem_address += $bytes - 1;
}
print FP_MEM "\n";
while (<FP_TBL_LANE>) {
    @line = split / {1,}/;
	$bytes = @line;
	print FP_MEM sprintf( "@%06X ", $mem_address);
    for ($i=1; $i<$bytes; $i++){
		print FP_MEM $line[$i];
		if ($i < $bytes - 1) {
			print FP_MEM " ";
		}
	}
	$mem_address += $bytes - 1;
}
close FP_MEM;
close FP_TBL_CMN;
close FP_TBL_LANE;
print "\ndone\n\n";
exit 0;
