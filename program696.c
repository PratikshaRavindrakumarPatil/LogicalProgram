#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength,int iStart,int iEnd)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(((Arr[iCnt])>iStart) && ((Arr[iCnt])<iEnd))
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
	
}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;
	int start=0,end=0;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(sizeof(int)*iSize);
	printf("Enter the number:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the range:\n");
	scanf("%d%d",&start,&end);
	
	Display(ptr,iSize,start,end);
	
	
	return 0;
}