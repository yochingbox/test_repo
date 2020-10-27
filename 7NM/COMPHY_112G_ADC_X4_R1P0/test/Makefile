# shared library name
OUTPUTFILE=fwtest.so
SOURCES=../shared/src/snr_approx.c
INCLUDES=-I../shared/inc -I../4lane/inc
DEFINES=-DDSP_BUILD

build:
	gcc -shared $(DEFINES) $(INCLUDES) -o $(OUTPUTFILE) $(SOURCES)

clean:
	rm $(OUTPUTFILE) -rf
	
.PHONY: build clean
