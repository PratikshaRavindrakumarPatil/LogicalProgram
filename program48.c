//Accept N number from user and accept one another number 
//as NO,return index of last occurrence of that number NO

#include<stdio.h>
#include<stdlib.h>

int LastOccurrence(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	for(iCnt=(iLength-1);iCnt>=0;iCnt--)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	if(iCnt==iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}


int main()
{
	
	int iSize=0,iValue=0;
	int *iPtr=NULL;
	register int iCnt=0;
	int iRet=0;
	
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
	
	iRet=LastOccurrence(iPtr,iSize,iValue);
	if(iRet==-1)
	{
		printf("There is no such number.\n");
	}
	else
	{
		printf("%d is last occured at index %d.\n",iValue,iRet);
	}

	free(iPtr);
	
	return 0;
}
