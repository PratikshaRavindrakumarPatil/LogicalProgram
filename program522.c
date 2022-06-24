/*
Enter the Number:
5
a       b       c       d       e
*/


#include<stdio.h>

void Display(int iNo)
{

	static int iCnt=0;
	
	
	if(iCnt<iNo)
	{
		printf("%c\t",'a'+iCnt);
		iCnt++;
		
		Display(iNo);
	}
	
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the Number:\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}