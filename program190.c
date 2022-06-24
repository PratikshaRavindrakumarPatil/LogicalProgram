/*

Enter the number:
234
Multiplication of digit is:24

*/
#include<stdio.h>

int Mult(int iNo)
{
	int iDigit=0;
	static int iMult=1;
	if(iNo!=0)
	{
		iDigit=iNo%10;
		iMult=iMult*iDigit;
		iNo=iNo/10;
		
		Mult(iNo);
	}
	
	return iMult;
	
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=Mult(iValue);
	printf("Multiplication of digit is:%d\n",iRet);
	
	
	return 0;
}