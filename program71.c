/*
input: iRow=4   iCol=4


output:	1       2       3       4
		5       6       7       8
		9       1       2       3
		4       5       6       7

		
*/


#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0,iCnt=0;
	
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			iCnt++;
			printf("%d\t",iCnt);
			
			if(iCnt==9)
			{
				iCnt=0;
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