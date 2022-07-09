#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(((Arr[iCnt]%11)==0))
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
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(sizeof(int)*iSize);
	printf("Enter the number:\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iSize);
	
	
	return 0;
}