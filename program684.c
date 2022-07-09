/*

Enter the character:
A
A is vowel

Enter the character:
u
u is vowel


Enter the character:
p
p not is vowel

*/

#include<stdio.h>
#include<stdbool.h>

bool Display(char ch)
{
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
}

int main()
{
	char ch='\0';
	bool bRet=false;
	
	printf("Enter the character:\n");
	scanf("%c",&ch);
	
	bRet=Display(ch);
	if(bRet==true)
	{
		printf("%c is vowel",ch);
	}
	else
	{
		printf("%c not is vowel",ch);
	}
	
	return 0;
}