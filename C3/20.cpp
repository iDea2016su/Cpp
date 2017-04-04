#include <iostream>
using namespace std;
int main()
{
	int num[1000]={0};
	int i;
	int j=0;
    int m = 0;
	int sum =0;	
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			num[m++] = j;
		}
		for(j = 0;j<m-1;j++)
		 {
		 	sum+=num[j];
		 	cout<<m<<endl;
		}
	//	if(sum == i)
	//	cout<<i<<endl;
		sum =0;
		m =0;
	}
	return 0;
}
