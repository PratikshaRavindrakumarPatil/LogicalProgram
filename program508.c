/*

Enter the number:
5
Factorial is:120

*/


#include<stdio.h>

int FactorialI(int iNo)
{
	int iFact=1;
	
	while(iNo>0)
	{
		iFact=iFact*iNo;
		iNo--;
	}
	
	return iFact;
	
}


int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=FactorialI(iValue);
	printf("Factorial is:%d\n",iRet);
	
	return 0;
}