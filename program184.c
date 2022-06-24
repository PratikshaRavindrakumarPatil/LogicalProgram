/*
Enter the character:
D
A       B       C       D

*/
#include<stdio.h>

void Display(char ch)
{
	
	static char ch1='A';
	if(ch1<=ch)
	{
		printf("%c\t",ch1);
		ch1++;
		Display(ch);
	}
	
	
}

int main()
{
	char cValue='\0';
	printf("Enter the character:\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}