/*
OUTPUT:
Enter the string:JaY Ganesh
Length of string is:10
*/
#include<iostream>
using namespace std;

int strlenX(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		iCnt++;
		str++;
	
	}
	
	return iCnt;
}


int main()
{
	char Arr[30];
	int iRet=0;
	
	cout<<"Enter the string:";
	cin.getline(Arr,30);
	
	iRet=strlenX(Arr);
	cout<<"Length of string is:"<<iRet;
	return 0;
}