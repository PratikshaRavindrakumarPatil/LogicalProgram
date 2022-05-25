#include<stdio.h>
void JwelarsPortal(int iWeight)
{
	switch(iWeight)
	{
		case 1:printf("Total price is:4000\n");
			   break;
		
		case 2:printf("Total price is:8000\n");
			   break;
		
		case 5:printf("Total price is:20000\n");
			   break;
		
		case 10:printf("Total price is:40000\n");
			   break;
	
		default:printf("Invalid weight\n");
	}
	
}
int main()
{
	int iValue=0;
	
	printf("1gm=4000\n");
	printf("2gm=8000\n");
	printf("5gm=20000\n");
	printf("10gm=40000\n");
	
	printf("Enter the Gold coin size that you want to purchase:\n");
	scanf("%d",&iValue);
	
	
	
	JwelarsPortal(iValue);
	
	return 0;
}