/*

Enter the string:
HELLO
Count of vowel are:2

Enter the string:
HellO
Count of vowel are:2

*/
#include<stdio.h>
#include<String.h>

int Count(char *str)
{
	int Count=0;
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
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