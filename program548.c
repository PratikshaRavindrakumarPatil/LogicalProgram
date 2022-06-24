/*

Enter the number:
234
Multiplication of digit is:24

Enter the number:
1212
Multiplication of digit is:4

*/


#include<stdio.h>
#include<stdbool.h>

int Display(int iNo)
{
	int iDigit=0;
	static int iMult=1;
	if(iNo!=0)
	{
		iDigit=iNo%10;
		iMult=iMult*iDigit;
		iNo=iNo/10;
		
		Display(iNo);
	}
	
	return iMult;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=Display(iValue);
	printf("Multiplication of digit is:%d\n",iRet);
	
	return 0;
}