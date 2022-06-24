/*
Addition is:305
Addition is:64.7

*/
#include<iostream>
using namespace std;

template<class T>
T ArraySum(T Arr[],int iSize)
{
	int iCnt=0;
	T Sum;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		Sum=Sum+Arr[iCnt];
	}
	return Sum;
}

int main()
{
	int Arr[]={11,21,51,101,121};
	int iRet=ArraySum(Arr,5);
	cout<<"Addition is:"<<iRet<<endl;


	float Brr[]={11.1,20.1,32.4,1.1};
	float fRet=ArraySum(Brr,4);
	cout<<"Addition is:"<<fRet<<endl;
	
	return 0;
}