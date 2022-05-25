#include<stdio.h>
#include<stdbool.h>

bool CheckAmstrong(int iNo)
{
	int iTemp=0;
	iTemp=iNo;
	int iDigit=0;
	int iCnt=0;
	int iCount=0;
	int iMult=1;
	int iSum=0;
	
	while(iNo>0)
	{
		
		iDigit=iNo%10;
		iCount++;
		iMult=1;
		for(iCnt=1;iCnt<=iCount;iCnt++)
		{
			
			iMult=iMult*iDigit;
			
		}
		
		iSum=iSum+iMult;
		iNo=iNo/10;
	}
	
	if(iTemp==iSum)
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
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
	bRet=CheckAmstrong(iValue);
	if(bRet==true)
	{
		printf("is amstrong number.\n");
	}
	else
	{
		printf("is not amstrong number.\n");
	}
	return 0;
}