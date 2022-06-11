/*
OUTPUT:

Enter the character:
S
After converting:s

Enter the character:
P
After converting:p

Enter the character:
2
After converting:2

*/
#include<stdio.h>
#include<stdbool.h>

void Check(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		ch=ch+32;
		
	}
	printf("After converting:%c\n",ch);
}

int main()
{
	char cValue='\0';

	printf("Enter the character:\n");
	scanf("%c",&cValue);

	Check(cValue);
	
	return 0;
}