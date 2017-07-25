// E8_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class Array_m
{
public:
	void array_set(void);
	void array_max(void);
	void array_show(void);
private:
	int array[10];
	int max;
};
int main()
{
	Array_m a;
	a.array_set();
	a.array_show();
	a.array_max();
	system("pause");
}

void Array_m::array_set()
{
	cout << "input array number:" << endl;
	int i = 0;
	for (i = 0; i < 10; i++)
		cin >> array[i];
}
void Array_m::array_max()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (array[i] >= max) max = array[i];
	}
	cout << "the max number of array is:" << max << endl;
}
void Array_m::array_show()
{
	int i = 0;
	cout << "array is:";
	for (i = 0; i < 10; i++)
	{
		cout << array[i];
	}
}
