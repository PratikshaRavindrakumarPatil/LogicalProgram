/*

Enter the number:
12
Multiplication on factor is:144
 
*/


#include<stdio.h>

int Display(int iNo)
{
	static int iCnt=1;
	static int iMult=1;
	
	if(iCnt<=iNo/2)
	{
		if((iNo%iCnt)==0)
		{
			iMult=iMult*iCnt;
		}
		iCnt++;
		
		Display(iNo);
	}
	
	return iMult;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=Display(iValue);
	printf("Multiplication on factor is:%d\n",iRet);
	
	return 0;
}