/*
OUTPUT:

Enter the number:1001
1001 is binary number


Enter the number:1234
1234 is not binary number



*/
#include<stdio.h>
#include<stdbool.h>

bool CheckBinary(int iNo)
{
	int iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit!=1)&&(iDigit!=0))
		{
			break;
		}
		iNo=iNo/10;
		
	}
	
	if(iNo==0)
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
	
	bRet=CheckBinary(iValue);
	
	if(bRet==true)
	{
		printf("%d is binary number\n",iValue);
	}
	else
	{
		printf("%d is not binary number\n",iValue);
	}
	
	
	return 0;
}