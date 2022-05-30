//Accept N number from user and return largest number


#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
	int iCnt=0;
	int iMin=Arr[0];
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
	
	iRet=Minimum(iPtr,iSize);
	
	printf("Minimum number is:%d\n",iRet);

	free(iPtr);
	return 0;
}