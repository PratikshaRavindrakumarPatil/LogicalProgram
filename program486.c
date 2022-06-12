/*
OUTPUT:

ENter the number:121
121 is palindrome

ENter the number:123
123 is not palindrome



*/
#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
	int iDigit=0;
	int iRev=0;
	int temp=0;
	temp=iNo;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		
		iRev=iRev*10+iDigit;
		
		iNo=iNo/10;
	}
	
	if(temp==iRev)
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
	
	printf("ENter the number:");
	scanf("%d",&iValue);
	
	bRet=CheckPalindrome(iValue);
	
	if(bRet==true)
	{
		printf("%d is palindrome\n",iValue);
	}
	else
	{
		printf("%d is not palindrome\n",iValue);
	}
	
	
	return 0;
}