// E5_12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
string name[50], num[50];
int n;

int main()
{
	void input_data(void);
	void search(string str);
	string find_name;
	cout << "please input number of class:" << endl;
	cin >> n;
	input_data();
	cout << "input name you find:" << endl;
	cin >> find_name;                                                                                                       
	search(find_name);
	system("pause");
    return 0;
}

void input_data()
{
	int i = 0;
	for (i = 0; i < n; i++)
		cin >> name[i] >> num[i];
}
void search(string str)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (str == name[i])
		{
			cout << name[i] << num[i] << endl;
			break;
		}

	}
	if (i == n)
		cout << "no this student" << endl;
}

