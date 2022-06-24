/*
Enter the number:
12
sum of factor is:16


*/


#include<stdio.h>

int SumFactor(int iNo)
{
	static int iCnt=1;
	static int iSum=0;
	
	if(iCnt<iNo)
	{
		if(iNo%iCnt==0)
		{
			iSum=iSum+iCnt;
		}
		iCnt++;
		
		SumFactor(iNo);
	}
	
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=SumFactor(iValue);
	printf("sum of factor is:%d\n",iRet);
	
	return 0;
}