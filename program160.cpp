/*
OUTPUT:


H
e
l
l
o
*/

#include<iostream>
using namespace std;

int main()
{
	int iCnt=0;
	char Arr[]="Hello";
	
	for(iCnt=0;Arr[iCnt]!='\0';iCnt++)
	{
		cout<<Arr[iCnt]<<endl;
	}
	return 0;
}