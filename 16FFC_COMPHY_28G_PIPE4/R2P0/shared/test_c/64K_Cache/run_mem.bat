del *.ihx *.lnk *.lst *.map *.rel *.rst *.sym main.hex main.mem
make 
perl ihex2mem.pl main.hex

