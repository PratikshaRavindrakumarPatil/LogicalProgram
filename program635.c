#include<stdio.h>
#include<String.h>

void Check(char str[],char dest[])
{
	
	strcpy(dest,str);
	strrev(dest);
	
	if(strcmp(str, dest)==0)
	{
		printf("String are palindrome");
	}
	else
	{
		printf("string are not palindrome");
	}
	
	
}

int main()
{
	char Arr[40];
	char Brr[40];
	
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s");
	
	Check(Arr,Brr);
	
	return 0;
}