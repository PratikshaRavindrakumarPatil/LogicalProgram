/*
OUTPUT:

Enter the string:
Hello
Reverse string is:olleH


Enter the string:
Jay Ganesh121
Reverse string is:121hsenaG yaJ
*/
#include<iostream>
using namespace std;
void Reverse(char *str)
{
	char *start=str;
	char *end=str;
	char temp='\0';
	
	while(*end!='\0')
	{
		end++;
		str++;
	}
	end--;
	
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
	
}

int main()
{
	char Arr[30];
	bool bRet=false;
	
	cout<<"Enter the string:"<<endl;
	cin.getline(Arr,30);
	
	Reverse(Arr);
	cout<<"Reverse string is:"<<Arr<<endl;
	
	
	return 0;
}