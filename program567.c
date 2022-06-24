/*



*/

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
	static int iCnt=0;
	static int iMin=0;
	
	
	if(iCnt<iLength)
	{
		if(Arr[iCnt]<iMin)
		{
			iMin=Arr[iCnt];
		}
		iCnt++;
		
		Minimum(Arr,iLength);
	}
	
	return iMin;
}


int main()
{
	int iSize=0;
	int *ptr=NULL;
	register int iCnt=0;
	int iRet=0;
	
	printf("Enter the count of number:\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(sizeof(int)*iSize);
	
	printf("Enter the number:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Minimum(ptr,iSize);
	printf("Minimum number is:%d\n",iRet);
	
	
	return 0;
}