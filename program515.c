/*

Enter the string:
MarveLLOUS
Number of small element is:4


*/

#include<stdio.h>
#include<String.h>

int CountSmall(char *str)
{
	static int Count=0;
	if(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			Count++;
		}
		str++;
		
		CountSmall(str);
	}
	
	return Count;
}

int main()
{
	char Arr[30];
	int iRet=0;
	
	printf("Enter the string:\n");
	scanf("%s",Arr);
	
	iRet=CountSmall(Arr);
	printf("Number of small element is:%d\n",iRet);
	
	return 0;
}