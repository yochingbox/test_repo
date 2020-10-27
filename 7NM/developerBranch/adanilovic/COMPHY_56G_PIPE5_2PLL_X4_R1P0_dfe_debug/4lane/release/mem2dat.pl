#!/usr/local/bin/perl -w
die "Usage: $0 XXX.mem
     output file: XXX.dat
     Description: convert verilog mem format to 32bit width hex per line (.dat)
     "if @ARGV != 1;

$filename = $ARGV[0];
$chksumfilename = $filename;
open FP_MEM , "<$filename" or die "Error: Can't open $filename for reading!\n";
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

for ($i=0;$i<$length/4;$i++)
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
print FP_CHKSUM sprintf("0x%08x\n", $checksum);

print "generate $filename success!\n";

close FP_MEM;
close FP_DAT;
close FP_CHKSUM;
