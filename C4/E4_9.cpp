#include <iostream>
using namespace std;
int main()
{
	int max(int a,int b);
	int max(int a,int b,int c);
	int a =1,b = 2,c = 3;
	cout<<"max(int,int)"<<max(1,2)<<endl;
	cout<<"max(int,int,int)"<<max(1,2,3)<<endl;
}

int max(int a,int b)
{
	if(a>=b) return a;
	else return b;
}

int max(int a,int b,int c)
{
	if(a<b) a = b;
	if(c<a) return a;
	else return c;
}
