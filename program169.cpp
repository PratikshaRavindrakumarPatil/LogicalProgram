/*

Maximum number is:
121
Maximum number is:
44.3


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
	cout<<"Maximum number is:\n"<<iRet<<endl;


	float Brr[]={12.2,22.2,44.3,1.1};
	float fRet=Maximum(Brr,4);
	cout<<"Maximum number is:\n"<<fRet<<endl;
	
	return 0;
}