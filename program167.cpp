/*
OUTPUT:

Enter the string:Jay Ganesh
Length of String is:10

*/
#include<iostream>
using namespace std;

int strlenX(char str[])
{
	int Count=0;
	while(*str!='\0')
	{
		Count++;
		str++;
		
	}
	return Count;
}

int main()
{
	
	char Arr[20];
	int iRet=0;
	
	cout<<"Enter the string:";
	cin.getline(Arr,20);
	
	iRet=strlenX(Arr);
	cout<<"Length of String is:"<<iRet<<endl;
	return 0;
}