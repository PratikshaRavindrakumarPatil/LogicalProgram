//Accept N number from user and return frequency
//of even numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
	register int iCnt=0;
	int iFrequency=0;
	printf("\nNumber are multiples of 11 are:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iFrequency++;
		}
	}
	
	return iFrequency;
}

int main()
{
	int iSize=0,iRet=0;
	int *iPtr=NULL;
	register int iCnt=0;
	
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	iPtr=(int*)malloc(sizeof(int)*iSize);
	
	printf("\nEnter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		
		printf("Enter %d number:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	
	iRet=CountEven(iPtr,iSize);
	printf("The total even number are:%d\n",iRet);
	
	free(iPtr);
	
	return 0;
}