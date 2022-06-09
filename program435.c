/*

Enter the string:
Marvellous
Count of capital characters are:1


Enter the string:
MARVEllous
Count of capital characters are:5

Enter the string:
marvellous
Count of capital characters are:0
*/
#include<stdio.h>
#include<String.h>

int Count(char *str)
{
	int Count=0;
	while(*str!='\0')
	{
		if((*str>=65)&&(*str<=90))
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
	printf("Count of capital characters are:%d\n",iRet);
	return 0;
}