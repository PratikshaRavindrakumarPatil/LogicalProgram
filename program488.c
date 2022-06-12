/*
OUTPUT:

Enter the first number:
11
Enter the second number:
21
iNo1=21
iNo2=11


*/
#include<stdio.h>

void Swap(int iNo1,int iNo2)
{
	int temp=0;
	
	temp=iNo1;
	iNo1=iNo2;
	iNo2=temp;
	
	printf("iNo1=%d\n",iNo1);
	printf("iNo2=%d\n",iNo2);
	
}


int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the first number:\n");
	scanf("%d",&iValue1);
	
	printf("Enter the second number:\n");
	scanf("%d",&iValue2);
	
	Swap(iValue1,iValue2);
	
	return 0;
}