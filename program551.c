/*

Enter the count of number:
5
Enter the number:
11
20
40
15
21
Difference between summation even and odd number is:13

*/
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
	static int iCnt=0;
	static int iSumE=0;
	static int iSumO=0;
	
	if(iCnt<iLength)
	{
		if(Arr[iCnt]%2==0)
		{
			iSumE=iSumE+Arr[iCnt];
		}
		else
		{
			iSumO=iSumO+Arr[iCnt];
		}
		iCnt++;
		
		Display(Arr,iLength);
	}
	
	return (iSumE-iSumO);
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
	printf("Difference between summation even and odd number is:%d\n",iRet);
	
	
	return 0;
}