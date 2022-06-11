/*
OUTPUT:

Enter the string:
Marvellous
After copy :suollevraM




*/
#include<stdio.h>
#include<stdbool.h>
#include<String.h>

void strCpy(char *src,char *dest)
{
	char *start=dest;
	char *end=dest;
	char temp='\0';
	
	
	while(*src!='\0')
	{
		*dest=*src;
		
		dest++;
		src++;
	}
	*dest='\0';
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		
		start++;
		end--;
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