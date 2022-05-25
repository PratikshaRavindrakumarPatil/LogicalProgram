#include<stdio.h>
#include<stdlib.h>
int DisplaySum(int Arr[],int iLength)
{
	int iSum=0;
	register int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	
	return iSum;
}
int main()
{
	int iSize=0,iRet=0;
	int *iptr=NULL;
	register int iCnt=0;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	iptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iptr[iCnt]);
	}
	
	iRet=DisplaySum(iptr,iSize);
	printf("Summation is:%d\n",iRet);
	
	free(iptr);
	
	return 0;
}