

#include<stdio.h>
#include<String.h>

void Display(char *str)
{
	while(*str!='\0')
	{
		printf("%c",*str);
		str++;
	}
	
}

int main()
{
	char Arr[30];
	int iRet=0;
	
	printf("Enter the string:\n");
	scanf(" %[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}