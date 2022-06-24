/*

Enter the number:
1245
Count of odd digit is:2

Enter the number:
2468
Count of odd digit is:0

Enter the number:
13579
Count of odd digit is:5
 
 
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
		if((iDigit%2)!=0)
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
	printf("Count of odd digit is:%d\n",iRet);
	
	return 0;
}