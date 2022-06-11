/*
OUTPUT:
Enter the character:
P
P       Q       R       S       T       U       V       W
        X       Y       Z
		
		
Enter the character:
m
m       l       k       j       i       h       g       f
        e       d       c       b       a

*/
#include<stdio.h>
#include<stdbool.h>

void Check(char ch)
{
	while((ch>='A')&&(ch<='Z'))
	{
		printf("%c\t",ch);
		ch++;
		
	}
	
	while((ch>='a')&&(ch<='z'))
	{
		printf("%c\t",ch);
		ch--;
		
	}
	
}

int main()
{
	char cValue='\0';

	printf("Enter the character:\n");
	scanf("%c",&cValue);

	Check(cValue);
	
	return 0;
}