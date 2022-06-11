/*
OUTPUT:

Enter the character:
12
1 is digit.

Enter the character:
r
r is not digit.


Enter the character:
S
S is not digit.

*/
#include<stdio.h>
#include<stdbool.h>

bool Check(char ch)
{
	
	if((ch>='0')&&(ch<='9'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char cValue='\0';
	bool bRet=false;
	
	printf("Enter the character:\n");
	scanf("%c",&cValue);

	bRet=Check(cValue);
	if(bRet==true)
	{
		printf("%c is digit.\n",cValue);
	}
	else
	{
		printf("%c is not digit.\n",cValue);
	}
	
	
	
	return 0;
}