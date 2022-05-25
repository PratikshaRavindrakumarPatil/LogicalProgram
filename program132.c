/*

By using short hand operator

OUTPUT:
Enter the number:
4
Factorial is:24


*/
#include<stdio.h>

int Factorial(int iNo)
{
	int iFact=1;
	int iCnt=0;
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		iFact*=iCnt;
	}
	
	return iFact;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=Factorial(iValue);
	printf("Factorial is:%d\n",iRet);
	return 0;
}


