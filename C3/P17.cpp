#include <iostream>
using namespace std;
int main()
{
	int a,i,sum =0;
	int t;
	cin>>a;
	t = a;
	for(i =0;i<t;i++)
	{
		sum+=a*(t-i);
		a= a*10;
		cout<<a<<endl;
	}
	cout<<sum<<endl;
	return 0;
 } 
