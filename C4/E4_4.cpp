#include <iostream>
using namespace std;
int max4(int a,int b,int c,int d);
int max(int a,int b);
int main()
{

	int a,b,c,d,max;
	cin>>a>>b>>c>>d;
	max = max4(a,b,c,d);
	cout<<max<<endl;
	return 0;
}

int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int max4(int a,int b,int c,int d)
{
	return(max(max(a,b),c),d);
}
