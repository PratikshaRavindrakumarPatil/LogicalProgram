/*
output:

Enter the size of array:
4
Enter the number:
3
Enter the element:
2
4
5
1
Invalid combination
(3==2+1)


*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool check(int Arr[],int iLength,int iNo)
{
	int i=0,j=0;
	bool flag=false;
	
	for(i=0;i<iLength-1;i++)
	{
		for(j=(i+1);j<iLength;j++)
		{
			if(Arr[i]+Arr[j]==iNo)
			{
				flag=true;
			}
		}
	}
	
	
	
	if(flag==true)
	{
		return false;
	}
	else
	{
		return true;
	}
	
}

int main()
{
	int iSize=0;
	int *Ptr=NULL;
	register int iCnt=0;
	int iValue=0;
	bool bRet=false;
	
	printf("Enter the size of array:\n");
	scanf("%d",&iSize);
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	Ptr=(int *)malloc(sizeof(int) *iSize);
	
	printf("Enter the element:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
	
	bRet=check(Ptr,iSize,iValue);
	if(bRet==true)
	{
		printf("Valid combination\n");
	}
	else
	{
		printf("Invalid combination\n");
	}
	
	
	
	return 0;
}