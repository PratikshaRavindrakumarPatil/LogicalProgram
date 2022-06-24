/*

Enter the number:
8
$       2       $       4       $       6       $       8
 
*/


#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
	static int iCnt=1;
	
	if(iCnt<=iNo)
	{
		if(iCnt%2==0)
		{
			printf("%d\t",iCnt);
		}
		else
		{
			printf("$\t");
		}
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