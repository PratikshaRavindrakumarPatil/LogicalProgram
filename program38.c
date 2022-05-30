//Accept number from user and display all such elements
//which are even and divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	register int iCnt=0;
	printf("\nNumber is even and divisible by 5 is:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(((Arr[iCnt]%2)==0) &&((Arr[iCnt]%5)==0))
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
	
	printf("Enter the number of elements:\n");
	scanf("%d",&iSize);
	
	iPtr=(int *)malloc(iSize*sizeof(int));
	
	printf("\nEnter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d element:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	
	Display(iPtr,iSize);
	free(iPtr);
	
	return 0;
}