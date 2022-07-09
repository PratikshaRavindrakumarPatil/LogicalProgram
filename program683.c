/*

Enter the character:
z
z :Z

Enter the character:
M
M :m

*/

#include<stdio.h>

char Display(char ch)
{
	if(((ch>='a') && (ch<='z')))
	{
		ch=ch-32;
	}
	else if(((ch>='A') && (ch<='Z')))
	{
		ch=ch+32;
	}
	
	
}

int main()
{
	char ch='\0';
	char cRet='\0';
	
	printf("Enter the character:\n");
	scanf("%c",&ch);
	
	cRet=Display(ch);
	printf("%c :%c",ch,cRet);
	
	return 0;
}