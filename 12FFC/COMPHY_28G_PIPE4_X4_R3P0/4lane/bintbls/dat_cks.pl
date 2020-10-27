#!/usr/local/bin/perl -w
no warnings;
die "Usage: $0 XXX.dat
     output file: XXX.dat
     Description: add 2's complemented checksum data at the end line (.dat)
     "if @ARGV != 1;

$filename = $ARGV[0];
$binfilename = $filename;
$txtfilename = $filename;
open FP_DAT , "+<$filename" or die "Error: Can't open $filename for reading!\n";
binmode FP_DAT;
$binfilename =~ s/\..+$/.bin/; 
open FP_BIN , "+>$binfilename" or die "Error: Can't open $binfilename for bin writing!";
binmode FP_BIN;
$txtfilename =~ s/\..+$/.txt/; 
#open FP_TXT , "+>$txtfilename" or die "Error: Can't open $txtfilename for text writing!";

if($filename =~ m/LANE/) 
{
   $mem4k = 1;	
#   print "this is $filename 4k memory\n";	
}
else 
{
   $mem4k = 0;	
#   print "this is $filename not 4k\n";
}

my @all= <FP_DAT>; # just to know the total number of lines through $#all(index of last element)
seek(FP_DAT, 0, 0); # go back to beginning of file
my $count = 0;
$checksum = 0;
$addr = 0;
while (<FP_DAT>)
{
    chomp;
    next if /^#/;
    next if /^\/\//;
    next if /^\s*$/;
    @line = split / /;    
    $line[0] =~ s/@//;
    $dat = hex $line[0];
    $checksum += $dat;
    if($count==$#all-1) # if you are at the second last line
    {
          truncate(FP_DAT, tell(FP_DAT)) or die "can't truncate $filename!"; # get the current position in file (we are at the start of the last line) and truncate all from that position
    }    
    $data[$addr]   = $dat & 0xff;
    $data[$addr+1] = $dat>>8 & 0xff;
    $data[$addr+2] = $dat>>16 & 0xff;
    $data[$addr+3] = $dat>>24 & 0xff;      	
    $count++; # increment
    $addr += 4;
}

$length = @data;
$org = $length;
if($mem4k eq 1)
{
    while ( $length < (0x1000-4))
    {
        $data[$length] = "00";
	$length++;
        $addr++;	
    }

    for ($i=0;$i<512;$i++)
    {
	print FP_DAT "00000000\n";
    }
}

$checksum &= 0xFFFFFFFF;
$checksum_0 = (0xFFFFFFFF - $checksum) + 1;
$data[$addr]   = $checksum_0 & 0xff;
$data[$addr+1] = $checksum_0>>8 & 0xff;
$data[$addr+2] = $checksum_0>>16 & 0xff;
$data[$addr+3] = $checksum_0>>24 & 0xff;    
$addr = $addr + 4;
 
die "Already checksum is there in $filename!\n" if($checksum_0 == 0x100000000);

print FP_DAT sprintf("%x", $checksum_0);

#---
$length = $addr;
for ($i=0;$i<($length);$i++)
{
   print FP_BIN pack "c", $data[$i];		
}

#check
#for ($i=0;$i<($length);$i++)
#{
#   if(($i%4)==0) {
#	print FP_TXT  sprintf("@%04x ",$i);
#   }	
#   print FP_TXT  sprintf("%02x ", $data[$i]);
#	
#   if(($i%4)==3) {
#	print FP_TXT "\n";
#   }  		
#}

print "generate $filename success!\n";
close FP_DAT;
close FP_BIN;
#close FP_TXT;

# ===============================
# Change History
#
# 0708/2020 Heejeong Ryu  hryu@marvell.com	
#  1. support xdat_lane 4K memory; increased padding size to fill 4KByte
# 
