
#-----------------------------------------------------------------------------
#  File: ihex2mem.pl
#  
#	Function: Converts the DW8051 Intel Hex test programs into a VERILOG
#            'readmemh' format.
#            File read   : ./<testname>.hex
#            File written: ./<testname>.tmp
#
#  Last update: 8.22.96 (DH)
#---------------------------------------------------------------------------- 

if (!$ARGV[0]) {
	print "\n  ihex2mem, program to convert Intel hex format into";
	print " Verilog (readmemh) format.\n\n";
	print "  Usage: ihex2mem <filename1.hex> <filename2.hex> .. (with extension)\n";
	print "         (input: <filename.hex>, output: <filename>.tmp)\n\n";
	exit 0; }

$j = 0;

while ($ARGV[$j]){
	open(HEXFP, "<$ARGV[$j]") || die "Error - could not open $ARGV[$j]";
	print "  ihex2mem:  Processing file \'$ARGV[$j]\' \n";
	$ofname=$ARGV[$j];
	$ofname=~s/\..*//;
	$ofname.=".tmp\0";
	open (MEMFP, ">$ofname") || die "Error opening $memfile";
			while (<HEXFP>){
				@hexsep=split(//,$_);
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
					printf MEMFP "%s%c%c%c%c%s", "@", ord($hexsep[3]), ord($hexsep[4]), 
					                                  ord($hexsep[5]), ord($hexsep[6]), " ";
  
					for ($i=1; $i<=2*$no_bytes; $i++) {
						printf MEMFP "%c%s%c%s", ord($hexsep[8+$i]), " ", ord($hexsep[9+$i]), " ";
						$i++; }
				
					print MEMFP "\n";	
				}
			}
			close(HEXFP);
			close(MEMFP);
$j++;
}
print "\ndone\n\n";
exit 0;
