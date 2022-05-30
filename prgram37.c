//Accept N numbers from user and display all such elements which are 
//Divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	register int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%5)==0)
		{
			printf("%d\t",Arr[iCnt]);
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
	
	iPtr=(int *)malloc(sizeof(int)*iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Element %d:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	
	Display(iPtr,iSize);
	
	return 0;
}