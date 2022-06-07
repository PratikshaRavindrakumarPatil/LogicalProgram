/*
OUTPUT:

Enter the string:Hello
Occurence of l is:2

*/
#include<iostream>
using namespace std;

int strlenX(char str[])
{
	int Count=0;
	while(*str!='\0')
	{
		if((*str=='l'))//||(*str!='L')
		{
			Count++;
		}
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
	cout<<"Occurence of l is:"<<iRet<<endl;
	return 0;
}