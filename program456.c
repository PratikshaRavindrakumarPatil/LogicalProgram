/*

OUTPUT:

Enter the division:
B
Exam at:8 AM


Enter the division:
a
Please enter valid division.
*/
#include<stdio.h>

void Display(char ch)
{
	if(ch=='A')
	{
		printf("Exam at:7 AM\n");
	}
	else if(ch=='B')
	{
		printf("Exam at:8 AM\n");
	}
	else if(ch=='C')
	{
		printf("Exam at:9 AM\n");
	}
	else if(ch=='D')
	{
		printf("Exam at:10 AM\n");
	}
	else
	{
		printf("Please enter valid division.\n");
	}
	
}


int main()
{
	char cValue;
	printf("Enter the division:\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	
	return 0;
}