#include<stdio.h>
void DisplayClass(float fMarks)
{
	if((fMarks>=0.0) && (fMarks<35.00))
	{
		printf("You are fail.\n");
	}
	
	else if(fMarks>=35.0 && fMarks<50.0)
	{
		printf("You are in pass class\n");
	}
	
	else if((fMarks>=50.0)&&(fMarks<70.0))
	{
		printf("You are in second class\n");
	}
	else if((fMarks>=60.0)&&(fMarks<70.0))
	{
		printf("You are in first class \n");
	}
	
	else if((fMarks>=70.0)&&(fMarks<=100.0))
	{
		printf("You are in first class with distinction\n");
	}
	else
	{
		printf("Invalid persentage");
	}
}

int main()
{
	float fValue=0.0;
	
	
	printf("Enter the persentage:\n");
	scanf("%f",&fValue);
	
	DisplayClass(fValue);
	
	
	return 0;
}