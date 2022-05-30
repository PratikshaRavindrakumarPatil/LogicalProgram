//Accept N number from user and accept one another number as No
//return frequency of No form it

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
	register int iCnt=0;
	int iFrequency=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			iFrequency++;
		}
		
	}
	
	return iFrequency;
}


int main()
{
	int iSize=0,iValue=0,iRet=0;
	int *iPtr=NULL;
	register int iCnt=0;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	iPtr=(int*)malloc(sizeof(int)*iSize);
	printf("Enter the elements:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d element:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	
	printf("Enter the element that you want to search:\n");
	scanf("%d",&iValue);
	
	iRet=Frequency(iPtr,iSize,iValue);
	printf("Frequency of %d is:%d",iValue,iRet);
	
	free(iPtr);

	return 0;
}