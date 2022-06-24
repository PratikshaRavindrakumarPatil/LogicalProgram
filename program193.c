/*

Enter the String:
MARVEllous
small letters are:5
*/
#include<stdio.h>

int Small(char *str)
{
	static int Count=0;
	if(*str!='\0')
	{
		if(*str>='a'&&*str<='z')
		{
			Count++;
		}
		str++;
		Small(str);
	}
	
	return Count;
}

int main()
{
	char Arr[30];
	int iRet=0;
	
	printf("Enter the String:\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=Small(Arr);
	printf("small letters are:%d\n",iRet);
	return 0;
}