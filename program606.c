#include<stdio.h>

void Display(int iNo)
{
	while(iNo>0)
	{
		printf("%d\t",iNo);
		iNo--;
		
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