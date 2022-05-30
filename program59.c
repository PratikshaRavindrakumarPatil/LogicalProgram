//input:4
//output:# 1 * # 2 * # 3 * # 4 *


#include<stdio.h>


void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("#\t%d\t*\t",iCnt);
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