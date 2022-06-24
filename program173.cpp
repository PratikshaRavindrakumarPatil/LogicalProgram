/*

Number is first occuered at index:3


*/
#include<iostream>
using namespace std;

template <class T>
int FirstOccurence(T *Brr,int iSize,T No)
{
	int iCnt=0;
	int Count=0;
	for(iCnt=0;iCnt<No;iCnt++)
	{
		if(Brr[iCnt]==No)
		{
			break;
		}
	}
	return iCnt;
	
}

int main()
{
	int Arr[]={10,30,60,50,20,10,100,90,10,10,40};
	int iRet=FirstOccurence(Arr,11,50);
	cout<<"Number is first occuered at index:"<<iRet<<endl;
	

	return 0;
}