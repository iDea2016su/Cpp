#include <iostream>
using namespace std;
int yue(int,int);
int bei(int,int);
int main()
{
	int a, b;
	cin>>a>>b;
	cout<<"yue = "<<yue(a,b)<<endl;
	cout<<"bei = "<<bei(a,b)<<endl;
	return 0;
}
int yue(int a,int b)
{
	int i =1;
	int j;
	while(i<=a||i<=b)
	{
		if(a%i==0&&b%i==0)
		j = i;
		i++;
	}
	return j;
}
int bei(int a,int b)
{
	int i =a*b;
	int j;
	while(i>=a||i>=b)
	{
		if(i%a==0&&i%b==0)
		j = i;
		i--;
	}
	return j;
}
