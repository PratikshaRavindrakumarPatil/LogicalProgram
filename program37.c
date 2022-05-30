//Accept N number from user and display all such elements
//divisible by 5.


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	register int iCnt=0;
	printf("\nNumber which are divisible by 5 are:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%5)==0)
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
	
	iPtr=(int *)malloc(iSize*sizeof(int));
	
	printf("\nEnter the element:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter %d element:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	
	
	Display(iPtr,iSize);
	free(iPtr);
	
	return 0;
	
}