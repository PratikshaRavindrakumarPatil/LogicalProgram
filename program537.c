/*

Enter the first number:
5
Enter the second number:
7
5       5       5       5       5       5       5
 
*/


#include<stdio.h>

void Display(int iNo1,int iNo2)
{
	static int iCnt=0;
	if(iCnt<iNo2)
	{
		printf("%d\t",iNo1);
		iCnt++;
		
		Display(iNo1,iNo2);
	}
	

}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the first number:\n");
	scanf("%d",&iValue1);
	
	printf("Enter the second number:\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}