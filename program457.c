/*

OUTPUT:

Enter the division:
B
Exam at:8 AM


Enter the division:
a
Please enter valid division.
*/
#include<stdio.h>

void Display(int Choice)
{
	
	switch(Choice)
	{
		case 1:printf("Division A\n");
			   printf("Exam at:7 AM\n");
			   break;
		
		case 2:printf("Division B\n");
			   printf("Exam at:8 AM\n");
			   break;
			   
		case 3:printf("Division A\n");
			   printf("Exam at:9 AM\n");
			   break;
			   
		case 4:printf("Division A\n");
			   printf("Exam at:10 AM\n");
			   break;
		
		default:printf("Invalid number.\n");
		
	};
	
}


int main()
{
	int iValue=0;
	
	printf("1. Division A\n");
	printf("2. Division B\n");
	printf("3. Division C\n");
	printf("4. Division D\n");
	
	printf("Enter your choice:\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	
	return 0;
}