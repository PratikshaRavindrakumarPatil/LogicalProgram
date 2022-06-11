/*
OUTPUT:


Enter the string:
MarvellouS
copy small letter:arvellou



*/
#include<stdio.h>
#include<stdbool.h>
#include<String.h>

void CopySmall(char *src,char *dest)
{
	while(*src!='\0')
	{
		if((*src>='a')&& (*src<='z'))
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

	CopySmall(Arr,Brr);
	printf("copy small letter:%s\n",Brr);
	return 0;
}