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
	
	while(Arr[iCnt]!='\0')
	{
		cout<<Arr[iCnt]<<endl;
		iCnt++;
	}
	
	return 0;
}