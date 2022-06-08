/*
OUTPUT:

Enter the string:
Marvellous
Enter the character:
e
Given character is present.


Enter the string:
Marvellous
Enter the character:
E
Given character is present.

Enter the string:
Marvellous
Enter the character:
P
Given character is not present.

*/
#include<iostream>
using namespace std;
bool Display(char *str,char ch)
{
	bool flag=false;
	
	while(*str!='\0')
	{
		if(*str==ch ||*str==ch+32||*str==ch-32)
		{
			flag=true;
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
	char cValue='\0';
	bool bRet=false;
	
	cout<<"Enter the string:"<<endl;
	cin.getline(Arr,30);
	
	cout<<"Enter the character:"<<endl;
	cin>>cValue;
	
	bRet=Display(Arr,cValue);
	
	if(bRet==true)
	{
		cout<<"Given character is present."<<endl;
	}
	else
	{
		cout<<"Given character is not present."<<endl;
	}
	
	
	
	return 0;
}