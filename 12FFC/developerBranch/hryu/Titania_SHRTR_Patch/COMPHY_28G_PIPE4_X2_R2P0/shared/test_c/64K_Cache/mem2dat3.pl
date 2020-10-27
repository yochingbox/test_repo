#!/usr/local/bin/perl -w
die "Usage: $0 filename
     filename: .tmp file from compiler
     "if @ARGV != 1;

$filename = $ARGV[0];
open LIST , "<$filename" or die "Can't open $filename for reading!\n";
$filename =~ s/\..+$/.dat/; #"mem_list.dat";
open OUT , ">$filename" or die "Can't open $filename fore writing!";

while (<LIST>)
{
    s/\n//;
    s/^\s+|\s+$//g;
    @line = split / /;
    $bytes = @line -1;
    $line[0] =~ s/@//;
    $addr = hex $line[0];
    while ($bytes % 2 ne 0)
    {
        $line[$byte] = "0";
        $byte++;
    }
    for ($i=0; $i<$bytes/2; $i++)
    {
	$j=$i*2;
        $data[$addr+$i]=$line[$j+1].$line[$j+2];
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
    if (!exists($data[$i*4+$q])) 
      { $data[$i*4+$q] = "00";
      }
  }
print OUT "$data[$i*4+3]$data[$i*4+2]$data[$i*4+1]$data[$i*4]\n";
}

close LIST;
close OUT;
