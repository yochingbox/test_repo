@echo off
cd ./compile
make
cd ./../release
perl ihex2mem.pl serdes/main.hex
perl mem2dat.pl serdes/main.mem
cd ..
rem ..@ping -n 8 127.0.0.1 > nul
