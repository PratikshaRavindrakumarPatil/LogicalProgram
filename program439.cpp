/*

Enter the string:
Marvellous
Count of small characters are:9

Enter the string:
HELLO
Count of small characters are:0

Enter the string:
hello
Count of small characters are:5

*/
#include<stdio.h>
#include<String.h>

int Count(char *str)
{
	int Count=0;
	while(*str!='\0')
	{
		if((*str=='a')||(*str<='e')||(*str<='i')||(*str<='o')||(*str<='u'))
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
	printf("Count of vowel are:%d\n",iRet);
	return 0;
}