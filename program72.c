#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
	int iCnt=0;
	int EvenCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			EvenCnt++;
		}
	}
	
	return EvenCnt;
}

int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iRet=0;
	register int iCnt=0;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize *sizeof(int));
	
	printf("Enter the element:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=CountEven(ptr,iSize);
	printf("number of Event element are:%d\n",iRet);
	free(ptr);
	return 0;
}