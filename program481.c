/*
output:

Enter the size of array:
5
Enter the element:
3
2
2
2
1
majority number is:2


*/
#include<stdio.h>
#include<stdlib.h>


int Count(int Arr[],int iLength)
{
	int i=0,j=0,no=0;
	int count=0;
	int max=0;
	
	for(i=0;i<iLength;i++)
	{
		count=0;
		for(j=i;j<iLength;j++)
		{
			if(Arr[i]==Arr[j])
			{
				count++;
			}
		
		}
		if(count>max)
		{
			max=count;
			no=i;
		}
	}

	return Arr[no];
}

int main()
{
	int iSize=0;
	int *Ptr=NULL;
	register int iCnt=0;
	int iRet=0;
	
	printf("Enter the size of array:\n");
	scanf("%d",&iSize);
	
	Ptr=(int *)malloc(sizeof(int) *iSize);
	
	printf("Enter the element:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Ptr[iCnt]);
	}
	
	iRet=Count(Ptr,iSize);
	printf("majority number is:%d",iRet);
	return 0;
}