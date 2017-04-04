#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int year  = 2016;
	int mon   = 10;
	int day   = 1;
	int hour  = 0;
	int min   = 0;
	int i;
	
	float voltage;
	float vol_rand;
	float current;
	float cur_rand;
	float dianliang = 100; 
	
	srand(time(NULL));//设置随机数种子，使每次获取的随机序列不同。
//	while(1)
while(1)
	{
		 
        vol_rand = rand()%(100)/(float)(100);
        cur_rand = rand()%(10000)/(float)(10000);
		voltage = 215 + 10*vol_rand;
	//	cout<<voltage<<endl;
		switch (mon)
		{
			case 10:
			switch (hour)
			{
				case  0: current = 130/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case  1: current = 130/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  2: current = 130/31/(0.3/24)/voltage + 0.3*cur_rand;break;
				case  3: current = 130/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  4: current = 130/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  5: current = 130/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  6: current = 130/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  7: current = 130/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  8: current = 130/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  9: current = 130/31/(1.0/24)/voltage + 0.3*cur_rand;break;
				case 10: current = 130/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 11: current = 130/31/(0.4/24)/voltage + 0.3*cur_rand;break;
				case 12: current = 130/31/(1.1/24)/voltage + 0.3*cur_rand;break;
				case 13: current = 130/31/(1.3/24)/voltage + 0.3*cur_rand;break;
				case 14: current = 130/31/(0.9/24)/voltage + 0.3*cur_rand;break;
				case 15: current = 130/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 16: current = 130/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 17: current = 130/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 18: current = 130/31/(1.5/24)/voltage + 0.3*cur_rand;break;
				case 19: current = 130/31/(1.6/24)/voltage + 0.3*cur_rand;break;
				case 20: current = 130/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case 21: current = 130/31/(2.2/24)/voltage + 0.3*cur_rand;break;
				case 22: current = 130/31/(2.3/24)/voltage + 0.3*cur_rand;break;
				case 23: current = 130/31/(2.4/24)/voltage + 0.3*cur_rand;break;
			};break;
			case 11:
			switch (hour)
			{
				case  0: current = 150/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case  1: current = 150/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  2: current = 150/31/(0.3/24)/voltage + 0.3*cur_rand;break;
				case  3: current = 150/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  4: current = 150/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  5: current = 150/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  6: current = 150/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  7: current = 150/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  8: current = 150/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  9: current = 150/31/(1.0/24)/voltage + 0.3*cur_rand;break;
				case 10: current = 150/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 11: current = 150/31/(0.4/24)/voltage + 0.3*cur_rand;break;
				case 12: current = 150/31/(1.1/24)/voltage + 0.3*cur_rand;break;
				case 13: current = 150/31/(1.3/24)/voltage + 0.3*cur_rand;break;
				case 14: current = 150/31/(0.9/24)/voltage + 0.3*cur_rand;break;
				case 15: current = 150/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 16: current = 150/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 17: current = 150/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 18: current = 150/31/(1.5/24)/voltage + 0.3*cur_rand;break;
				case 19: current = 150/31/(1.6/24)/voltage + 0.3*cur_rand;break;
				case 20: current = 150/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case 21: current = 150/31/(2.2/24)/voltage + 0.3*cur_rand;break;
				case 22: current = 150/31/(2.3/24)/voltage + 0.3*cur_rand;break;
				case 23: current = 150/31/(2.4/24)/voltage + 0.3*cur_rand;break;
			};break;
			case 12:
			switch (hour)
			{
				case  0: current = 180/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case  1: current = 180/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  2: current = 180/31/(0.3/24)/voltage + 0.3*cur_rand;break;
				case  3: current = 180/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  4: current = 180/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  5: current = 180/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  6: current = 180/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  7: current = 180/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  8: current = 180/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  9: current = 180/31/(1.0/24)/voltage + 0.3*cur_rand;break;
				case 10: current = 180/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 11: current = 180/31/(0.4/24)/voltage + 0.3*cur_rand;break;
				case 12: current = 180/31/(1.1/24)/voltage + 0.3*cur_rand;break;
				case 13: current = 180/31/(1.3/24)/voltage + 0.3*cur_rand;break;
				case 14: current = 180/31/(0.9/24)/voltage + 0.3*cur_rand;break;
				case 15: current = 180/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 16: current = 180/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 17: current = 180/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 18: current = 180/31/(1.5/24)/voltage + 0.3*cur_rand;break;
				case 19: current = 180/31/(1.6/24)/voltage + 0.3*cur_rand;break;
				case 20: current = 180/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case 21: current = 180/31/(2.2/24)/voltage + 0.3*cur_rand;break;
				case 22: current = 180/31/(2.3/24)/voltage + 0.3*cur_rand;break;
				case 23: current = 180/31/(2.4/24)/voltage + 0.3*cur_rand;break;
			};break;
		    case 1:
			switch (hour)
			{
				case  0: current = 200/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case  1: current = 200/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  2: current = 200/31/(0.3/24)/voltage + 0.3*cur_rand;break;
				case  3: current = 200/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  4: current = 200/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  5: current = 200/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  6: current = 200/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  7: current = 200/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  8: current = 200/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  9: current = 200/31/(1.0/24)/voltage + 0.3*cur_rand;break;
				case 10: current = 200/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 11: current = 200/31/(0.4/24)/voltage + 0.3*cur_rand;break;
				case 12: current = 200/31/(1.1/24)/voltage + 0.3*cur_rand;break;
				case 13: current = 200/31/(1.3/24)/voltage + 0.3*cur_rand;break;
				case 14: current = 200/31/(0.9/24)/voltage + 0.3*cur_rand;break;
				case 15: current = 200/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 16: current = 200/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 17: current = 200/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 18: current = 200/31/(1.5/24)/voltage + 0.3*cur_rand;break;
				case 19: current = 200/31/(1.6/24)/voltage + 0.3*cur_rand;break;
				case 20: current = 200/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case 21: current = 200/31/(2.2/24)/voltage + 0.3*cur_rand;break;
				case 22: current = 200/31/(2.3/24)/voltage + 0.3*cur_rand;break;
				case 23: current = 200/31/(2.4/24)/voltage + 0.3*cur_rand;break;
			};break;
		 	case 2:
			switch (hour)
			{
				case  0: current = 150/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case  1: current = 150/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  2: current = 150/31/(0.3/24)/voltage + 0.3*cur_rand;break;
				case  3: current = 150/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  4: current = 150/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  5: current = 150/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  6: current = 150/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  7: current = 150/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  8: current = 150/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  9: current = 150/31/(1.0/24)/voltage + 0.3*cur_rand;break;
				case 10: current = 150/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 11: current = 150/31/(0.4/24)/voltage + 0.3*cur_rand;break;
				case 12: current = 150/31/(1.1/24)/voltage + 0.3*cur_rand;break;
				case 13: current = 150/31/(1.3/24)/voltage + 0.3*cur_rand;break;
				case 14: current = 150/31/(0.9/24)/voltage + 0.3*cur_rand;break;
				case 15: current = 150/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 16: current = 150/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 17: current = 150/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 18: current = 150/31/(1.5/24)/voltage + 0.3*cur_rand;break;
				case 19: current = 150/31/(1.6/24)/voltage + 0.3*cur_rand;break;
				case 20: current = 150/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case 21: current = 150/31/(2.2/24)/voltage + 0.3*cur_rand;break;
				case 22: current = 150/31/(2.3/24)/voltage + 0.3*cur_rand;break;
				case 23: current = 150/31/(2.4/24)/voltage + 0.3*cur_rand;break;
			};break;
			case 3:
			switch (hour)
			{
				case  0: current = 180/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case  1: current = 180/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  2: current = 180/31/(0.3/24)/voltage + 0.3*cur_rand;break;
				case  3: current = 180/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  4: current = 180/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  5: current = 180/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  6: current = 180/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  7: current = 180/31/(0.2/24)/voltage + 0.3*cur_rand;break;
				case  8: current = 180/31/(0.5/24)/voltage + 0.3*cur_rand;break;
				case  9: current = 180/31/(1.0/24)/voltage + 0.3*cur_rand;break;
				case 10: current = 180/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 11: current = 180/31/(0.4/24)/voltage + 0.3*cur_rand;break;
				case 12: current = 180/31/(1.1/24)/voltage + 0.3*cur_rand;break;
				case 13: current = 180/31/(1.3/24)/voltage + 0.3*cur_rand;break;
				case 14: current = 180/31/(0.9/24)/voltage + 0.3*cur_rand;break;
				case 15: current = 180/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 16: current = 180/31/(0.7/24)/voltage + 0.3*cur_rand;break;
				case 17: current = 180/31/(0.8/24)/voltage + 0.3*cur_rand;break;
				case 18: current = 180/31/(1.5/24)/voltage + 0.3*cur_rand;break;
				case 19: current = 180/31/(1.6/24)/voltage + 0.3*cur_rand;break;
				case 20: current = 180/31/(2.0/24)/voltage + 0.3*cur_rand;break;
				case 21: current = 180/31/(2.2/24)/voltage + 0.3*cur_rand;break;
				case 22: current = 180/31/(2.3/24)/voltage + 0.3*cur_rand;break;
				case 23: current = 180/31/(2.4/24)/voltage + 0.3*cur_rand;break;
			};break; 
	//	cout<<voltage<<endl;
	//	cout<<current<<endl;
	}
	cout<<year<<mon<<day<<hour<<min<<endl;
	dianliang += voltage*current/60;
	cout<<"voltage:"<<voltage<<endl;
	cout<<"current:"<<current<<endl;
	cout<<"dianliang:"<<dianliang<<endl;
	
	//
	
	//
	
	
	min++;
	if(min==60)
	{
		min = 0;
		hour ++;
	}
	if(hour==24)
	{
		hour = 0;
		day++;
	}
	if(mon==13) { mon =1;}
	if((mon==10)&&(day==32)) { day = 0;mon++;}
	if((mon==11)&&(day==31)) { day = 0;mon++;}
	if((mon==12)&&(day==32)) { day = 0;mon++;}
	if((mon==1)&&(day==31))  { day = 0;mon++;}
	if((mon==2)&&(day==31))  { day = 0;mon++;}
	if((mon==3)&&(day==31))  { day = 0;mon++;}
	
	if(mon==4) break;
	
	}
	return 0;
} 
