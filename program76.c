#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],int iLength)
{
	int iMin=Arr[0];
	register int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMin>Arr[iCnt])
		{
			iMin=Arr[iCnt];
		}
	}
	
	return iMin;
}
int main()
{
	int iSize=0,iRet=0;
	int *iptr=NULL;
	register int iCnt=0;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	iptr=(int*)malloc(sizeof(int)*iSize);
	
	printf("Enter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iptr[iCnt]);
	}
	
	iRet=Minimum(iptr,iSize);
	printf("Minimun number:%d\n",iRet);
	
	free(iptr);
	
	return 0;
}