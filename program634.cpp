#include<iostream>
using namespace std;

bool Check(char *src,char *dest)
{
	
	char *start=src;
	char *end=src;
	char temp;
	
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	
	
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<=end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		
		start++;
		end--;
	}
	
	if(*src==*dest)
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