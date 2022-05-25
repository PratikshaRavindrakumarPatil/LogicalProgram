#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LastOccurence(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	
	for(iCnt=(iLength-1);iCnt>=0;iCnt--)
	{
		if(Arr[iCnt]==iNo)
		{
				
			break;
		}
		
	}
	return iCnt;
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
	
	iRet=LastOccurence(iptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("%d is not present in this array.\n",iValue);
	}
	else
	{
		printf("%d is last occured at %d index in array.\n",iValue,iRet);
	}
	
	free(iptr);
	
	return 0;
}