/*
input: iRow=4    iCol=4


output:	A	B	C	D
		a	b	c	d
		A	B	C	D
		a	b	c	d
		

		
*/


#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0',c='\0';
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='A',c='a';j<=iCol;j++,ch++,c++)
		{
			if((i%2)==0)
			{
				printf("%c\t",c);
			}
			else
			{
				printf("%c\t",ch);
			}
		}
		
		printf("\n");
		
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows:");
	scanf("%d",&iValue1);
	
	printf("Enter the cloumn:");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}