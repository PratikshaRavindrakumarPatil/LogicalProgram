#include<stdio.h>
#include<stdbool.h>


void DisplayF(int iNo)
{
	int iCnt=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\n",iCnt);
	}
}

void DisplayB(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d\n",iCnt);
	}
}


int main()
{
	int iValue=0;

	printf("Enter the number:");
	scanf("%d",&iValue);
	
	DisplayF(iValue);
	DisplayB(iValue);
	
}