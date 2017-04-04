#include <iostream>
using namespace std;
int main()
{
	int a,b;
	int yue(int a,int b);
	int bei(int a,int b);
	cin>>a>>b;
	cout<<"yue = "<<yue(a,b)<<endl;
	cout<<"bei = "<<bei(a,b)<<endl;
}

int yue(int a,int b)
{
	int i=1;
	int t = 1;
	while(i<=a&&i<=b)
	{
		if(a%i==0&&b%i==0)
		t =i;
		i++;
	}
	return t;
}

int bei(int a,int b)
{
	int i=a*b;
	int t;
	while(i>=a||i>=b)
	{
		if(i%a==0&&i%b==0)
		t = i;
		i--;
	}
	return t; 
}
