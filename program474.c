/*
OUTPUT:

Enter the first string:
Marvellous
Enter the second string:
Infosystem
After concating:MarvellousInfosystem



*/
#include<stdio.h>
#include<stdbool.h>
#include<String.h>

void strCatX(char *src,char *dest)
{
	char temp='\0';
	
	while(*src!='\0')
	{
		src++;
	}
	
	while(*dest!='\0')
	{
		*src=*dest;
		
		dest++;
		src++;
	}
	*src='\0';
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	printf("Enter the first string:\n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the second string:\n");
	scanf("%s",Brr);

	strCatX(Arr,Brr);
	printf("After concating:%s\n",Arr);
	return 0;
}