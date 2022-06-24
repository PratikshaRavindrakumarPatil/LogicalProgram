/*

Enter the count of number:
6
Enter the number:
11
2101
101
50
51
111
Enter the that you want to search:
51
51 is present


*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Display(int Arr[],int iLength,int iNo)
{
	static int iCnt=0;
	static bool flag=false;
	
	
	if(iCnt<iLength)
	{
		if((Arr[iCnt]==iNo))
		{
			flag=true;
		}
		
		iCnt++;
		
		Display(Arr,iLength,iNo);
	}
	
	
	if(flag==true)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	register int iCnt=0;
	bool bRet=false;
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
	
	bRet=Display(ptr,iSize,iValue);
	
	
	if(bRet==true)
	{
		printf("%d is present\n",iValue);
	}
	else
	{
		printf("%d is not present\n",iValue);
	}
	
	return 0;
}