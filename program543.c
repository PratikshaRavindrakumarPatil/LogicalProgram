/*

Enter the number:
235222
Count of 2 is:4


Enter the number:
3456
Count of 2 is:0
 
*/


#include<stdio.h>
#include<stdbool.h>

int Display(int iNo)
{
	int iDigit=0;
	static int Count=0;
	if(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==2)
		{
			Count++;
		}
		iNo=iNo/10;
		
		Display(iNo);
	}
	
	return Count;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=Display(iValue);
	printf("Count of 2 is:%d\n",iRet);
	
	return 0;
}