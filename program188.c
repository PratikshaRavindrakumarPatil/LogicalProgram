/*
Enter the String:
Hello
Length of string is:5

*/
#include<stdio.h>

int StrlenX(char *str)
{
	static int iCount=0;
	if(*str!='\0')
	{
		iCount++;
		str++;
		
		StrlenX(str);
	}
	
	return iCount;
	
}

int main()
{
	char Arr[30];
	int iRet=0;
	
	printf("Enter the String:\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=StrlenX(Arr);
	printf("Length of string is:%d\n",iRet);
	return 0;
}