/*

Minimum number is:
11
Minimum number is:
1.1



*/
#include<iostream>
using namespace std;


template<class T>
T Minimum(T Arr[],int iSize)
{
	int iCnt=0;
	T Sum;
	T Min;
	Min=Arr[0];
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Min>Arr[iCnt])
		{
			Min=Arr[iCnt];
		}
	}
	return Min;
}

int main()
{
	int Arr[]={11,21,51,101,121};
	int iRet=Minimum(Arr,5);
	cout<<"Minimum number is:\n"<<iRet<<endl;


	float Brr[]={12.2,22.2,44.3,1.1};
	float fRet=Minimum(Brr,4);
	cout<<"Minimum number is:\n"<<fRet<<endl;
	
	return 0;
}