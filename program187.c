/*
Enter the number:
123
Addition of digit is:6

*/
#include<stdio.h>

int Sum(int iNo)
{
	int iDigit=0;
	static int iSum=0;
	if(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
		
		Sum(iNo);
	}
	
	return iSum;
	
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=Sum(iValue);
	printf("Addition of digit is:%d\n",iRet);
	
	
	return 0;
}