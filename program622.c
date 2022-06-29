#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	char ch='A';
	
	while(iCnt<iNo)
	{
		printf("%c\t",ch);
		iCnt++;
		ch++;
		
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}