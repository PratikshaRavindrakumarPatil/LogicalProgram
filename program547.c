/*

Enter the number:
4567
Count of digit lies between 3 to 7 is:3

Enter the number:
2378
Count of digit lies between 3 to 7 is:0
 
Enter the number:
34544
Count of digit lies between 3 to 7 is:4

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
		if((iDigit>3)&&(iDigit<7))
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
	printf("Count of digit lies between 3 to 7 is:%d\n",iRet);
	
	return 0;
}