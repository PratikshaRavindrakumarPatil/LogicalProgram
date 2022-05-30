//Accept number from user print number is even or not

#include<stdio.h>
//#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckEven(int iNo)
{
	if((iNo%2)==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	bRet=CheckEven(iValue);
	if(bRet==1)
	{
		printf("%d is even number.\n",iValue);
	}
	else
	{
		printf("%d is odd number.\n",iValue);
	}
	
	return 0;
}