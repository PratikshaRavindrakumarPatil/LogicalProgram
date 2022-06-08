/*
OUTPUT:

Enter the string:
sdfg
Given string not contains vowels


Enter the string:
Hello
Given string contains vowels



*/
#include<iostream>
using namespace std;
bool CheckVowel(char *str)
{
	bool flag=false;
	
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
		{
			flag=true;
		}
		else
		{
			flag=false;
		}
		str++;
	}
	if(flag==true)
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
	char Arr[30];
	bool bRet=false;
	
	cout<<"Enter the string:"<<endl;
	cin.getline(Arr,30);
	
	bRet=CheckVowel(Arr);
	
	if(bRet==true)
	{
		cout<<"Given string contains vowels"<<endl;
	}
	else
	{
		cout<<"Given string not contains vowels"<<endl;
	}
	
	return 0;
}