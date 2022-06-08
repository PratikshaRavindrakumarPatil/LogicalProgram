/*
OUTPUT:

Enter the string:p
It is small alphabate


Enter the string:O
It is not small alphabate
*/
#include<iostream>
using namespace std;

bool CheckAlphabate(char str)
{
			
	if((str>='a')&&(str<='z'))
	{
		return true;
	}
	else if((str>='A')&&(str<='Z'))
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
	
	bRet=CheckAlphabate(ch);
	
	if(bRet==true)
	{
		cout<<"It is small alphabate"<<endl;
	}
	else
	{
		cout<<"It is not small alphabate"<<endl;
	}
	
	return 0;
}