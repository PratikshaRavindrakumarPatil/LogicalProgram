//Program to display 5 to 1 on screen

#include<stdio.h>
void Display()
{
	int i=0;
	i=5;
	for(i=5;i>=1;i--)
	{
		printf("%d\n",i);
		//i++;
	}
}
int main()
{
	Display();
	
	return 0;
}