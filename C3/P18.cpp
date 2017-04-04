#include <iostream>
using namespace std;
int fac(int);
int main()
{
	
	int i;

	int sum = 0 ;

	for(i = 1;i<=20;i++)
	{
    	sum += fac(i);
	}
	cout<<sum<<endl;
	return 0;
}
int fac(int n)
{
	int f;
	if(n==1||n==0)
	f =  1;
    else	f = fac(n-1)*n;
	return f; 
}

