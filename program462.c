/*
OUTPUT:

Enter the string:
Marvellous Infosystem
Capital Character are:2

Enter the string:
ASDsd
Capital Character are:3

Enter the string:
Marvellous Infosystem
Small Character are:18


*/
#include<stdio.h>
#include<stdbool.h>

int Count(char *str)
{
	int Count=0;
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
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
	
	printf("Small Character are:%d\n",iRet);

	
	
	
	return 0;
}