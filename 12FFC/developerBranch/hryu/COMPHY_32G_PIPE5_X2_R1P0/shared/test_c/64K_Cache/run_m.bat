del *.ihx *.lnk *.lst *.map *.rel *.rst *.sym
make 
perl ihex2mem_2.pl main.hex
perl mem2dat2word.pl main.tmp

