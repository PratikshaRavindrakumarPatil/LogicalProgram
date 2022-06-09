/*
Enter the character:4
4 is digit.

Enter the character:s
s is not digit.

*/
#include<stdio.h>
#include<String.h>
#include<stdbool.h>

bool Display(char ch)
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
	
	printf("Enter the character:");
	scanf("%c",&cValue);
	
	bRet=Display(cValue);
	
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