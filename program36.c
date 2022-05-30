//Accept N number from user and return difference between
//summation of even elemnts and summation of odd elements.


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	register int iCnt=0;
	int iSumEven=0,iSumOdd=0;
	
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iSumEven=iSumEven+Arr[iCnt];
		}
		else
		{
			iSumOdd=iSumOdd+Arr[iCnt];
		}
	}
	
	
	return(iSumEven-iSumOdd) ;
}

int main()
{
	int iSize=0,iCnt=0;
	int *iPtr=NULL;
	int iRet=0;
	
	
	printf("Enter the number of elements:\n");
	scanf("%d",&iSize);
	
	iPtr=(int*)malloc(iSize*sizeof(int));
	if(iPtr==NULL)
	{
		printf("Unable to allocate memory.\n");
		return -1;
	}
	
	printf("Enter the %d element\n\n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d element:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	
	
	iRet=Difference(iPtr,iSize);
	printf("\n");
	printf("Difference is:%d\n",iRet);
	free(iPtr);
	
	return 0;
}	
