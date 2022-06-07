/*
OUTPUT:

Enter the string:Jay Ganesh
J
a
y

G
a
n
e
s
h

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
	cin.getline(Arr,20);
	
	Display(Arr);
	return 0;
}