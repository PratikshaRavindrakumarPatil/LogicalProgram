/*
Enter the first string:
Marvellous
Enter the second string:
Infosystem
After concating the string:MarvellousInfosystem

*/
#include<stdio.h>
#include<String.h>

void StrcatX(char *src,char *dest )
{
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
	
	StrcatX(Arr,Brr);
	printf("After concating the string:%s\n",Arr);
	return 0;
}