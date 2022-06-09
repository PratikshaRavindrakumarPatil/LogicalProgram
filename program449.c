/*

Enter the string:
Marvellous
reverse string:suollevraM



*/
#include<stdio.h>
#include<String.h>

void StrrevX(char *str)
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
	
	StrrevX(Arr);
	printf("reverse string:%s\n",Arr);
	return 0;
}
