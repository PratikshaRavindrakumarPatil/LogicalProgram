#include<stdio.h>

int DigitSum(int iNo)
{
	
	int iSum=0;
	
	while(iNo!=0)
	{
		iSum=iSum+(iNo%10);
		iNo=iNo/10;
	}
	return iSum;
}


int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=DigitSum(iValue);
	printf("Sum of all digit is:%d\n",iRet);
	
	return 0;
}