/*

Enter the count of number:
5
Enter the number:
11
21
31
21
21
Enter the that you want to search:
21
frequency of 21 is:3


*/
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength,int iNo)
{
	static int iCnt=0;
	static int iCount=0;
	
	
	if(iCnt<iLength)
	{
		if((Arr[iCnt]==iNo))
		{
			iCount++;
		}
		
		iCnt++;
		
		Display(Arr,iLength,iNo);
	}
	
	return iCount;
}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	register int iCnt=0;
	int iRet=0;
	int iValue=0;
	
	printf("Enter the count of number:\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(sizeof(int)*iSize);
	
	printf("Enter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the that you want to search:\n");
	scanf("%d",&iValue);
	
	iRet=Display(ptr,iSize,iValue);
	printf("frequency of %d is:%d\n",iValue,iRet);
	
	
	return 0;
}