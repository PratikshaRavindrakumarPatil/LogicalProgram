/*

Enter the number:
24365
Difference between summation of even digit and odd digit is:4

*/


#include<stdio.h>
#include<stdbool.h>

int Display(int iNo)
{
	int iDigit=0;
	static int iSumE=0,iSumO=0;
	if(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iSumE=iSumE+iDigit;
		}
		else
		{
			iSumO=iSumO+iDigit;
		}
		
		iNo=iNo/10;
		
		Display(iNo);
	}
	
	return (iSumE-iSumO);
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=Display(iValue);
	printf("Difference between summation of even digit and odd digit is:%d\n",iRet);
	
	return 0;
}