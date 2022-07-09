

#include<stdio.h>

int SumNonFactor(int iNo)
{
	int iCnt=0;
	int iSumE=0,iSumO=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSumE=iSumE+iCnt;
		}
		else
		{
			iSumO=iSumO+iCnt;
		}
	}
	
	return (iSumE-iSumO);
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFactor(iValue);
	printf("Difference between summation of factor and non factor is:%d",iRet);
	
	return 0;
}