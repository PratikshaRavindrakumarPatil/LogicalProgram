/*

Enter size of array:
5
Enter the number:
11
21
51
101
111
Sum of all element is:295



*/


#include<stdio.h>
#include<stdlib.h>

int Sum(int Arr[],int iLength)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	
	return iSum;
}

int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;
	int iRet=0;
	
	printf("Enter size of array:\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(sizeof(int)*iSize);
	
	printf("Enter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Sum(ptr,iSize);
	printf("Sum of all element is:%d\n",iRet);
	
	return 0;
}