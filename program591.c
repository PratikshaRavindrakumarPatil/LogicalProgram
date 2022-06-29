#include<stdio.h>

void Display(int iNo)
{
	
	static int iCnt=0;
	static char ch='a';
	
	if(iCnt<iNo)
	{
		iCnt++;
		Display(iNo);
		printf("%c\t",ch);
		ch++;
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