/*
OUTPUT:

Enter the string:P
P       Q       R       S       T       U       V       W 
X       Y       Z

Enter the string:h
h       g       f       e       d       c       b       a 

Enter the string:4

*/
#include<iostream>
using namespace std;

void CheckAlphabate(char str)
{		
	while((str>='A')&&(str<='Z'))
	{
		cout<<str<<"\t";
		str++;
	}
	
	while((str>='a')&&(str<='z'))
	{
		cout<<str<<"\t";
		str--;
	}
	
	
}

int main()
{
	char ch='\0';
	
	
	cout<<"Enter the string:";
	cin>>ch;
	
	CheckAlphabate(ch);
	
	
	return 0;
}