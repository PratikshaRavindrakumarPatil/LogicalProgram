#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Search(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
				
			break;
		}
		
	}
	if(iCnt==iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

int main()
{
	int iSize=0,iValue=0;
	int *iptr=NULL;
	register int iCnt=0;
	int iRet=0;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	

	
	iptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iptr[iCnt]);
	}
	
	printf("Enter the number that want to search you:");
	scanf("%d",&iValue);
	
	iRet=Search(iptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("%d is not present in this array.\n",iValue);
	}
	else
	{
		printf("%d is first occured at %d index in array.\n",iValue,iRet);
	}
	
	free(iptr);
	
	return 0;
}