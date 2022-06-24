/*
Enter the String:
qw k  op j ass
while spaces are:5


*/
#include<stdio.h>

int WhiteSpace(char *str)
{
	static int Count=0;
	if(*str!='\0')
	{
		if(*str==' ')
		{
			Count++;
		}
		str++;
		
		WhiteSpace(str);
	}
	
	return Count;
}

int main()
{
	char Arr[30];
	int iRet=0;
	
	printf("Enter the String:\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=WhiteSpace(Arr);
	printf("while spaces are:%d\n",iRet);
	return 0;
}