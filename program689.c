

#include<stdio.h>

int Multiplication(int iNo)
{
	int iDigit=0;
	int iMult=1;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iMult=iMult*iDigit;
		iNo=iNo/10;
	}
	
	return iMult;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=Multiplication(iValue);
	printf("Multiplication of digit is:%d",iRet);
	
	return 0;
}