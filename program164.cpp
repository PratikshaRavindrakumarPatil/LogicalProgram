/*
OUTPUT:

Enter the string:Hello
H
e
l
l
o
*/
#include<iostream>
using namespace std;

void Display(char str[])
{
	while(*str!='\0')
	{
		cout<<*str<<endl;
		str++;
	}
}

int main()
{
	
	char Arr[20];
	cout<<"Enter the string:";
	scanf("%s",Arr);
	
	Display(Arr);
	return 0;
}