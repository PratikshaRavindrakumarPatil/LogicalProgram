/*
OUTPUT:

Enter the string:
Marvellous
Enter the character that we want to search:
s
s is present.



*/
#include<stdio.h>
#include<stdbool.h>
#include<String.h>


bool Check(char str[],char ch)
{
	
	
	while(*str!='\0')
	{
		if(*str==ch||*str==ch+32||*str==ch-32)
		{
			break;
		}
		str++;
	}


	if(*str=='0')
	{
		return false;
	}
	else
	{
		return true;
	}
	
}

int main()
{
	char Arr[30];
	char cValue='\0';
	bool bRet=false;
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the character that we want to search:\n");
	scanf("%s",&cValue);
	
	bRet=Check(Arr,cValue);
	if(bRet==true)
	{
		printf("%c is present.\n",cValue);
	}
	else
	{
		printf("%c is not present.\n",cValue);
	}
	
	return 0;
}