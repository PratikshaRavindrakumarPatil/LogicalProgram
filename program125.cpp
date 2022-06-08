/*
OUTPUT:

Enter the string:
Marvellous Infosystem
White spaces are:1

Enter the string:
abc  edf  lk
White spaces are:5


Enter the string:
abcd
White spaces are:0

*/
#include<iostream>
using namespace std;
int Display(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if(*str==' ')
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
	int iRet=0;
	
	cout<<"Enter the string:"<<endl;
	cin.getline(Arr,30);
	iRet=Display(Arr);
	cout<<"White spaces are:"<<iRet<<endl;

	return 0;
}