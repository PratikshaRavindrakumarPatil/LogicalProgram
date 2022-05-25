#include<stdio.h>

void Display(int iNo)
{
	register int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iCnt%2)==0)
		{
			printf("*\t",);
		}
		else
		{
			printf("%d\t");
		}
	}
	
}

int main()
{
	int iValue=0;
	
	printf("Enter the number:");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}