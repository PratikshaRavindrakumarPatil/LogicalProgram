

#include<stdio.h>

int Difference(int iNo)
{
	int iDigit=0;
	int iSumE=0,iSumO=0;
	
	while(iNo!=0)
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
	
	return (iSumE-iSumO);
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=Difference(iValue);
	printf("Diffence between summation of even and odd digit:%d",iRet);
	
	return 0;
}