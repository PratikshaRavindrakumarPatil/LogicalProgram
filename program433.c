/*

Enter the string:
HeLLo
Count of l characters are:2

Enter the string:
MarveLlous
Count of l characters are:2


Enter the string:
LLsdLlllas
Count of l characters are:6
*/
#include<stdio.h>
#include<String.h>

int CountL(char *str)
{
	int Count=0;
	while(*str!='\0')
	{
		if((*str=='l')||(*str=='L'))
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