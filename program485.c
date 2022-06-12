/*
OUTPUT:

Enter the number:11
11 is prime number

Enter the number:12
12 is not prime number


*/
#include<stdio.h>
#include<stdbool.h>
bool CheckPrime(int iNo)
{
	int iCnt=0;
	int Count=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			Count++;
		}
	}
	
	if(Count==2)
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
	
	bRet=CheckPrime(iValue);
	
	if(bRet==true)
	{
		printf("%d is prime number\n",iValue);
	}
	else
	{
		printf("%d is not prime number\n",iValue);
	}
	return 0;
}