

#include<stdio.h>

int Frequency(int iNo)
{
	int iDigit=0;
	int Count=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==4)
		{
			Count++;
		}
		iNo=iNo/10;
	}
	
	return Count;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=Frequency(iValue);
	printf("Frequency of 4 is:%d",iRet);
	
	return 0;
}