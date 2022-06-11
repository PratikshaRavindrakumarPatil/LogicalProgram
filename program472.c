/*
OUTPUT:

Enter the string:
MarVeLlOus
copy capital letter:MVLO




*/
#include<stdio.h>
#include<stdbool.h>
#include<String.h>

void CopyCap(char *src,char *dest)
{
	while(*src!='\0')
	{
		if((*src>='A')&& (*src<='Z'))
		{
			*dest=*src;
			dest++;
		}
		
		
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

	CopyCap(Arr,Brr);
	printf("copy capital letter:%s\n",Brr);
	return 0;
}