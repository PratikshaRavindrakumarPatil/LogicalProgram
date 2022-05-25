//Accept number and display count of digit

#include<stdio.h>

int CountDigits(int iNo)
{
	
	int iCount=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		
		iCount++;
		
		iNo=iNo/10;
		
		
	}
	
	return iCount;
	
}
int main()
{
	
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=CountDigits(iValue);
	printf("Count of digits is:%d\n",iRet);
	return 0;
}