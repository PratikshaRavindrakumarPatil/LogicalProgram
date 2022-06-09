/*

Enter the string:
Marvellous
After coverting the string:mARVELLOUS

Enter the string:
HELLO
After coverting the string:hello

Enter the string:
jay ganesh
After coverting the string:JAY GANESH

*/
#include<stdio.h>
#include<String.h>

void StrtoggleX(char *src )
{
	
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
		{
			*src=*src-32;
		}
		else if((*src>='A')&&(*src<='Z'))
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
	
	StrtoggleX(Arr);
	printf("After coverting the string:%s\n",Arr);
	return 0;
}