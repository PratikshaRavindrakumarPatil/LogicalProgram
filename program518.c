/*
Enter the Number:
5
a       b       c       d       e
*/


#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	char ch='a';
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",ch);
		ch++;
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