
#-----------------------------------------------------------------------------
#  File: ihex2mem.pl
#  
#	Function: Converts the DW8051 Intel Hex test programs into a VERILOG
#            'readmemh' format.
#            File read   : ./<testname>.hex
#            File written: ./<testname>.mem
#
#  Last update: 8.22.96 (DH)
#---------------------------------------------------------------------------- 

if (!$ARGV[0]) {
	print "\n  ihex2mem, program to convert Intel hex format into";
	print " Verilog (readmemh) format.\n\n";
	print "  Usage: ihex2mem <filename1.hex> <filename2.hex> .. (with extension)\n";
	print "         (input: <filename.hex>, output: <filename>.mem)\n\n";
	exit 0; }

$j = 0;

while ($ARGV[$j]){
	open(HEXFP, "<$ARGV[$j]") || die "Error - could not open $ARGV[$j]";
	print "  ihex2mem:  Processing file \'$ARGV[$j]\' \n";
	$ofname=$ARGV[$j];
	$ofname=~s/\..*//;
	$oromfname=$ofname."_rom.mem\0";
	$oextfname=$ofname."_ext.mem\0";
	$ofname.=".mem\0";
	open (MEMFP, ">$ofname") || die "Error opening $memfile";
	open (ROMMEMFP, ">$oromfname") || die "Error opening $oromfname";
	open (EXTMEMFP, ">$oextfname") || die "Error opening $oextfname";
			binmode MEMFP;
			binmode ROMMEMFP;
			binmode EXTMEMFP;
			$hi_addr = 0;
			while (<HEXFP>){
				@hexsep=split(//,$_);
				# check record type = 04 which indicates high 16-bit of address
				if (ord($hexsep[8]) == ord('4')) { $hi_addr = ord( $hexsep[12] ) -ord('0'); next; } #Set high address, go back to while
				if (ord($hexsep[8]) == ord('5')) { next; } #Do nothing for 'start linear address' record type
				
				if (ord($hexsep[1]) <= ord('9')) { $no_bytes = 16*(ord($hexsep[1]) - ord('0')); }
				if ((ord($hexsep[1]) >= ord('A')) && (ord($hexsep[1]) <= ord('F'))) {
					$no_bytes = 16 * (ord($hexsep[1]) - 55); }
				if ((ord($hexsep[1]) >= ord('a')) && (ord($hexsep[1]) <= ord('f'))){
					$no_bytes = 16*(ord($hexsep[1]) - 87); }
		
				if (ord($hexsep[2]) <= ord('9')) { $no_bytes = $no_bytes + ord($hexsep[2]) - ord('0'); }
				if ((ord($hexsep[2]) >= ord('A')) && (ord($hexsep[2]) <= ord('F'))) {
					$no_bytes = $no_bytes + ord($hexsep[2]) - 55; }

				if ((ord($hexsep[2]) >= ord('a')) && (ord($hexsep[2]) <= ord('f'))){
					$no_bytes = $no_bytes + ord($hexsep[2]) - 87; }
				if ($no_bytes > 0) {
					# get logical address [15:12]
					if (ord($hexsep[3]) <= ord('9')) { $top_low_addr = ord($hexsep[3]) - ord('0'); }
					if ((ord($hexsep[3]) >= ord('A')) && (ord($hexsep[3]) <= ord('F'))) {
						$top_low_addr = ord($hexsep[3]) - 55; }
					if ((ord($hexsep[3]) >= ord('a')) && (ord($hexsep[3]) <= ord('f'))){
						$top_low_addr = ord($hexsep[3]) - 87; }
					if ($hi_addr > 0 && $hi_addr % 2 == 0) { $top_low_addr -= 8; }
					
					if ($hi_addr == 2 ) { # ROM bank
						printf ROMMEMFP "%s%02x%x%c%c%c%s", "@", $hi_addr / 2, $top_low_addr, ord($hexsep[4]), 
														  ord($hexsep[5]), ord($hexsep[6]), " ";
			
						for ($i=1; $i<=2*$no_bytes; $i++) {
							printf ROMMEMFP "%c%c%s", ord($hexsep[8+$i]), ord($hexsep[9+$i]), " ";
							$i++; }
					
						print ROMMEMFP "\n";	
						}
					elsif ($hi_addr == 3 )  { # External RAM bank
						###printf EXTMEMFP "%s%02x%x%c%c%c%s", "@", $hi_addr / 2, $top_low_addr, ord($hexsep[4]), 
						####								  ord($hexsep[5]), ord($hexsep[6]), " ";
						# Make actual address from 0x18000 appear as address starting from 0x00000
						printf EXTMEMFP "%s%02x%x%c%c%c%s", "@", $hi_addr / 2 - 1, $top_low_addr - 0x8, ord($hexsep[4]), 
														  ord($hexsep[5]), ord($hexsep[6]), " ";
			
						for ($i=1; $i<=2*$no_bytes; $i++) {
							printf EXTMEMFP "%c%c%s", ord($hexsep[8+$i]), ord($hexsep[9+$i]), " ";
							$i++; }
					
						print EXTMEMFP "\n";	
						}
					else {
						printf MEMFP "%s%02x%x%c%c%c%s", "@", $hi_addr / 2, $top_low_addr, ord($hexsep[4]), 
														  ord($hexsep[5]), ord($hexsep[6]), " ";
			
						for ($i=1; $i<=2*$no_bytes; $i++) {
							printf MEMFP "%c%c%s", ord($hexsep[8+$i]), ord($hexsep[9+$i]), " ";
							$i++; }
					
						print MEMFP "\n";	
						}
				}
			}
			close(HEXFP);
			close(MEMFP);
			close(ROMMEMFP);
			close(EXTMEMFP);
$j++;
}
print "\ndone\n\n";
exit 0;
