/*
OUTPUT:

Enter the character:
L
L is capital alphabate.


Enter the character:
d
d is small alphabate.
*/
#include<stdio.h>
#include<stdbool.h>

bool Check(char ch)
{
	
	if((ch>='A')&&(ch<='Z'))
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
		printf("%c is capital alphabate.\n",cValue);
	}
	else
	{
		printf("%c is small alphabate.\n",cValue);
	}
	
	
	
	return 0;
}