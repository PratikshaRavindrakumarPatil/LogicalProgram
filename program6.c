
#include<stdio.h>


////////////////////////////////////////////////////////////
//
// Function Name:  Addition
// Description:    Used to perform addition of 2 numbers
// Input:		   Integer,Integer
// Output:		   Integer
// Date:		   12/04/2022
// Author:		   Pratiksha Ravindrakumar Patil
//
////////////////////////////////////////////////////////////


int Addition(int iValue1,int iValue2)
{
	int iRet=0;
	iRet=iValue1+iValue2;
	return iRet;
	
}


///////////////////////////////////////////////////////////
// Write program to perform addition of two numbers
//////////////////////////////////////////////////////////


int main()
{
	int iNo1=0,iNo2=0,iSum=0;
	
	printf("Enter the first number:\n");
	scanf("%d",&iNo1);
	
	printf("Enter the second number:\n");
	scanf("%d",&iNo2);
	
	iSum=Addition(iNo1,iNo2);
	printf("Addition of two number=%d\n",iSum);
	
	return 0;
}


////////////////////////////////////////////
//
//Input:	11 10
//Output:   21
//
///////////////////////////////////////////