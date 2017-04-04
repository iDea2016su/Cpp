#include <iostream>
using namespace std;
int main()
{
	int max(int a,int b,int c =0);
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"max(int a,int b,int c)"<<max(a,b,c)<<endl;
	cout<<"max(int a,int b)"<<max(a,b)<<endl;
	return 0; 
}
int max(int a,int b,int c)
{
	if(a<b) a = b;
	if(c<a) return a;
	else return c; 
}
