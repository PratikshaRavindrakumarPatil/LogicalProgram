/*

Enter the number:
12
5       7       8       9       10      11

*/


#include<stdio.h>

void Display(int iNo)
{
	static int iCnt=1;
	
	if(iCnt<iNo)
	{
		if((iNo%iCnt)!=0)
		{
			printf("%d\t",iCnt);
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