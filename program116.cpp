/*
OUTPUT:

Marvellous Multi OS
Number of capital alphabate are:4

Enter the string:
asdkh
Number of capital alphabate are:0

Enter the string:
JAY GANESH21
Number of capital alphabate are:9

*/
#include<iostream>
using namespace std;
int CountCapital(char *str)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
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
	
	iRet=CountCapital(Arr);
	cout<<"Number of capital alphabate are:"<<iRet<<endl;
	
	return 0;
}