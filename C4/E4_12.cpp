#include <iostream>
using namespace std;
int f(int a)
{
	auto int b = 0;
	static int c = 3;
	b = b+1;
	c++;
	return (a+b+c);
}
int main()
{
	int a = 2;
	int i;
	for(i=0;i<3;i++)
	{
		cout<<f(a)<<endl;
	}
	return 0;
}
