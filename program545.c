/*

Enter the number:
34562
Count of even digit is:3

Enter the number:
24648
Count of even digit is:5
 
Enter the number:
135
Count of even digit is:0
 
 
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
		if((iDigit%2)==0)
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
	printf("Count of even digit is:%d\n",iRet);
	
	return 0;
}