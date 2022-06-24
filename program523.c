

#include<stdio.h>

void Display(int iNo)
{

	static int iCnt=0;
	
	if(iCnt<iNo)
	{
		iCnt++;
		Display(iNo);
		printf("%c\t",'a'+iCnt);
		
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