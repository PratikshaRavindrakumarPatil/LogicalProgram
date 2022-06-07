/*
OUTPUT:
Enter the string:JayGanesh
J
a
y


*/

#include<iostream>
using namespace std;

void Display(char *str)
{
	while(*str!='\0')
	{
		cout<<*str<<endl;
		str++;
	}
	
}

int main()
{
	char Arr[30];
	
	cout<<"Enter the string:";
	cin>>Arr;
	
	Display(Arr);
	
	return 0;
}
