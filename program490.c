/*
OUTPUT:

Enter the number:6
6 is perfect number

Enter the number:12
12 is not perfect number




*/
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iSum=iSum+iCnt;
		}
	}
	
	if(iSum==iNo)
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
	
	bRet=CheckPerfect(iValue);
	
	if(bRet==true)
	{
		printf("%d is perfect number\n",iValue);
	}
	else
	{
		printf("%d is not perfect number\n",iValue);
	}
	
	
	return 0;
}