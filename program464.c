/*
OUTPUT:

Enter the string:
Hello
Vowel are present.

Enter the string:
QWPY
Vowel are not present


*/
#include<stdio.h>
#include<stdbool.h>

bool Check(char *str)
{
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
		{
			break;
		}
		str++;
	}
	
	if(*str=='\0')
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
	bool bRet=false;
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);

	bRet=Check(Arr);
	if(bRet==true)
	{
		printf("Vowel are present.\n");
	}
	else
	{
		printf("Vowel are not present\n");
	}
	
	return 0;
}