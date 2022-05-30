
/*
input: iRow=4   iCol=4


output:
		 1       2       3       4       5
		-1      -2      -3      -4      -5
		 1       2       3       4       5
		-1      -2      -3      -4      -5
		 1       2       3       4       5
*/


#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0,iCnt=0;
	

	
	for(i=1;i<=iRow;i++)
	{
		for(j=i;j<=iCol;j++)
		{
			if(j>=i)
			{
				printf("%d\t",j);
				iCnt++;
			}
			else
			{
				printf("%d\t",iCnt);
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