/*
OUTPUT:

Enter the string:
Marvellous
Modified string is:mARVELLOUS

Enter the string:
MARVELLOUS
Modified string is:marvellous

Enter the string:
mervellous
Modified string is:MERVELLOUS

*/
#include<iostream>
using namespace std;
void Toggle(char *str)
{
	while(*str!='\0')
	{
		if(*str>='A'&&*str<='Z')
		{
			*str=*str+32;
		}
		else if(*str>='a'&&*str<='z')
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

	Toggle(Arr);
	cout<<"Modified string is:"<<Arr<<endl;	
	return 0;
}