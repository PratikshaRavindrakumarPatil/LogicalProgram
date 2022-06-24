/*
Enter the number:
1278
Maximum digit is:8

*/
#include<stdio.h>

int MaxDigit(int iNo)
{
	int iDigit=0;
	static int iMax=0;
	if(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		iNo=iNo/10;
		
		MaxDigit(iNo);
	}
	return iMax;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=MaxDigit(iValue);
	printf("Maximum digit is:%d\n",iRet);
	
	
	return 0;
}