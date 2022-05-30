//Write a program which accept number from user display its factor in decreasing order

#include<stdio.h>
void FactRev(int iNo)
{
	int iCnt=0;
	int iCntx;
	
	//int i=0;
	for(iCnt=(iNo/2);iCnt>=1;iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			
			printf("%d\t",iCnt);
						
		}
		
	}
	
		
}

int main()
{
	int iValue=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	FactRev(iValue);
}