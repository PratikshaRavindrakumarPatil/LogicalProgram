/*

Enter the string:
Marvellous
After coverting the string:MARVELLOUS


Enter the string:
MARVELLOUS
After coverting the string:MARVELLOUS

Enter the string:
marvellous
After coverting the string:MARVELLOUS

*/
#include<stdio.h>
#include<String.h>

void StruprX(char *src )
{
	
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
		{
			*src=*src-32;
		}
		src++;
	}
	
}

int main()
{
	char Arr[30];
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	StruprX(Arr);
	printf("After coverting the string:%s\n",Arr);
	return 0;
}