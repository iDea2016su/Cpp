#include <iostream>
using namespace std;
int main()
{
	int i;
	int i1;
	int i2;
	int i3;
	for(i = 100;i<999;i++)
	{
		i1 = i/100;
		i2 = (i%100)/10;
		i3 = i%10;
		if(i == i1*i1*i1+i2*i2*i2+i3*i3*i3)
		cout<<i<<endl;
	}
	return 0;
}
