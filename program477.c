/*
output:

Enter the size of array:
5
Enter the element:
11
101
51
23
121
maximum number is:121


*/
#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[],int iLength)
{
	int iCnt=0;
	int iMax=0;
	
	iMax=Arr[0];
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
	}

	return iMax;
}

int main()
{
	int iSize=0;
	int *Ptr=NULL;
	register int iCnt=0;
	int iRet=0;
	
	printf("Enter the size of array:\n");
	scanf("%d",&iSize);
	
	Ptr=(int *)malloc(sizeof(int) *iSize);
	
	printf("Enter the element:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
	
	iRet=Maximum(Ptr,iSize);
	printf("maximum number is:%d",iRet);
	return 0;
}