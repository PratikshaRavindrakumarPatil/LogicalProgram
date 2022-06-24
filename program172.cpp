/*

Frequency of given number is:4



*/
#include<iostream>
using namespace std;

template <class T>
int CountFrequency(T *Brr,int iSize,T No)
{
	int iCnt=0;
	int Count=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Brr[iCnt]==No)
		{
			Count++;
		}
	}
	return Count;
	
}

int main()
{
	int Arr[]={10,30,60,50,20,10,100,90,10,10,40};
	int iRet=CountFrequency(Arr,11,10);
	cout<<"Frequency of given number is:"<<iRet<<endl;
	

	return 0;
}