//input:8
//output:2 4 6 8 10 12 14 16

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=2;iCnt<=(2*iNo);iCnt=iCnt+2)
	{
		
			printf("%d\t",iCnt);
		
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