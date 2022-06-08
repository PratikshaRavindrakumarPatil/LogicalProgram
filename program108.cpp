/*
OUTPUT:

Enter the string:2
It is digit

Enter the string:m
It is alphabate

Enter the string:P
It is alphabate
*/
#include<iostream>
using namespace std;

bool CheckDigit(char str)
{
	
	if((str>=0)&&(str<=9))
	{
		return true;
	}		
	else if(((str>='a')&&(str<='z'))||((str>='A')&&(str<='Z')))
	{
		return false;
	}
}

int main()
{
	char ch='\0';
	bool bRet=false;
	
	cout<<"Enter the string:";
	cin>>ch;
	
	bRet=CheckDigit(ch);
	
	if(bRet==true)
	{
		cout<<"It is digit"<<endl;
	}
	else
	{
		cout<<"It is alphabate"<<endl;
	}
	
	return 0;
}