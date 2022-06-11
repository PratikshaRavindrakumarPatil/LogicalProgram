/*
OUTPUT:

Enter the string:
Marvellous Infosystem
Capital Character are:2

Enter the string:
ASDsd
Capital Character are:3

*/
#include<stdio.h>
#include<stdbool.h>

int Count(char *str)
{
	int Count=0;
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
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

	iRet=Count(Arr);
	
	printf("Capital Character are:%d\n",iRet);

	
	
	
	return 0;
}