/*

Enter the number:
3
*       1       #       *       2       #       *       3       #
 
*/


#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
	static int iCnt=1;
	
	if(iCnt<=iNo)
	{
		printf("*\t%d\t#\t",iCnt);
		iCnt++;
		
		Display(iNo);
	}
	
}

int main()
{
	int iValue=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	
	return 0;
}