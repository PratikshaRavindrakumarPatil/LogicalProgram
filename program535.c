/*

Enter the number:
12
sum of non factor is:50
*/


#include<stdio.h>

int SumNonFactor(int iNo)
{
	static int iCnt=1;
	static int iSum=0;
	
	if(iCnt<iNo)
	{
		if((iNo%iCnt)!=0)
		{
			iSum=iSum+iCnt;
		}
		iCnt++;
		
		SumNonFactor(iNo);
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
	printf("sum of non factor is:%d\n",iRet);
	
	return 0;
}