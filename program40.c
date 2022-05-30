//Accept nN number from user and display all such 
//which are multiples of 11

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	printf("\nNumber are multiples of 11 are:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%11)==0)
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize=0;
	int *iPtr=NULL;
	register int iCnt=0;
	
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	iPtr=(int*)malloc(sizeof(int)*iSize);
	
	printf("\nEnter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d number:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	
	Display(iPtr,iSize);
	
	free(iPtr);
	return 0;
}