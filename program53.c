//Accept N number from user and display 
//difference between largest and smallest number

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int iCnt=0;
	int iMax=Arr[0];
	int iMin=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMax<Arr[iCnt])
		{
			iMax=Arr[iCnt];
		}
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMin>Arr[iCnt])
		{
			iMin=Arr[iCnt];
		}
	}
	
	return(iMax-iMin);
	
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
	
	iRet=Difference(iPtr,iSize);
	printf("Differnce between maximum and minimum number is:%d\n",iRet);
	

	free(iPtr);
	return 0;
}