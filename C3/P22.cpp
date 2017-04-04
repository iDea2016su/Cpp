#include <iostream>
using namespace std;
int main()
{
	int n[10];
	int i ;
	n[9] = 1;
	
	for(i=9;i>0;i--)
	{
		n[i-1] = (n[i]+1)*2;
	}
	for(i =0;i<10;i++)
	cout<<n[i]<<endl;
	return 0;
}
