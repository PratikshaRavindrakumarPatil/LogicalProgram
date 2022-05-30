//Accept N number from user and check that numbers contains 11 in 
//it or not


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
	int iCnt=0,iNo=11;
	bool bFlag=false;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			bFlag=true;
			break;
		}
	}

	if(iCnt==iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int iSize=0;
	int *iPtr=NULL;
	register int iCnt=0;
	bool bRet=0;

	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	iPtr=(int*)malloc(sizeof(int)*iSize);
	
	printf("\nEnter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		
		printf("Enter %d number:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	

	
	
	bRet=Check(iPtr,iSize);
	if(bRet==true)
	{
		printf("11 is present.\n");
	}
	else
	{
		printf("11 is not present.\n");
	}

	free(iPtr);
	return 0;
}