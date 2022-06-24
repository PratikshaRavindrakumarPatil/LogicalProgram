/*

Enter the number:
12034
0 is prsent

Enter the number:
1234
0 is not present
 
*/


#include<stdio.h>
#include<stdbool.h>

bool Display(int iNo)
{
	int iDigit=0;
	static bool flag=false;
	if(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			flag=true;
		}
		iNo=iNo/10;
		
		Display(iNo);
	}
	if(flag==true)
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
}

int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	bRet=Display(iValue);
	if(bRet==true)
	{
		printf("0 is prsent\n");
	}
	else
	{
		printf("0 is not present\n");
	}
	
	return 0;
}