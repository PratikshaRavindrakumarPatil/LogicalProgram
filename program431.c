/*

Enter the string:
Marvellous
Count of characters are:10

Enter the string:
 Jay Ganesh
Count of characters are:12

*/
#include<stdio.h>
#include<String.h>

int Count(char *str)
{
	int Count=0;
	while(*str!='\0')
	{
		Count++;
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
	printf("Count of characters are:%d\n",iRet);
	return 0;
}