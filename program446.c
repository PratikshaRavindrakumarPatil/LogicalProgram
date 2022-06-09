/*

Enter the first string:
Hello
Enter the second string:
Hello
String are same

Enter the first string:
Hello
Enter the second string:
Marvellous
String are different


*/
#include<stdio.h>
#include<String.h>
#include<stdbool.h>

bool StrcmpX(char *src,char *dest )
{
	while((*src!='\0')&&(*dest!='\0'))
	{
		if(*src!=*dest)
		{
			break;
		}
		src++;
		dest++;
	}

	if(*src=='\0')
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	char Arr[30];
	char Brr[30];
	bool bRet=0;
	
	printf("Enter the first string:\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the second string:\n");
	scanf("%s",Brr);
	
	bRet=StrcmpX(Arr,Brr);
	
	if(bRet==true)
	{
		printf("String are same\n");
	}
	else
	{
		printf("String are different\n");
	}
	return 0;
}