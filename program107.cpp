/*
OUTPUT:

Enter the string:M
It is capital alphabate

Enter the string:p
It is small alphabate

*/
#include<iostream>
using namespace std;

bool CheckAlphabate(char str)
{
	
	if((str>='A')&&(str<='Z'))
	{
		return true;
	}		
	else if((str>='a')&&(str<='z'))
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
		cout<<"It is capital alphabate"<<endl;
	}
	else
	{
		cout<<"It is small alphabate"<<endl;
	}
	
	return 0;
}