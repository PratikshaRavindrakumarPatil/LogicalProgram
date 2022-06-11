/*
OUTPUT:

Enter the string:
Marvellous
Enter the character that we want to search:
s
s is present.



*/
#include<stdio.h>
#include<String.h>


int Check(char *str,char ch)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if(*str==ch ||*str==ch+32 ||*str==ch-32)
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
	scanf("%[^'\n']s",Arr);

	printf("Enter the character that we want to search:\n");
	scanf("%s",&cValue);
	
	iRet=Check(Arr,cValue);
	printf("Count of character is:%d\n",iRet);
	
	return 0;
}