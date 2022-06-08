/*
OUTPUT:

Enter the string:
Hello
Modified string is:hello


Enter the string:
Marvellous Infosystem
Modified string is:marvellous infosystem

Enter the string:
hello
Modified string is:hello

Enter the string:
HELLO
Modified string is:hello
*/
#include<iostream>
using namespace std;
void Display(char *str)
{
	while(*str!='\0')
	{
		if(*str>='A'&&*str<='Z')
		{
			*str=*str+32;
		}
		str++;
	}
}

int main()
{
	char Arr[30];
	
	cout<<"Enter the string:"<<endl;
	cin.getline(Arr,30);

	Display(Arr);
	cout<<"Modified string is:"<<Arr<<endl;
	
	return 0;
}