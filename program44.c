//Accept N number from user and return 
//frequency of 11 from it


#include<stdio.h>
#include<stdlib.h>


int Count(int Arr[],int iLength)
{
	int iCnt=0,iNo=11;
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
	int iSize=0;
	int *iPtr=NULL;
	register int iCnt=0;
	int iRet=0;

	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	iPtr=(int*)malloc(sizeof(int)*iSize);
	
	printf("\nEnter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		
		printf("Enter %d number:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	

	
	
	iRet=Count(iPtr,iSize);
	printf("Frequency of 11 is:%d\n",iRet);

	free(iPtr);
	return 0;
}