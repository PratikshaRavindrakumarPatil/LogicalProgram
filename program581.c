#include<stdio.h>

int CountSmall(char *str)
{
	int Count=0;
	
	while(*str!='\0')
	{
		if(*str>='a'&& *str<='z')
		{
			Count++;
		}
		str++;
	}
	
	return Count;
}


int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountSmall(Arr);
	printf("Count of small character is:%d\n",iRet);
	
	return 0;
}