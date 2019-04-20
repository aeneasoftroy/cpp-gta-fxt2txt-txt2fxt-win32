// GTA_FXT2TXT.cpp : FXT2TXT V1.1 by Michael Mendelsohn (Win32 version by Aeneas of Troy)
//
// fxt2txt
// V1.1 DOS
// converts "Grand Theft Auto" *.FXT - Files into *.TXT Files
// *.txt Files are ISO Files and can be viewed under Windows
// Usage: fxt2txt <special.fxt >special.txt
//
// written 12/97 by Michael Mendelsohn (mendel@informatik.uni-bremen.de)
//
// Win32 version 04/2019 by Aeneas of Troy

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
unsigned char c,d;
unsigned char code[8] = {0x64,0xc7,0x8d,0x19,0x31,0x61,0xc1,0x81};
	for (int x=0; x<8; x++)
		{ cin >> c; c=c-code[x]; cout << c; };
	for ( cin >> c; cin.good(); cin >> c )
	{
		switch (c) {
			case 255: break;
			case 196: // cin >> d; cout << '<' << (int)d << '>'; break;
								cin >> d; d=--d +64; cout << d; break;
			case 1: cout << '\n'; break;
			default: cout << --c ;
		};
	};

	return 0;
}


