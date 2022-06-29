/*

Enter the string:
Marvellous
Marvellous
arvellous
rvellous
vellous
ellous
llous
lous
ous
us
s

*/

#include<stdio.h>

void Display(char str[])
{
	if(*str!='\0')
	{
		
		printf("%s\n",str);		
		Display(str+1);
	}
	
}

int main()
{
	char Arr[40];
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}