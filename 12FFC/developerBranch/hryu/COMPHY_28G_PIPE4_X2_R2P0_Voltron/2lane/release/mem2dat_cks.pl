#!/usr/local/bin/perl -w
die "Usage: $0 XXX.mem
     output file: XXX.dat
     Description: convert verilog mem format to 32bit width hex per line (.dat)
     "if @ARGV != 1;

$filename = $ARGV[0];
$chksumfilename = $filename;
open FP_MEM , "+<$filename" or die "Error: Can't open $filename for reading!\n";
binmode FP_MEM;
$filename =~ s/\..+$/.dat/; #"mem_list.dat";
open FP_DAT , ">$filename" or die "Error: Can't open $filename for writing!";
binmode FP_DAT;
$chksumfilename =~ s/\..+$/.cks/;
open FP_CHKSUM , ">$chksumfilename" or die "Error: Can't open $chksumfilename for writing!";
binmode FP_CHKSUM;

while (<FP_MEM>)
{
    chomp;
    next if /^#/;
    next if /^\/\//;
    next if /^\s*$/;
    @line = split / /;
    $bytes = @line -1;
    $line[0] =~ s/@//;
    $addr = hex $line[0];
	$fill_up = 1; # default to fill up to 64K bytes for main.dat
	if ( $addr > 0xFFFF ) { $fill_up = 0; } # no fill up for external RAM or ROM
	$addr &= 0xFFFF;	# Added masking of lower 16-bit to allow processing external RAM file
    for ($i=0; $i<$bytes; $i++)
    {
        die "Error: wrong content" if not($line[$i+1] =~ /[0-9a-fA-F]/);
        $data[$addr+$i]=sprintf("%02x", hex $line[$i+1]);
    }
}
$length = @data;
#padding for 4 bytes
while ($length % 4 ne 0)
{
    $data[$length] = "00";
    $length++;
}
#fill up
if ( $fill_up eq 1)
{
	while ( $length < 0x10000 )
	{
		$data[$length] = "00";
		$length++;
	}
}
$checksum = 0;
for ($i=0;$i<($length-4)/4;$i++)
{
	for ($q=0; $q<4; $q++)
	{
		if (!($data[$i*4+$q])) 
		{ 
			$data[$i*4+$q] = "00";
		}
	}
	print FP_DAT "$data[$i*4+3]$data[$i*4+2]$data[$i*4+1]$data[$i*4]\n";
	$checksum += hex "$data[$i*4+3]$data[$i*4+2]$data[$i*4+1]$data[$i*4]";
}

$checksum &= 0xFFFFFFFF;
$checksum_0 = (0xFFFFFFFF - $checksum) + 1;
#Mapping checksum result from FP_DAT to FP_MEM
$checksum_0_str = sprintf("%08x",$checksum_0);
$data4 = substr($checksum_0_str, 6,2);
$data3 = substr($checksum_0_str, 4,2);
$data2 = substr($checksum_0_str, 2,2);
$data1 = substr($checksum_0_str, 0,2);
print FP_MEM "\@00FFFC $data4 $data3 $data2 $data1\n";

print FP_CHKSUM sprintf("0x%08x\n", ($checksum + $checksum_0)&0xFFFFFFFF);
print FP_DAT sprintf("%08x", $checksum_0);
print "generate $filename success!\n";
close FP_MEM;
close FP_DAT;
close FP_CHKSUM;
