#include<iostream>
using namespace std;

bool Check(char *src,char *dest)
{
	
	while(*src!='\0')
	{
		if(*src != *dest)
		{
			break;
		}
		src++;
		dest++;
	}
	
	if(*dest=='\0')
	{
		return true;
	}
	else
	{
		return false;
	}
	
}


int main()
{
	char str1[40];
	char str2[40];
	bool bret=false;
	
	cout<<"Enter the first string:\n";
	cin.getline(str1,40);
	
	cout<<"Enter the second string:\n";
	cin.getline(str2,40);
	
	
	bret=Check(str1,str2);
	if(bret==true)
	{
		cout<<"given string is same\n";
	}
	else
	{
		cout<<"given string are differents\n";
	}
	
	return 0;
}