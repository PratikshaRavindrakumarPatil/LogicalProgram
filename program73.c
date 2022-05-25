#include<stdio.h>
#include<stdlib.h>

int DisplaySum(int Arr[],int iLength)
{
	register int iCnt=0;
	int iSum=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	
	return iSum;
}

int main()
{
	int iSize=0,iRet=0;
	int *iPtr=NULL;
	register int iCnt=0;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	iPtr=(int *)malloc(iSize*sizeof(int));
	
	printf("\nEnter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iPtr[iCnt]);
	}
	
	iRet=DisplaySum(iPtr,iSize);
	printf("Addition is:%d",iRet);
	
	free(iPtr);

	return 0;
}
