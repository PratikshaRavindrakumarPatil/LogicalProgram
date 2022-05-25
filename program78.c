#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	bool bFlag=false;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			bFlag=true;
			break;
		}
		
	}
	return bFlag;
}

int main()
{
	int iSize=0,iValue=0;
	int *iptr=NULL;
	register int iCnt=0;
	bool bRet=false;
	
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
	
	bRet=Search(iptr,iSize,iValue);
	if(bRet==true)
	{
		printf("%d is present in this array.\n",iValue);
	}
	else
	{
		printf("%d is not present in this array.\n",iValue);
	}
	
	free(iptr);
	
	return 0;
}