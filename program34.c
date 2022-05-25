#include<stdio.h>
#include<stdbool.h>


int SumFactor(int iNo)
{
	int iCnt=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	
	return iSum;
}

bool CheckPerfectNum(int iNo)
{
	int iAns=0;
	iAns=SumFactor(iNo);
	if(iAns==iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int main()
{
	int iValue=0;
	bool bRet=false;
	printf("Enter the number:");
	scanf("%d",&iValue);
	
	bRet=CheckPerfectNum(iValue);
	
	if(bRet==true)
	{
		printf("%d is perfect number\n",iValue);
	}
	else
	{
		printf("%d is not perfect number.",iValue);
	}
	return 0;
}