#include<stdio.h>
#include<stdlib.h>


long Display(int Arr[],int iLength)
{
	int iCnt=0;
	long iMult=1;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(((Arr[iCnt]%2)!=0))
		{
			iMult=iMult*Arr[iCnt];
		}
	}
	
	return iMult;
}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;
	long iRet=0;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(sizeof(int)*iSize);
	printf("Enter the number:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Display(ptr,iSize);
	printf("Multiplication of odd number is:%ld",iRet);
	
	return 0;
}