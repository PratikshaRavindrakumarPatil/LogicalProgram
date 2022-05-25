#include<stdio.h>
#include<stdbool.h>


bool CheckAmstrong(int iNo)
{
	int iTemp=0;
	int iDigCnt=0;
	int iDigit=0,iSum=0;
	int iCnt=0,iMult=1;
	
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	iTemp=iNo;
	
	
	//Calculate number of digits
	while(iNo>0)
	{
		iDigCnt++;
		iNo=iNo/10;	
	}
	iNo=iTemp;
	while(iNo!=0)
	{
		iMult=1;
		iDigit=iNo%10;
		
		for(iCnt=1;iCnt<=iDigCnt;iCnt++)
		{
			
			iMult=iMult*iDigit;
		}
		
		iSum=iSum+iMult;
		iNo=iNo/10;
	}
	
	if(iSum==iTemp)
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
		printf("%d is amstrong number.\n",iValue);
	}
	else
	{
			printf("%d is not amstrong number.\n",iValue);
	}
	return 0;
}