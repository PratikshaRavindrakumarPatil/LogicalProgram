#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
				printf("*\t");
		}
		printf("\n");
	}
	
	
	
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the numberof rows:");
	scanf("%d",&iValue1);
	
	
	printf("Enter the numberof columns:");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}