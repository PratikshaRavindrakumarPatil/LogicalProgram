#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
	int iCnt=0;
	int Count=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(((Arr[iCnt]%2)==0))
		{
			Count++;
		}
	}
	
	return Count;
}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;
	int iRet=0;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(sizeof(int)*iSize);
	printf("Enter the number:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Display(ptr,iSize);
	printf("Count of event number is:%d",iRet);
	
	return 0;
}