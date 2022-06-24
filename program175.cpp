/*

Before reversing:
10      30      60      50      20      10      100     90      50      10      40      After reversing:
40      10      50      90      100     10      20      50      60      30      10  


*/
#include<iostream>
using namespace std;

template <class T>
int Reverse(T *Brr,int iSize)
{	
	int iCnt=0;
	
	for(iCnt=iSize-1;iCnt>=0;iCnt--)
	{
		cout<<Brr[iCnt]<<"\t";
	}
		
	
}

int main()
{
	int Arr[]={10,30,60,50,20,10,100,90,50,10,40};
	
	cout<<"Before reversing:"<<endl;
	
	for(int iCnt=0;iCnt<11;iCnt++)
	{
		cout<<Arr[iCnt]<<"\t";
	}
	cout<<"After reversing:"<<endl;
	Reverse(Arr,11);
	
	

	return 0;
}