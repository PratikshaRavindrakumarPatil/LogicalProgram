/*

Enter the count of number:
5
Enter the number:
11
21
51
11
1
frequency of 11 is:2


*/
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
	static int iCnt=0;
	static int iCount=0;
	
	
	if(iCnt<iLength)
	{
		if((Arr[iCnt]==11))
		{
			iCount++;
		}
		
		iCnt++;
		
		Display(Arr,iLength);
	}
	
	return iCount;
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
	printf("frequency of 11 is:%d\n",iRet);
	
	
	return 0;
}