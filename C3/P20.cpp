#include <iostream>
using namespace std;
int main()
{
	float n[20];
	float m[20];
	int i;
	float sum = 0;
	n[0] = 2;
	n[1] = 3;
	m[0] = 1;
	m[1] = 2;
	for(i = 2;i<20;i++)
	{
		n[i] = n[i-1] + n[i-2];
	}
		for(i = 2;i<20;i++)
	{
		m[i] = m[i-1] + m[i-2];
	}
	for(i=0;i<20;i++)
	{
		sum+=(n[i]/m[i]);
	}
	cout<<sum<<endl;
}


int nv(int n)
{
	
}
