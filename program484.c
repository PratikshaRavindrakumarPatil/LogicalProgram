/*
OUTPUT:


Enter the number:153
153 is amstrong number


Enter the number:1634
1634 is amstrong number


Enter the number:121
121 is not amstrong number

*/
#include<stdio.h>
#include<stdbool.h>
bool CheckAmstrong(int iNo)
{
	int iCnt=0,Count=0;
	int temp=0;
	int iDigit=0;
	int iMult=1,iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	temp=iNo;
	while(iNo!=0)
	{
		Count++;
		iNo=iNo/10;
		
	}
	
	iNo=temp;
	
	while(iNo!=0)
	{
		iMult=1;
		iDigit=iNo%10;
		for(iCnt=1;iCnt<=Count;iCnt++)
		{
			iMult=iMult*iDigit;
		}
		
		iSum=iSum+iMult;
		iNo=iNo/10;
	}
	
	if(iSum==temp)
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
	
	bRet=CheckAmstrong(iValue);
	
	if(bRet==true)
	{
		printf("%d is amstrong number\n",iValue);
	}
	else
	{
		printf("%d is not amstrong number\n",iValue);
	}
	return 0;
}