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
	
	if((ch>='a')&&(ch<='z'))
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
		printf("%c is small alphabate.\n",cValue);
	}
	else
	{
		printf("%c is not small alphabate.\n",cValue);
	}
	
	
	
	return 0;
}