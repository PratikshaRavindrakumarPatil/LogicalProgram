/*


Enter the number:
12
1       2       3       4       6 
*/


#include<stdio.h>

void Display(int iNo)
{
	static int iCnt=1;
	
	if(iCnt<iNo)
	{
		if(iNo%iCnt==0)
		{
			printf("%d\t",i);
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