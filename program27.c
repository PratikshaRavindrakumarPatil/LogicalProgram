//Write program which accept number from 
//user and check whether it contains 0 in it not 


#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			 iCnt++;
		}
		iNo=iNo/10;	
	}
	if(iCnt>0)
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
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	bRet=CheckZero(iValue);
	if(bRet==true)
	{
		printf("%d contains zero.\n",iValue);
	}
	else
	{
		printf("%d is not contains zero.\n",iValue);
	}
	
	return 0;
}