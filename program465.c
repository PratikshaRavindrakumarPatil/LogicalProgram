/*
OUTPUT:

Enter the string:
Marvellous
After reverse:suollevraM

Enter the string:
Hello
After reverse:olleH

*/
#include<stdio.h>
#include<stdbool.h>
#include<String.h>

void Check(char *str)
{
	char *start=str;
	char *end=str;
	char temp='\0';
	
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
	
	
}

int main()
{
	char Arr[30];
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);

	Check(Arr);
	printf("After reverse:%s\n",Arr);
	return 0;
}