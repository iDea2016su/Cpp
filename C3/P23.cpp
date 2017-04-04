#include <iostream>
using namespace std;
int main()
{
	float a;
	float n = 1;
	float m;
	cin>>a;
	while(1)
	{
		m = 0.5*(n+a/n);
		if((m-n)<0.001) break;
		n = m;
	}
	cout<<m<<endl;
	return 0; 
}
