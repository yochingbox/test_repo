#include <windows.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

//#define SEQUENCIAL
//#define MATLAB_LAB //for lab test or sim test

void make_files(void)
{
	int page, line, byte=0, cnt=0;
	unsigned int addr, tmp;
	string filename_sub = "";
	string filename_header = "";

	for( byte=0; byte<=31; byte++) 
	{
		filename_sub = "func_b_" + to_string((_ULonglong)byte) + ".asm";
		filename_header = "func_b_" + to_string((_ULonglong)byte) + ".h";
		FILE *of = fopen(filename_sub.c_str(),"w+");
		FILE *oh = fopen(filename_header.c_str(),"w+");

		fprintf(of, "\t.module func_b\n\t.optsdcc -mmcs51 --model-small\n");

		//for ( page = 5; page <46; page = page+1 )
		for ( page = 5; page <63; page = page+1 )
		{
			for ( line = 0; line <=31; line = line+1)
			{
				//for ( byte =0; byte <31; byte=byte+1) 			
				{
				fprintf(of, "\t.globl _func_p%d_%d_%d\n",page, line, byte);			
				fprintf(oh, "\tvoid func_p%d_%d_%d();\n",page, line, byte);	
				}
			}
		}
		fprintf(of, "\t.area JMPADDRB(ABS,OVR)\n\n");

		for ( page = 5; page <63; page = page+1 )
		{
			for ( line = 0; line <=31; line = line+1)
			{
				//for ( byte =0; byte <31; byte=byte+1) 			
				{
		         addr = page*1024+line*32+byte ;

				 //generate_firmware (address) ;
				fprintf(of, ";---------- %d\n", cnt);
				fprintf(of, "; page=%d Line=%d byte=%d = address=%d (0x%04x)\n", page, line, byte, addr, addr);
				fprintf(of, "\t.org 0x%04x\n", addr);
				fprintf(of, "_func_p%d_%d_%d:\n",page, line, byte);			
						
				fprintf(of, "\tmov	dptr,#(_MCU_STATUS0_LANE + 0x0001)\n");			
				tmp = page + line + byte;
				fprintf(of, "\tmov	a,#0x%02x\n", tmp);		
				fprintf(of, "\tmovx	@dptr,a\n");			
				fprintf(of, "\tmovx	a,@dptr\n");			
				fprintf(of, "\tmov	r7,a\n");			
				fprintf(of, "\tcjne	r7,#0x%02x,level_%d\n", tmp, addr);			
				fprintf(of, "\tret\n\n");
				fprintf(of, "level_%d:\n", addr);
				fprintf(of, "\tmov	_PCON,#0x8A\n"); 
				fprintf(of, "\tret\n\n");
				
				cnt++;

				}
			}
		}


	 fclose(of);
	 fclose(oh);
	}
}

#ifdef SEQUENCIAL

void funcall(void)
{
	int page, line, byte=0, cnt=0;
	unsigned int addr, tmp;
	string filename_maincall = "";
	
	for( byte=0; byte<=31; byte++) 
	{
		filename_maincall = "main_" + to_string((_ULonglong)byte) + ".c";
		FILE *om = fopen(filename_maincall.c_str(),"w+");


		//for ( page = 5; page <46; page = page+1 )
		for ( page = 5; page <63; page = page+1 )
		{
			for ( line = 0; line <=31; line = line+1)
			{
				fprintf(om, "\tfunc_p%d_%d_%d();\n",page, line, byte);	
			}
		}

		fclose(om);
		
	}
}
#else //RAMDOM

void funcall(void)
{
	int page, line, byte=0, cnt=0;
	unsigned int addr, tmp;
	string filename_maincall = "";

	for( byte=0; byte<=31; byte++) 
	{
		filename_maincall = "main_" + to_string((_ULonglong)byte) + ".c";
		FILE *om = fopen(filename_maincall.c_str(),"w+");

		for( cnt=0; cnt<1280; cnt++)
		{

			page = rand() % 57 + 5;
			line = rand() % 32;

			fprintf(om, "\tfunc_p%d_%d_%d();\n",page, line, byte);	
		}

		fprintf(om, "\tfunc_p45_31_%d();\n", byte);

		fclose(om);
		
	}
}
#endif

void file_copy(string filesource, string filedest)
{

	std::ifstream infile (filesource, std::ifstream::binary);
	std::ofstream outfile (filedest, std::ofstream::binary);

	// get size of file
	infile.seekg (0,infile.end);
	long size = infile.tellg();
	infile.seekg (0);

	// allocate memory for file content
	char* buffer = new char[size];

	// read content of infile
	infile.read (buffer,size);

	// write to outfile
	outfile.write (buffer,size);

	// release dynamically-allocated memory
	delete[] buffer;

	outfile.close();
	infile.close();


}


int main(void)
{
	int byte=0;
	string filesource = "";
	string filedest = "";

	make_files();
	funcall();

	for(byte=0; byte<32; byte++) 
	//for(byte=0; byte<1; byte++) 
	{

	string filename_main = "";
	filename_main = "main.c";
	FILE *fm = fopen(filename_main.c_str(),"w+");
	fprintf(fm, "#include \"common.h\"\n");
	fprintf(fm, "int _sdcc_external_startup(void);\n");
	fprintf(fm, "_sdcc_external_startup() {\n");
	fprintf(fm, "    return(1);\n");
	fprintf(fm, "}\n");
	fprintf(fm, "void main(){\n");
	fprintf(fm, "	EA = 0;\n");
	fprintf(fm, "   CKCON = 0x00;\n");
	fprintf(fm, "   TCON = 0x05;\n");
	fprintf(fm, "	EA = 1;\n");
	fprintf(fm, "   cmx_MCU_INIT_DONE = 1;\n");
	fprintf(fm, "	#include \"main_%d.c\"\n", byte);
	fprintf(fm, "   reg_GPO_SEL_LANE =1;\n");	//select path to mcu: P0_0
	fprintf(fm, "   P0_0 =1;\n");	
	fprintf(fm, "	while(1);\n");
	fprintf(fm, "}\n");
	fclose(fm);

	string filename_make = "";
	filename_make = "makefile";
	FILE *fk = fopen(filename_make.c_str(),"w+");
	fprintf(fk, ".EXPORT_ALL_VARIABLES:: ;\n\n");
	fprintf(fk, "CODE_BASE	= 0x0000\n");
	fprintf(fk, "CODE_SIZE  = 0xFFFF\n");
	fprintf(fk, "XDATA_BASE  = 0x6000\n");
	fprintf(fk, "XDATA_SIZE	= 0x0800\n");
	fprintf(fk, "REG_BASE 	= 0x0000\n");
	fprintf(fk, "SDCCCFLAGS  = --model-small --stack-auto --iram-size 256 --xram-size $(XDATA_SIZE) --code-size $(CODE_SIZE) --opt-code-speed --no-xinit-opt $(DEF) -D PHY_REG_BASE=$(REG_BASE) -D XDATA_BASE=$(XDATA_BASE) -D TABLE_BASE=$(TABLE_BASE) -D SDCCWINDOWS\n");
	fprintf(fk, "ASLINKFLAGS  = --code-loc $(CODE_BASE) --data-loc 0x18 --xram-loc $(XDATA_BASE)\n\n\n");
	fprintf(fk, "all : main.hex\n\n\n");
	fprintf(fk, "main.hex :\n");
	fprintf(fk, "\tsdas8051 -losffgp func_b_%d.asm\n", byte);
	fprintf(fk, "\tsdcc $(SDCCCFLAGS) -c main.c\n");
	fprintf(fk, "\tsdcc --verbose $(SDCCCFLAGS) $(ASLINKFLAGS) main.rel func_b_%d.rel\n", byte);
	fprintf(fk, "\tpackihx main.ihx > main.hex\n");
	fprintf(fk, "%%.ihx: %%.rel\n");
	fprintf(fk, "\tsdcc --verbose $(SDCCCFLAGS) $(ASLINKFLAGS) $^\n\n");
	fprintf(fk, "%%.hex: %%.ihx\n");
	fprintf(fk, "\tpackihx $^ > $@\n\n");
	fprintf(fk, "clean :\n");
	fprintf(fk, "\trm -f *.hex *.ihx *.lnk *.lst *.map *.rel *.rst *.sym *.mem\n\n");
	fclose(fk);


	#ifdef MATLAB_LAB

	system("run_m.bat");

	filesource = "main.m";
	filedest = "main_" + to_string((_ULonglong)byte) + ".m",byte;
	file_copy(filesource, filedest);

	filesource = "main.hex";
	filedest = "main_" + to_string((_ULonglong)byte) + ".hex",byte;
	file_copy(filesource, filedest);

	#else
	system("run_mem.bat");

	filesource = "main.mem";
	filedest = "t_cache_B" + to_string((_ULonglong)byte) + ".mem",byte;
	file_copy(filesource, filedest);

	filesource = "main.hex";
	filedest = "t_cache_B" + to_string((_ULonglong)byte) + ".hex",byte;
	file_copy(filesource, filedest);
                                                                     
    #endif

	}



}
