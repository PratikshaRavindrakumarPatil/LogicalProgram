/*

Enter the count of number:
6
Enter the number:
123
2334
258
900
5
56
123     258     900


*/
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
	static int iCnt=0;
	int iCount=0;
	int temp[iLength];
	
	if(iCnt<iLength)
	{
		temp[iCnt]=Arr[iCnt];
		iCount=0;
		
		while(Arr[iCnt]!=0)
		{
			iCount++;
			Arr[iCnt]=Arr[iCnt]/10;
			
		}
		if(iCount==3)
		{
			printf("%d\t",temp[iCnt]);	
		}
		iCnt++;
		
		Display(Arr,iLength);
	}
	
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
	
	Display(ptr,iSize);
	
	
	
	return 0;
}