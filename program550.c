/*

Enter the count of number:
5
Enter the number:
10
20
30
40
50
Summation of all number is:150


*/
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
	static int iCnt=0;
	static int iSum=0;
	
	if(iCnt<iLength)
	{
		iSum=iSum+Arr[iCnt];
		iCnt++;
		
		Display(Arr,iLength);
	}
	
	return iSum;
}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	register int iCnt=0;
	int iRet=0;
	
	printf("Enter the count of number:\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(sizeof(int)*iSize);
	
	printf("Enter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Display(ptr,iSize);
	printf("Summation of all number is:%d\n",iRet);
	
	
	return 0;
}