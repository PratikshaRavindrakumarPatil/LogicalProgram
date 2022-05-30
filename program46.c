//Accept N number from user and accept one another number 
//as NO check whether NO is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
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
	
	int iSize=0,iValue=0;
	int *iPtr=NULL;
	register int iCnt=0;
	bool bRet=false;
	
	printf("Enter the number of element:\n");
	scanf("%d",&iSize);
	
	iPtr=(int*)malloc(sizeof(int)*iSize);
	printf("Enter the elements:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d element:",iCnt+1);
		scanf("%d",&iPtr[iCnt]);
	}
	
	printf("Enter the element that you want to search:\n");
	scanf("%d",&iValue);
	
	bRet=Check(iPtr,iSize,iValue);
	
	if(bRet==true)
	{
		printf("%d is present in this array.\n",iValue);
	}
	else
	{
		printf("%d is not present in this array.\n",iValue);
	}
	
	
	free(iPtr);

	
	return 0;
}


