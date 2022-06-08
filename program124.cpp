/*
OUTPUT:


Enter the string:
Marve21llous11
2111

Enter the string:
He123llo9
1239

Enter the string:
marvellous


*/
#include<iostream>
using namespace std;
void Display(char *str)
{
	while(*str!='\0')
	{
		if(*str>='0'&&*str<='9')
		{
			cout<<*str;
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
	return 0;
}