// IEEE754.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#define u8 unsigned char
#define u16 unsigned int 

int _tmain(int argc, _TCHAR* argv[])
{
	int inval[4] = { 0X3D,0X23 ,0XD7 ,0X0A };
	u8 bitv[32] = { 0 };
	float e_temp = 1;
	int sig, eval;
	long double  mval;
	float outval;
	int i;

	bitv[0] = inval[0] / 128;
	bitv[1] = (inval[0] / 64) % 2;
	bitv[2] = (inval[0] / 32) % 2;
	bitv[3] = (inval[0] / 16) % 2;
	bitv[4] = (inval[0] / 8) % 2;
	bitv[5] = (inval[0] / 4) % 2;
	bitv[6] = (inval[0] / 2) % 2;
	bitv[7] = (inval[0]) % 2;

	bitv[8] = inval[1] / 128;
	bitv[9] = (inval[1] / 64) % 2;
	bitv[10] = (inval[1] / 32) % 2;
	bitv[11] = (inval[1] / 16) % 2;
	bitv[12] = (inval[1] / 8) % 2;
	bitv[13] = (inval[1] / 4) % 2;
	bitv[14] = (inval[1] / 2) % 2;
	bitv[15] = (inval[1]) % 2;

	bitv[16] = inval[2] / 128;
	bitv[17] = (inval[2] / 64) % 2;
	bitv[18] = (inval[2] / 32) % 2;
	bitv[19] = (inval[2] / 16) % 2;
	bitv[20] = (inval[2] / 8) % 2;
	bitv[21] = (inval[2] / 4) % 2;
	bitv[22] = (inval[2] / 2) % 2;
	bitv[23] = (inval[2]) % 2;

	bitv[24] = inval[3] / 128;
	bitv[25] = (inval[3] / 64) % 2;
	bitv[26] = (inval[3] / 32) % 2;
	bitv[27] = (inval[3] / 16) % 2;
	bitv[28] = (inval[3] / 8) % 2;
	bitv[29] = (inval[3] / 4) % 2;
	bitv[30] = (inval[3] / 2) % 2;
	bitv[31] = (inval[3]) % 2;

	eval =  bitv[8] + bitv[7] * 2 + bitv[6] * 4 + bitv[5] * 8 + bitv[4] * 16 + bitv[3] * 32 + bitv[2] * 64 + bitv[1] * 128 - 127;
	mval = bitv[9] * 4194304 +
		bitv[10] * 2097152 +
		bitv[11] * 1048576 +
		bitv[12] * 524288 +
		bitv[13] * 262144 +
		bitv[14] * 131072 +
		bitv[15] * 65536 +
		bitv[16] * 32768 +
		bitv[17] * 16384 +
		bitv[18] * 8192 +
		bitv[19] * 4096 +
		bitv[20] * 2048 +
		bitv[21] * 1024 +
		bitv[22] * 512 +
		bitv[23] * 256 +
		bitv[24] * 128 +
		bitv[25] * 64 +
		bitv[26] * 32 +
		bitv[27] * 16 +
		bitv[28] * 8 +
		bitv[29] * 4 +
		bitv[30] * 2 +
		bitv[31] * 1;
	for (i = 0; i < 32; i++)
		cout << (int)bitv[i] << "   " << i << endl;
	cout << "eval:"<<eval << endl;
	cout << mval << endl;
	outval = 1 + mval / 8388608;
	e_temp = 1;
	if (eval >= 0) { for (i = 0; i < eval; i++) e_temp *= 2; }
	else if (eval < 0) { for (i = 0; i < (-eval); i++) e_temp /= 2; }
	cout << "asn:";
	cout << outval*e_temp << endl;
	while (1);
	return 0;
}

