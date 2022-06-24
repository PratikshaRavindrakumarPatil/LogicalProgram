/*
Enter the number:
1278
Maximum digit is:8

*/
#include<stdio.h>

int MinDigit(int iNo)
{
	int iDigit=0;
	static int iMin=0;
	int temp=iNo;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iMin=iDigit;
		break;
	}
	iNo=temp;
	iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		
		if(iDigit<iMin)
		{
			iMin=iDigit;
		}
		iNo=iNo/10;
		
		MinDigit(iNo);
	}
	return iMin;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=MinDigit(iValue);
	printf("Minimum digit is:%d\n",iRet);
	
	
	return 0;
}