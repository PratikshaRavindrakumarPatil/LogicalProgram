/*
Enter the string:
Hello
o       l       l       e       H

*/

#include<stdio.h>

void Display(char str[])
{
	if(*str!='\0')
	{
		Display(str+1);
		printf("%c\t",*str);
		
		
	}
	
}

int main()
{
	char Arr[40];
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}