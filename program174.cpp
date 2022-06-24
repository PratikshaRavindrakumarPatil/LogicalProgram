/*

Number is first occuered at index:8


*/
#include<iostream>
using namespace std;

template <class T>
int LastOccurence(T *Brr,int iSize,T No)
{
	int iCnt=0;
	int Count=0;
	for(iCnt=No-1;iCnt>=0;iCnt--)
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
	int Arr[]={10,30,60,50,20,10,100,90,50,10,40};
	int iRet=LastOccurence(Arr,11,50);
	cout<<"Number is last occuered at index:"<<iRet<<endl;
	

	return 0;
}