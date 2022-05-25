#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	register int iCnt=0;
	printf("Elements of array:\n");
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
		
	}
}

int main()
{
	int iSize=0;
	int *iPtr=NULL;
	register int iCnt=0;
	
	printf("Enter number of element:");
	scanf("%d",&iSize);
	
	iPtr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter elements:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iPtr[iCnt]);
	}
	
	Display(iPtr,iSize);
	free(ptr);
	
	return 0;
}