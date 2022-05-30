
/*
input: iRow=4   iCol=4


output:
		a       b       c       d       e
		1       2       3       4       5
		a       b       c       d       e
		1       2       3       4       5
		a       b       c       d       e
		
*/


#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';

	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='a';j<=iCol;j++,ch++)
		{
			
			if((i%2)==0)
			{
				printf("%d\t",j);				
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