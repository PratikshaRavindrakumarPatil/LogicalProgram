/*
OUTPUT:

Enter the string:
Marvellous
Capital Character are:8

Enter the string:
ASdsdEWsc
Capital Character are:1


*/
#include<stdio.h>
#include<stdbool.h>

int Count(char *str)
{
	int CountCap=0,CountSmall=0;
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			CountCap++;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			CountSmall++;
		}
		str++;
	}
	return (CountSmall-CountCap);
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