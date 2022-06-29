#include<stdio.h>

int Summation(int Brr[],int iLength)
{
	int iCnt=0;
	int iSum=0;
	
	while(iCnt<iLength)
	{
		iSum=iSum+Brr[iCnt];
		iCnt++;
	}
	
	return iSum;
}


int main()
{
	int isize=5;
	int Arr[]={10,20,30,40,50};
	int iRet=0;
	
	iRet=Summation(Arr,5);
	printf("Addition of all element is:%d\n",iRet);
	
	return 0;
}