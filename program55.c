//Accept N number from user and display summation
//of digits of each number

#include<stdio.h>

#include<stdlib.h>

void DigitSum(int Arr[],int iLength)
{
	register int iCnt=0;
	int iDigit=0,iSum=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=0;
		while(Arr[iCnt]!=0)
		{
			iDigit=Arr[iCnt]%10;
			iSum=iSum+iDigit;
			Arr[iCnt]=Arr[iCnt]/10;
		}
		printf("%d\t",iSum);
	}
		
}

int main()
{
	int iSize=0;
	register int iCnt=0;
	int *iPtr=NULL;
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	iPtr=(int*)malloc(sizeof(int)*iSize);

	printf("Enter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d number:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	
	
	DigitSum(iPtr,iSize);
	
	free(iPtr);
	return 0;
}