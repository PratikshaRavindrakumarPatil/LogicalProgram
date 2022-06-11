/*
OUTPUT:

Enter the string:
Marvellous
After copy :Marvellous



*/
#include<stdio.h>
#include<stdbool.h>
#include<String.h>

void strCpy(char *src,char *dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		
		dest++;
		src++;
	}
	*dest='\0';
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);

	strCpy(Arr,Brr);
	printf("After copy :%s\n",Brr);
	return 0;
}