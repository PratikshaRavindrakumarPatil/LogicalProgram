/*
OUTPUT:
Enter the string:
Jay Ganesh
Difference between small and capital character count:5

Enter the string:
marvellous
Difference between small and capital character count:10


Enter the string:
HELLO
Difference between small and capital character count:5
*/
#include<iostream>
using namespace std;
int CountCapital(char *str)
{
	int iCnt1=0,iCnt2=0;
	int iDiff=0;
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt1++;
		}
		else if((*str>='A')&&(*str<='Z'))
		{
			iCnt2++;
		}
		str++;
	}
	iDiff=iCnt1-iCnt2;
	
	if(iDiff<0)
	{
		iDiff=-iDiff;
	}
	
	return iDiff;
}

int main()
{
	char Arr[30];
	int iRet=0;
	
	cout<<"Enter the string:"<<endl;
	cin.getline(Arr,30);
	
	iRet=CountCapital(Arr);
	cout<<"Difference between small and capital character count:"<<iRet<<endl;
	
	return 0;
}