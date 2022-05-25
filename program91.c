#include<stdio.h>

void Display(int iRow,int iCol)
{
	int iCnt1=0,iCnt2=0;
	
	for(iCnt1=1;iCnt1<=iRow;iCnt1++)
	{
		for(iCnt2=1;iCnt2<=iCol;iCnt2++)
		{
			printf("%d\t",iCnt2);
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