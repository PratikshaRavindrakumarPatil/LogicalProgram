#include<stdio.h>
#include<stdlib.h>
int DisplayMax(int Arr[],int iLength)
{
	int iMax=Arr[0];
	register int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMax<Arr[iCnt])
		{
			iMax=Arr[iCnt];
		}
	}
	
	return iMax;
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
	
	iRet=DisplayMax(iptr,iSize);
	printf("Maximum number is:%d\n",iRet);
	
	free(iptr);
	
	return 0;
}