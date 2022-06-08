/*
OUTPUT:

Enter the string:S
It is alphabate

Enter the string:\
It is not alphabate

Enter the string:p
It is alphabate
*/
#include<iostream>
using namespace std;

bool CheckAlphabate(char str )
{
	
	if(((str>='a')&&(str<='z'))||((str>='A')&&(str<='Z')))
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
	char ch='\0';
	bool bRet=false;
	
	cout<<"Enter the string:";
	cin>>ch;
	
	bRet=CheckAlphabate(ch);
	
	if(bRet==true)
	{
		cout<<"It is alphabate"<<endl;
	}
	else
	{
		cout<<"It is not alphabate"<<endl;
	}
	
	return 0;
}