//Accept N number from user and display all such numbers which 
//contains 3 digits in it.




#include<stdio.h>
#include<stdlib.h>

void DisplayNumber(int Arr[],int iLength)
{
    register int iCnt=0;
	int iDigitCnt=0,Brr[iLength];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		Brr[iCnt]=Arr[iCnt];
		iDigitCnt=0;
		
		while(Arr[iCnt]!=0)
		{	
			iDigitCnt++;
			Arr[iCnt]=Arr[iCnt]/10;
		}
			
		
		if(iDigitCnt==3)
		{
			printf("%d\t",Brr[iCnt]);
					
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
	printf("Enter the elements:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d element:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	
	DisplayNumber(iPtr,iSize);
	

	free(iPtr);
	return 0;
}