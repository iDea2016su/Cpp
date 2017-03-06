#include<iostream>
using namespace std;
int main()
{
	int wage ,profit;
	cin>>profit;
	if(profit<=100000) wage = profit*0.1;
	else if(profit>100000&&profit<=200000) wage = 10000+(profit-100000)*0.075;
	else if(profit>200000&&profit<=400000) wage = 17500+(profit-200000)*0.05;
	else if(profit>400000&&profit<=600000) wage = 22500+(profit-400000)*0.03;
	else if(profit>600000&&profit<=1000000) wage =33100+(profit-600000)*0.015;
	else wage = 36100+(profit-1000000)*0.01; 
	cout<<wage<<endl;
	return 0;
 } 
