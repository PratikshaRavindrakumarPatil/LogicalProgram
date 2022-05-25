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
	
	if(iValue1<0)
	{
		iValue1= -iValue1;
	}
	
	
	if(iValue2<0)
	{
		iValue2= -iValue2;
	}
	
	iRet=iValue1+iValue2;
	return iRet;
	
}