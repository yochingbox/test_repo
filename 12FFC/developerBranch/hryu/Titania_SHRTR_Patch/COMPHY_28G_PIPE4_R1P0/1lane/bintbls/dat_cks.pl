#!/usr/local/bin/perl -w
no warnings;
die "Usage: $0 XXX.dat
     output file: XXX.dat
     Description: add 2's complemented checksum data at the end line (.dat)
     "if @ARGV != 1;

$filename = $ARGV[0];
open FP_DAT , "+<$filename" or die "Error: Can't open $filename for reading!\n";
binmode FP_DAT;
my @all= <FP_DAT>; # just to know the total number of lines through $#all(index of last element)
seek(FP_DAT, 0, 0); # go back to beginning of file

my $count = 0;
$checksum = 0;
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
    $count++; # increment
}

$checksum &= 0xFFFFFFFF;
$checksum_0 = (0xFFFFFFFF - $checksum) + 1;

die "Already checksum is there in $filename!\n" if($checksum_0 == 0x100000000);

print FP_DAT sprintf("%x", $checksum_0);
print "generate $filename success!\n";
close FP_DAT;
