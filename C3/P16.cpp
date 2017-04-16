#include <iostream>
using namespace std;
int main()
{
	int i = 0 ;
	int c1=0,c2=0,c3=0;
	char str[10000];
	cin.getline(str,100);
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		c1++;
		if((str[i]<='z'&&str[i]>='a')||(str[i]<='Z'&&str[i])>='A')
		c2++;
		if(str[i]>='0'&&str[i]<='9')
		c3++; 
		cout<<str[i];
		i++;
	}
	cout<<"¿Õ¸ñ"<<c1<<endl;
	cout<<"character"<<c2<<endl;
	cout<<"number"<<c3<<endl;
	return 0; 
}
