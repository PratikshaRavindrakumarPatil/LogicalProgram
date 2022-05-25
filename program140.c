/*
output:

Enter the count of number:4
Enter the number:
11
21
51
101
Summation is:184


*/
#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iLength)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	
	return iSum;
}


int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *Ptr=NULL;
	
	printf("Enter the count of number:");
	scanf("%d",&iSize);
	
	Ptr=(int *)malloc(sizeof(int)*iSize);
	printf("Enter the number:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
	
	iRet=Summation(Ptr,iSize);
	printf("Summation is:%d\n",iRet);
	return 0;
}