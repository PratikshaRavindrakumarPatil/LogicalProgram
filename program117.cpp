/*
OUTPUT:

Enter the string:
Marvallous
Number of small alphabate are:9

Enter the string:
MARVELLOUS
Number of small alphabate are:0

Enter the string:
jay ganesh
Number of small alphabate are:9

*/
#include<iostream>
using namespace std;
int CountCapital(char *str)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
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
	cout<<"Number of small alphabate are:"<<iRet<<endl;
	
	return 0;
}