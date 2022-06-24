/*

Enter the number:
5
2       4       6       8       10
 
*/


#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
	static int iCnt=1;
	
	if(iCnt<=iNo)
	{
		printf("%d\t",iCnt*2);
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