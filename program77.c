#include<stdio.h>
#include<stdlib.h>
int CheckOccurance(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	int iCount=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iNo==Arr[iCnt])
		{
			iCount++;
		}
	}
	return iCount;
}

int main()
{
	int iSize=0,iRet=0,iValue=0;
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
	
	printf("Enter the number to calculate frequency:");
	scanf("%d",&iValue);
	
	iRet=CheckOccurance(iptr,iSize,iValue);
	printf("Total count %d is:%d\n",iValue,iRet);
	
	
	free(iptr);
	
	return 0;
}