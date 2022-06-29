/*

Enter the string:
Hello
        o       l       l       e


*/
#include<stdio.h>

void Display(char str[])
{
	if(*str!='\0')
	{
		Display(++str);
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