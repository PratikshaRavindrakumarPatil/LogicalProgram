//Accept N number from user and accept range,display all
//elemnts from that range


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength,int iStart,int iEnd)
{
	int iCnt=0;
	
	printf("Number lies between %d to %d are:\n",iStart,iEnd);
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iStart<(Arr[iCnt]) &&(Arr[iCnt]<iEnd))
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
	
}

int main()
{
	
	int iSize=0,iValue1,iValue2=0;
	int *iPtr=NULL;
	register int iCnt=0;
	
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	iPtr=(int*)malloc(sizeof(int)*iSize);
	printf("Enter the elements:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d element:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	
	printf("Enter the starting point:\n");
	scanf("%d",&iValue1);
	
	printf("Enter the ending point:\n");
	scanf("%d",&iValue2);
	
	Display(iPtr,iSize,iValue1,iValue2);

	free(iPtr);
	
	return 0;
}
