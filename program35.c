//write a program which accept number from user and return diffrernce between
//summation of even digits and summation of odd digits.

#include<stdio.h>
int CountDifference(int iNo)
{
	int iDigit=0;
	int iSumE=0;
	int iSumO=0;
	int iDiff=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iSumE=iSumE+iDigit;
		}
		else
		{
			iSumO=iSumO+iDigit;
		}
		iNo=iNo/10;
	}
	
	iDiff=iSumE-iSumO;
	
	return iDiff;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=CountDifference(iValue);
	printf("Difference is:%d\n",iRet);
	return 0;
}