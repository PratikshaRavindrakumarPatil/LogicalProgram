/*

Enter the string:
Marvellous Infosystem
Marvellous Infosystem
*/
#include<stdio.h>
#include<String.h>
#include<stdbool.h>
bool Display(char *str,char ch)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if(*str == ch)
		{
			iCnt++;
		}
		str++;
	}
	
	if(iCnt==0)
	{
		return false;
	}
	else
	{
		return true;
	}
	
}

int main()
{
	char Arr[30];
	char cValue='\0';
	bool bRet=false;
	
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the character:\n");
	scanf("%s",&cValue);
	
	bRet=Display(Arr,cValue);
	if(bRet==true)
	{
		printf("%c is present in string.\n",cValue);
	}
	else
	{
		printf("%c is not present in string.\n",cValue);
	}
	return 0;
}