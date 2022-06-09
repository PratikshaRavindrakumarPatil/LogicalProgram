/*

Enter the string:
Hello
After coverting the string:hello

Enter the string:
MARVELLOUS
After coverting the string:marvellous

Enter the string:
marvellous
After coverting the string:marvellous

*/
#include<stdio.h>
#include<String.h>

void StrwrX(char *src )
{
	
	while(*src!='\0')
	{
		if((*src>='A')&&(*src<='Z'))
		{
			*src=*src+32;
		}
		src++;
	}
	
}

int main()
{
	char Arr[30];
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	StrwrX(Arr);
	printf("After coverting the string:%s\n",Arr);
	return 0;
}