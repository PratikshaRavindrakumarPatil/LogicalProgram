#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize=0;
	int *ptr=NULL;
	register int iCnt=0;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize *sizeof(int));
	
	printf("Enter the element:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Even element are:\n");
	DisplayEven(ptr,iSize);
	free(ptr);
	return 0;
}