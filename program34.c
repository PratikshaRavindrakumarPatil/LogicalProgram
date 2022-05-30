//Write program which accept number from and return multiplication
//of all digits

#include<stdio.h>

int MultiDigit(int iNo)
{
	int iDigit=0;
	int iMulti=1;
	while(iNo>0)
	{
		iDigit=iNo%10;
		iMulti=iMulti*iDigit;
		iNo=iNo/10;
	}
	return iMulti;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the number:\n");
	scanf("%d",&iValue);

	iRet=MultiDigit(iValue);
	printf("Multiplication of digits is:%d\n",iRet);
	
	return 0;
}