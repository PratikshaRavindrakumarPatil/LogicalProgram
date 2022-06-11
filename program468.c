#include<stdio.h>
#include<String.h>

int Count(char *str,char ch)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if(*str==ch)
		{
			iCnt++;
		}
		
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[30];
	char cValue='\0';
	int iRet=0;
	
	printf("Enter the string:\n");
	scanf("%[^'\n'] s",Arr);
	
	printf("Enter the character:\n");
	scanf("%c",&cValue);
	
	iRet=Count(Arr,cValue);
	printf("count of character is:%d\n",iRet);
	
	return 0;
}