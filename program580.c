#include<stdio.h>

int Summation(int Brr[],int iLength)
{
	
	static int iSum=0;
	
	if(iLength>0)
	{
		iLength--;
		iSum=iSum+Brr[iLength];
		Summation(Brr,iLength);
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