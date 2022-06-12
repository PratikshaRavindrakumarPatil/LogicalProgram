/*
output:

Enter the size of array:
5
Enter the element:
11
21
51
101
111
Addition is:295


*/
#include<stdio.h>
#include<stdlib.h>


int Sum(int Arr[],int iLength)
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
	int iSize=0;
	int *Ptr=NULL;
	register int iCnt=0;
	int iRet=0;
	
	printf("Enter the size of array:\n");
	scanf("%d",&iSize);
	
	Ptr=(int *)malloc(sizeof(int) *iSize);
	
	printf("Enter the element:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
	
	iRet=Sum(Ptr,iSize);
	printf("Addition is:%d",iRet);
	return 0;
}