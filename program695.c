#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Display(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	int Count=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			break;
		}
	}
	
	if(iCnt==iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;
	int iNo=0;
	bool bRet=false;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	printf("ENter the number that you want to search:\n");
	scanf("%d",&iNo);
	
	
	ptr=(int *)malloc(sizeof(int)*iSize);
	printf("Enter the number:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	
	bRet=Display(ptr,iSize,iNo);
	if(bRet==true)
	{
		printf("%d is present",iNo);
	}
	else
	{
		printf("%d is not present",iNo);
	}
	
	
	return 0;
}