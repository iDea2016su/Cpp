#include<iostream>
using namespace std;
int main()
{
	int wage,profit,profit_status;
	cin>>profit;
	profit_status=profit/100000;
	switch(profit_status)
	{
		case 0: wage = profit * 0.1;break;
		case 1: wage = 10000 + (profit-100000)*0.075;
		case 2: wage = 17000 + (profit-200000)*0.05;
		case 3: wage = 22000 + (profit-300000)*0.05;
		case 4: wage = 22500 + (profit-400000)*0.03;
		case 5: wage = 22800 + (profit-500000)*0.03;
		case 6: wage = 23100 + (profit-600000)*0.03;
		case 7: wage = 23400 + (profit-700000)*0.015;
		case 8: wage = 235550 + (profit-800000)*0.015;
		case 9: wage = 235700 + (profit-900000)*0.015;
		case 10: wage= 235900 + (profit-1000000)*0.015;
		default: wage = 236050 + (profit-1000000)*0.01;
	}
	cout<<wage<<endl;
	return 0;
	
}
