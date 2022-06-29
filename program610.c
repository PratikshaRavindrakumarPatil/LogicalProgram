#include<stdio.h>

void Display(int iNo)
{
	if(iNo>0)
	{
		iNo--;
		Display(iNo);
		printf("%d\t",iNo);
		
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