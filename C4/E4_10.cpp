#include <iostream>
using namespace std;
template <typename T> //模板声明，其中T为类型参数
T max(T a,T b,T c)
{
	if(a<b) a = b;
	if(c<a) return a;
	else return c;
 } 
 
int main()
{
	int i1 = 1,i2 = 2,i3 = 3,i;
	double d1 = 1.5,d2 = 2.5,d3 = 3.5,d;
	long g1 = 121123,g2 = 732904723,g3 = 123,g;
	i = max(i1,i2,i3);
	d = max(d1,d2,d3);
	g = max(g1,g2,g3);
	
	cout<<"imax="<<i<<endl;
	cout<<"dmax="<<d<<endl;
	cout<<"gmax="<<g<<endl; 
	
}

