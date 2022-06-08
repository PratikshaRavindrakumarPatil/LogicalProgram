/*
OUTPUT:

Enter the string:
Hello
Enter the character:
l
Given character occures:2 time

Enter the string:
Marvellous Infosystem
Enter the character:
s
Given character occures:3 time


*/
#include<iostream>
using namespace std;
int CountOccurence(char *str,char ch)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if(*str==ch || *str==ch+32 || *str==ch-32)
		{
			iCnt++;
		}
		str++;
	}
	
	return iCnt;
}

int main()
{
	char Arr[30];
	char cValue='\0';
	int iRet=0;
	
	cout<<"Enter the string:"<<endl;
	cin.getline(Arr,30);
	
	cout<<"Enter the character:"<<endl;
	cin>>cValue;
	
	iRet=CountOccurence(Arr,cValue);
	cout<<"Given character occures:"<<iRet<<" time";
	
	
	return 0;
}