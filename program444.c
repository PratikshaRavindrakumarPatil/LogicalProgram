/*

Enter the string:
Marvellous
After copy the string:Marvellous

Enter the string:
Hello
After copy the string:Hello

*/
#include<stdio.h>
#include<String.h>

void StrcpyX(char *src,char *dest )
{
	
	while(*src!='\0')
	{
		*dest=*src;
		
		src++;
		
		dest++;
	}
	*dest='\0';
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	StrcpyX(Arr,Brr);
	printf("After copy the string:%s\n",Brr);
	return 0;
}