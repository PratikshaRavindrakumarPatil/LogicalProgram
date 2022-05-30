//Accept N number from user and return product of all odd elements


#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
	int iCnt=0;
	int iPro=1;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)!=0)
		{
			iPro=iPro*Arr[iCnt];
		}
	}
	return iPro;
}

int main()
{
	
	int iSize=0,iRet=0;
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
	
	iRet=Product(iPtr,iSize);
	printf("Product of odd number is:%d\n",iRet);

	free(iPtr);
	
	return 0;
}
