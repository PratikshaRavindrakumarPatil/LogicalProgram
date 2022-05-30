//input:5
//output: A B C D E


#include<stdio.h>

void Display(int iNo)
{
	char c='\0';
	int iCnt=0;
	for(c='A';c<='Z';c++)
	{
		printf("%c\t",c);
		iCnt++;
		if(iCnt==iNo)
		{
			break;
		}
	}
	
	
}
int main()
{
	int iValue=0;
	
	printf("Enter the number:");
	scanf("%d",&iValue);
	
	
	Display(iValue);
	return 0;
}