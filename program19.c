//write program to accept number from user and display its summation of non factors

#include<stdio.h>
int SumNonFactor(int iNo)
{
	int iCnt=0;
	int iNonFact=0;
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)
		{
			iNonFact=iNonFact+iCnt;
			
		}
	}

	return iNonFact;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFactor(iValue);
	printf("Summation of non factor of given number:%d",iRet);
	
	return 0;
}