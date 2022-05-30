//Accept N number from user and return difference 
// between frequency of even number and odd numbers


#include<stdio.h>
#include<stdlib.h>

int FrequencyDifference(int Arr[],int iLength)
{
	register int iCnt=0;
	int iEven=0,iOdd=0;
	printf("\nNumber are multiples of 11 are:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iEven++;
		}
		else
		{
			iOdd++;
		}
	}
	
	return(iEven-iOdd);
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
	
	iRet=FrequencyDifference(iPtr,iSize);
	printf("The differnce is:%d\n",iRet);
	
	
	free(iPtr);
	return 0;
}