/*

Enter the number:
24
2       4       6       8       12
 
*/


#include<stdio.h>

void Display(int iNo)
{
	static int iCnt=1;
	
	if(iCnt<=iNo/2)
	{
		if((iNo%iCnt)==0)
		{
			if(iCnt%2==0)
			{
				printf("%d\t",iCnt);
			}
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