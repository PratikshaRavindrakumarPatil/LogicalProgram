/*

Enter the character:
h
a       b       c       d       e       f       g		h
        


*/
#include<stdio.h>

void Display(char ch)
{
	
	static char ch1='a';
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