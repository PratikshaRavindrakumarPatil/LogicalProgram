/*

Enter the string:
Marvellous
After converting string:marvellous


Enter the string:
HELLO
After converting string:hello


Enter the string:
marvellous
After converting string:marvellous
*/
#include<stdio.h>
#include<String.h>

void StrwrX(char *str)
{
	int Count=0;
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		str++;
	}
	
}

int main()
{
	char Arr[30];
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	StrwrX(Arr);
	printf("After converting string:%s\n",Arr);
	return 0;
}