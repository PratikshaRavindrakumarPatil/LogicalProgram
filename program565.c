/*

Enter the count of number:
6
Enter the number:
11
21
2
1
3
22
Product of odd number is:693


*/
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
	static int iCnt=0;
	static int iMult=1;
	
	
	if(iCnt<iLength)
	{
		if((Arr[iCnt]%2)!=0)
		{
			iMult=iMult*Arr[iCnt];
		}
		
		iCnt++;
		
		Display(Arr,iLength);
	}
	
	return iMult;
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
	
	iRet=Display(ptr,iSize);
	printf("Product of odd number is:%d\n",iRet);
	
	
	return 0;
}