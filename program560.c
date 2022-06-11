/*
OUTPUT:

Enter the character:
r
r is small alphabate.

Enter the character:
P
P is not small alphabate.

*/
#include<stdio.h>
#include<stdbool.h>

bool Check(char ch)
{
	
	if((ch=='!')||(ch=='@')||(ch=='#')||(ch=='$')||(ch=='%')||(ch=='&'))
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
		printf("%c is special symbol.\n",cValue);
	}
	else
	{
		printf("%c is not special symbol.\n",cValue);
	}
	
	
	
	return 0;
}