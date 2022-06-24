/*

Enter the number:
6
1       2       3       4       5       6      
 
*/


#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
	static int iCnt=1;
	
	if(iCnt<=iNo)
	{
		printf("%d\t",iCnt);
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