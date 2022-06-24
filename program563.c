/*

Enter the count of number:
5
Enter the number:
11
21
51
101
121
Enter the that you want to search:
51
51 is present at index:2


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
			return -1;
		}
		
		iCnt++;
		
		Display(Arr,iLength,iNo);
	}
	
	return iCnt;
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
	printf("%d is present at index:%d\n",iValue,iRet);
	
	
	return 0;
}