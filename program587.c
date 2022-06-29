#include<stdio.h>

void Display(int iNo)
{
	
	static char ch='a';
	if(iNo>0)
	{
		printf("%c\t",ch);
		iNo--;
		ch++;
		
		Display(iNo);
	}
}


int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	
	return 0;
}