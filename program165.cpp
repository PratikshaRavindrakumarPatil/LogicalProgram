/*
OUTPUT:

Enter the string:Hello World
H
e
l
l
o

W
o
r
l
d

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
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	return 0;
}