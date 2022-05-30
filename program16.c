//Write program which accept number from user and display its multiplication of factors

#include<stdio.h>
int MultiFact(int iNo)
{
	int iCnt=0;
	int iFact=1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iFact=iFact*iCnt;
			
		}
	}
	
	return iFact;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=MultiFact(iValue);
	printf("Multiplication of given number factor is:%d",iRet);
	
	return 0;
}