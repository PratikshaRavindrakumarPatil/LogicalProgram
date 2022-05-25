//Write program to perform addition of two numbers
#include<stdio.h>


int main()
{
	int iNo1=0,iNo2=0,iSum=0;
	
	printf("Enter the first number:\n");
	scanf("%d",&iNo1);
	
	printf("Enter the second number:\n");
	scanf("%d",&iNo2);
	
	iSum=iNo1+iNo2;
	printf("Addition of two number=%d\n",iSum);
	
	return 0;
}