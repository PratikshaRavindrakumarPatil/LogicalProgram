/*

Enter the string:
Jay Ganesh
Length of string is:9

Enter the string:
MARVEllous
Length of string is:10

Enter the string:
MARVELLOUS
Length of string is:10

Enter the string:
marvellous
Length of string is:10
*/
#include<stdio.h>
#include<String.h>

int strlenX(char *str)
{
	int Count=0;
	while(*str!='\0')
	{
		if(((*str>='A')&&(*str<='Z'))||((*str>='a')&&(*str<='z')))
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
	
	iRet=strlenX(Arr);
	printf("Length of string is:%d\n",iRet);
	return 0;
}