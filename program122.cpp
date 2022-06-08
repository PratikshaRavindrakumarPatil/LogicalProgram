/*
OUTPUT:

Enter the string:
Hello
Modified string is:HELLO

Enter the string:
MARVELLOUS
Modified string is:MARVELLOUS

Enter the string:
marvellous
Modified string is:MARVELLOUS

*/
#include<iostream>
using namespace std;
void Display(char *str)
{
	while(*str!='\0')
	{
		if(*str>='a'&&*str<='z')
		{
			*str=*str-32;
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