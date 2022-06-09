/*

Enter the string:
Hello
Count of l characters are:2

Enter the string:
HELLO
Count of l characters are:0

*/
#include<stdio.h>
#include<String.h>

int CountL(char *str)
{
	int Count=0;
	while(*str!='\0')
	{
		if(*str=='l')
		{
			Count++;
		}
		str++;
	}
	return Count;
}

int main()
{
	char Arr[30];
	int iRet=0;
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountL(Arr);
	printf("Count of l characters are:%d\n",iRet);
	return 0;
}