/*
output:
Enter the number of rows:
10
Enter the number of columns:
10

1       2       3       4       5       6       7       8       9       10
2       4       6       8       10      12      14      16      18      20
3       6       9       12      15      18      21      24      27      30
4       8       12      16      20      24      28      32      36      40
5       10      15      20      25      30      35      40      45      50
6       12      18      24      30      36      42      48      54      60
7       14      21      28      35      42      49      56      63      70
8       16      24      32      40      48      56      64      72      80
9       18      27      36      45      54      63      72      81      90
10      20      30      40      50      60      70      80      90      100


*/
#include<stdio.h>
void Multiplication(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");
	}
	
	
}

int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;
	
	printf("Enter the number of rows:\n");
	scanf("%d",&iValue1);
	
	printf("Enter the number of columns:\n");
	scanf("%d",&iValue2);
	
	Multiplication(iValue1,iValue2);
	
	
	
	return 0;
}