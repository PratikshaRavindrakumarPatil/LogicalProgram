/*

Enter the count of number:
5
Enter the number:
11
21
101
121
51
Maximum number is:121


*/
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	static int iCnt=0;
	static int iMax=0;
	
	
	if(iCnt<iLength)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
		iCnt++;
		
		Maximum(Arr,iLength);
	}
	
	return iMax;
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
	
	iRet=Maximum(ptr,iSize);
	printf("Maximum number is:%d\n",iRet);
	
	
	return 0;
}