#include <Windows.h>
#include <stdio.h>
#include <string>
#include <regex>

//namespace
using namespace System;

int curfile = 0;

System::Void ArcihveTo(char filename, char archivename){
	curfile++;
	System::Int16 symb;
	System::Char buffers;
	FILE^ filer;
	size_t size = 946216143;
	//size_t alls = 946216143;
	filer->_tmpfname(filename);
	fread(&buffers, size, size, &filer);
	std::regex^ rgx;


	char symbs[1024]{	//	what replace
		"0xF",
		"1xF";
	};


	char repsymbs[1024]{	//	^	for which replace
							//	|

		"@a",
		"@^";
	};
	//for(symb = 0; symb <= 1024; symb++){	//	better use here while cycle :)
	symb = 0;
	int symb2 = 0;

	//	big important cycle :D

	while(symb <= 1024)
	{
		symb++;

		while(symb2 <= strcount(symbs[symb])){
			symbs[1025] = symbs[1024]+"\nRTRCODE>>"symbs[symb];
			str_ireplace(symbs[symb], "");
		}

		symbs[1026] = symbs[1025]+"\nFILES>>"System::Convert::ToChar(curfile);
		rgx->egrep(buffers, symbs[symb], repsymbs[symb]);

	}	//	end of cycle

	//	IT'S ALL FOR ARCHIVATING SECTION

	}	

System::String^ Unpack(char archive, char unpackway){

	char buffers;
	int symb, symb2 = 0;

	FILE^ filer;
	size_t size = 946216143;
	//size_t alls = 946216143;
	filer->_tmpfname(archive);
	fread(&buffers, size, size, &filer);

	char symbs[1024]{		//what replace
				

		"@a",
		"@^";
	};


	char repsymbs[1024]{	//	^ for which replace
		"0xF",				//	|
		"1xF";
	};

	std::regex^ rgx;
	int files = System::Convert::ToInt16(buffers[1026]);

	while(curfile <= files){
		curfile++;
		while(symb <= 1024){
			
			symb++;
			if(rgx->rgmtch(buffers[symb], "/FILE/")){
				rgx->egrep(buffers, symbs[symb], repsymbs[symb]);
			}

		}
	}

	return System::Convert::ToString(symbs[symb]);
}



