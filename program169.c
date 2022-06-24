/*

Multiplication is:231
Multiplication is:1.21


*/
#include<iostream>
using namespace std;


template<class T>
T Maximum(T Arr[],int iSize)
{
	int iCnt=0;
	T Sum;
	T Max;
	Max=Arr[0];
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Max<Arr[iCnt])
		{
			Max=Arr[iCnt];
		}
	}
	return Max;
}

int main()
{
	int Arr[]={11,21,51,101,121};
	int iRet=Maximum(Arr,5);
	printf("Maximum number is:%d\n",iRet);



	
	return 0;
}