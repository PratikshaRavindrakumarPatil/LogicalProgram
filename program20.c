//write program to accept number from user return difference between summation of factor and non factor

#include<stdio.h>
int FactDiff(int iNo)
{
	int iCnt=0,iCntX=0;
	int Fact=0;
	int NonFact=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			Fact=Fact+iCnt;

		}
	}
				
	
	for(iCntX=1;iCntX<iNo;iCntX++)
	{
		if((iNo%iCntX)!=0)
		{
			NonFact=NonFact+iCntX;
		}
	}
	
	return(Fact-NonFact);
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number:");
	scanf("%d",&iValue);
	
	iRet=FactDiff(iValue);
	printf("%d",iRet);
	return 0;
}