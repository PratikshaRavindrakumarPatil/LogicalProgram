/*
Enter the string:
Marvellous
M
a
r
v
e
l
l
o
u
s
*/
#include<stdio.h>
#include<String.h>
void Display(char *str)
{
	while(*str!='\0')
	{
		printf("%c\n",*str);
		str++;
	}
	
}

int main()
{
	char Arr[30];
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}