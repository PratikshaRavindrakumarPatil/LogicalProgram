#include<stdio.h>

int SumNonFactor(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)
		{
			iSum=iSum+iCnt;
		}
	}
	
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFactor(iValue);
	printf("Summation of non factor is:%d",iRet);
	
	return 0;
}