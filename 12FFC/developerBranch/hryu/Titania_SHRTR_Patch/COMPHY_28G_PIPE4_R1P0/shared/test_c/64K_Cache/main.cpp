#include <windows.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;

//#define SEQUENCIAL
//#define MATLAB_LAB //for lab test or sim test

const int CODE_BANK_COUNT = 6;	// Number of banks for program memory (32-K size)
const int CODE_BANK_SIZE = 32 * 1024;
const int CODE_ROM_SIZE = 20 * 1024;	// 20k ROM
const int ROM_BANK_NUM = 2;	// bank_2 is ROM
const int MAIN_FUNC_PAGE_COUNT = 10;	// Reserving 5 pages in common for main function
const int CACHE_PAGE_SIZE = 1024;	// 1k cache memory
const int BANK_PAGE_COUNT = CODE_BANK_SIZE / CACHE_PAGE_SIZE;
const int ROM_PAGE_COUNT = CODE_ROM_SIZE / CACHE_PAGE_SIZE;
const int CACHE_LINE_SIZE = 32;		// 32 bytes in a cache line
const int CACHE_LINE_COUNT = CACHE_PAGE_SIZE / CACHE_LINE_SIZE;
const int MAIN_FUNC_CALL_COUNT = 1280;
const int BYTE_POS_GEN_COUNT = CACHE_LINE_SIZE;
void make_files(void)
{
	int bank, page, line, byte=0, cnt=0;
	bool bHomeBank;	// true for bank_0
	int page_start, page_end;
	int byte_start, byte_end;
	unsigned int addr, tmp;
	string filename_sub = "";
	string filename_header = "";
	string filename_header_list = "bank_func_b_list.h";
	FILE* oheader_list = fopen( filename_header_list.c_str(), "w+" );

	for ( bank = 0; bank < CODE_BANK_COUNT; ++bank )
	{
		if ( ROM_BANK_NUM + 1 == bank )
			continue;	// Skip non existing bank

		bHomeBank = ( 0 == bank );
		page_start = bHomeBank ? MAIN_FUNC_PAGE_COUNT : 0;	// bank_0 (common) page starts after reserved for main() function
		page_end = ( ROM_BANK_NUM == bank ) ? ROM_PAGE_COUNT - 1 : BANK_PAGE_COUNT - 1;	// bank_2 is 20k ROM
		byte_start = 0;
		byte_end = CACHE_LINE_SIZE - 1;

		for ( byte = byte_start; byte <= byte_end; ++byte ) 
		{
			filename_sub = "bank_" + to_string( bank ) + "_func_b_" + to_string((_ULonglong)byte) + ".asm";
			filename_header = "bank_" + to_string( bank ) + "_func_b_" + to_string((_ULonglong)byte) + ".h";
			fprintf( oheader_list, "#include \"%s\"\n", filename_header.c_str() );
			FILE *of = fopen(filename_sub.c_str(),"w+");
			FILE *oh = fopen(filename_header.c_str(),"w+");
			if ( bHomeBank )
				fprintf( of, "\t.module main\n" );
			else
				fprintf( of, "\t.module bank%d\n", bank );
			fprintf( of, "\t.optsdcc -mmcs51 --model-small\n");

			for ( page = page_start; page < page_end; ++page )	// Do NOT include last page as it might overflow (from last line)
			{
				for ( line = 0; line < CACHE_LINE_COUNT; ++line )
				{
					fprintf( of, "\t.globl _bank_%d_func_p%d_%d_%d\n",bank, page, line, byte );
					fprintf( oh, "\tvoid bank_%d_func_p%d_%d_%d()%s;\n",bank, page, line, byte, ( bHomeBank ? "" : " __banked" ) );	
				}
			}
			// fprintf( of, "\t.area BANK%d (ABS,OVR)\n", bank );
			fprintf( of, "\t.area BANK%d (CODE)\n", bank );
			// Add offset to the starting address
			if ( byte > 0 )
			{
				fprintf( of, "\t.DB 0" );
				for ( int pad = 1; pad < byte; ++pad )
					fprintf( of, ", %d", pad );
				fprintf( of, "\n" );
			}

			for ( page = page_start; page < page_end; ++page )	// Do NOT include last page as it might overflow (from last line)
			{
				for ( line = 0; line < CACHE_LINE_COUNT; ++line )
				{
					addr = page * CACHE_PAGE_SIZE + line * CACHE_LINE_SIZE + byte;

					 //generate_firmware (address) ;
					fprintf( of, ";---------- %d\n", cnt);
					fprintf( of, "; bank=%d page=%d Line=%d byte=%d = address=%d (0x%04x)\n", bank, page, line, byte, addr, addr );
//					fprintf( of, "\t.org 0x%04x\n", addr );
					fprintf( of, "_bank_%d_func_p%d_%d_%d:\n", bank, page, line, byte );
						
					tmp = bank + page + line + byte;
					// setting to debug just to make the function 32-byte
					fprintf(of, "\tmov	dptr,#(_MCU_DEBUG0_LANE + 0x0001)\n");			
					fprintf(of, "\tmov	a,#0x%02x\n", tmp);		
					fprintf(of, "\tmovx	@dptr,a\n");			
					fprintf(of, "\tmovx	a,@dptr\n");			
					fprintf(of, "\tmov	dptr,#(_MCU_DEBUG0_LANE + 0x0002)\n");			
					fprintf(of, "\tmov	a,#0x%02x\n", tmp);		
					fprintf(of, "\tmovx	@dptr,a\n");			
					// Write to STATUS register and check, if not equal, set MCU STOP 
					fprintf(of, "\tmov	dptr,#(_MCU_STATUS0_LANE + 0x0001)\n");			
					fprintf(of, "\tmov	a,#0x%02x\n", tmp);		
					fprintf(of, "\tmovx	@dptr,a\n");			
					fprintf(of, "\tmovx	a,@dptr\n");			
					fprintf(of, "\tmov	r7,a\n");			
					fprintf(of, "\tcjne	r7,#0x%02x,bank_%d_level_%d\n", tmp, bank, addr);
					if ( bHomeBank )
						fprintf(of, "\tret\n");
					else
						fprintf( of, "\tsjmp bank_%d_level_%d_bret\n", bank, addr );
					fprintf( of, "bank_%d_level_%d:\n", bank, addr );
					fprintf( of, "\tmov	_PCON,#0x8A\n" ); 
					if ( bHomeBank )
						fprintf( of, "\tret\n\n" );
					else
					{
						fprintf( of, "bank_%d_level_%d_bret:\n", bank, addr );
						fprintf( of, "\tljmp __sdcc_banked_ret\n\n" );
					}
					cnt++;
				} // end of line loop
			} // end of page loop
		 fclose(of);
		 fclose(oh);
		} // end of byte loop
	} // end of bank loop
	fclose(oheader_list);
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
	int bank, page, line, byte=0, cnt=0;
	string filename_maincall = "";

	for ( byte = 0; byte < CACHE_LINE_SIZE; ++byte ) 
	{
		filename_maincall = "main_" + to_string((_ULonglong)byte) + ".c";
		FILE *om = fopen(filename_maincall.c_str(),"w+");

		for ( cnt = 0; cnt < MAIN_FUNC_CALL_COUNT; ++cnt )
		{
			do
			{
				bank = rand() % CODE_BANK_COUNT;
			} while ( bank == ROM_BANK_NUM + 1 );	// Skip non-existing bank
			bool bHomeBank = ( 0 == bank );
			int page_start = bHomeBank ? MAIN_FUNC_PAGE_COUNT : 0;	// bank_0 (common) page starts after reserved for main() function
			int page_end = ( ROM_BANK_NUM == bank ) ? ROM_PAGE_COUNT - 1 : BANK_PAGE_COUNT - 1;	// bank_2 is 20k ROM
			page = rand() % ( page_end - page_start ) + page_start;
			line = rand() % CACHE_LINE_COUNT;

			fprintf(om, "\tbank_%d_func_p%d_%d_%d();\n",bank, page, line, byte);	
		}

//		fprintf(om, "\tbank_0_func_p30_31_%d();\n", byte);

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

	for ( byte=0; byte < BYTE_POS_GEN_COUNT; ++byte )
	{
		string filename_main = "";
		filename_main = "main.c";
		FILE *fm = fopen(filename_main.c_str(),"w+");
		fprintf(fm, "#pragma codeseg HOME\n" );
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
		fprintf(fk, "CODE_SIZE  = 0x44FFF\n");
		fprintf(fk, "XDATA_BASE  = 0x6000\n");
		fprintf(fk, "XDATA_SIZE	= 0x0800\n");
		fprintf(fk, "REG_BASE 	= 0x0000\n");
		fprintf(fk, "LDFLAGS += -Wl-bCSEG=0x000000\n");
		for ( int bank = 1; bank < CODE_BANK_COUNT; ++bank )
		{
			if ( ROM_BANK_NUM + 1 == bank )
				continue;
			fprintf(fk, "LDFLAGS += -Wl-bBANK%d=0x0%d8000\n", bank, bank );
		}
		fprintf(fk, "LDFLAGS += -Wl-r\n");

		fprintf(fk, "SDCCCFLAGS  = --model-small --stack-auto --iram-size 256 --xram-size $(XDATA_SIZE) --code-size $(CODE_SIZE) --opt-code-speed --no-xinit-opt $(DEF) -D PHY_REG_BASE=$(REG_BASE) -D XDATA_BASE=$(XDATA_BASE) -D TABLE_BASE=$(TABLE_BASE) -D SDCCWINDOWS\n");
		fprintf(fk, "ASLINKFLAGS  = $(LDFLAGS) --code-loc $(CODE_BASE) --data-loc 0x18 --xram-loc $(XDATA_BASE)\n\n\n");
		fprintf(fk, "all : main.hex\n\n\n");
		fprintf(fk, "main.hex :\n");
		for ( int bank = 0; bank < CODE_BANK_COUNT; ++bank )
		{
			if ( ROM_BANK_NUM + 1 == bank )
				continue;
			fprintf( fk, "\tsdas8051 -losffgp bank_%d_func_b_%d.asm\n", bank, byte);
		}
		fprintf(fk, "\tsdcc $(SDCCCFLAGS) -c main.c\n");
		fprintf(fk, "\tsdcc --verbose $(SDCCCFLAGS) $(ASLINKFLAGS) main.rel" );
		for ( int bank = 0; bank < CODE_BANK_COUNT; ++bank )
		{
			if ( ROM_BANK_NUM + 1 == bank )
				continue;
			fprintf( fk, " bank_%d_func_b_%d.rel", bank, byte);
		}
		fprintf( fk, "\n" );
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
