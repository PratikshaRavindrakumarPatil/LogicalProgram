/*


*/
#include<stdio.h>


void Display(int iNo)
{
	static int iCnt=iNo;
	while(iCnt>0)
	{
		printf("%d\t*\t",iCnt);
		iCnt--;
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