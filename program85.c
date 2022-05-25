#include<stdio.h>

void Display(int iNo)
{
	register int iCnt=0;
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d\t*\t",iCnt);
		
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