/*
OUTPUT:

Enter the string:o
O

Enter the string:P
p

Enter the string:W
w

*/
#include<iostream>
using namespace std;

void CheckAlphabate(char str)
{
			
	if((str>='a')&&(str<='z'))
	{
		str=str-32;
		cout<<str<<endl;
	}
	else if((str>='A')&&(str<='Z'))
	{
		str=str+32;
		cout<<str<<endl;
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