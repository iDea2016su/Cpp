// E5_6_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string string1, string2, string3, temp;
	cout << "please input three strings:" << endl;
	cin >> string1 >> string2 >> string3;
	if (string1 > string2) { temp = string1; string1 = string2; string2 = temp; }
	if (string2 > string3) { temp = string2; string2 = string3; string3 = temp; }
	if (string1 > string2) { temp = string1; string1 = string2; string2 = temp; }

	cout << string1 << endl;
	cout << string2 << endl;
	cout << string3 << endl;




	system("pause");
    return 0;
}

