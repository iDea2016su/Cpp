// P1_r.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#define u16 unsigned int

int main()
{
	u16 i1 = 0, i2 = 0;
	u16 part_1[1000] = { 0 };
	u16 part_2[1000] = { 0 };
	u16 i = 1, j = 0, m, s;
	while (i1 <= 0)
	{
		cout << "Please input the first integer" << endl;
		cin >> i1;
		if (i1 <= 0) cout << "the integer <= 0" << endl;
		else break;
	}
	while (i2 <= 0)
	{
		cout << "Please input the first integer" << endl;
		cin >> i2;
		if (i2 <= 0) cout << "the integer <= 0" << endl;
		else break;
	}
	part_1[0] = 1;
	while (1)
	{
		j++;
		if (i1%i == 0)
		{
			part_1[i] = i;
			i1 = i1/i;
			i = 1;
		}
		i++;
		for (m = 0; m < j; m++)
		{
			s *= part_1[m];
		}
		if()
	}
    return 0;
}

