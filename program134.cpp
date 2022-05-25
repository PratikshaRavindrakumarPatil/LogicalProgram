/*
OOP program

OUTPUT:

Enter the number:
4
Factorial is:24


*/
#include<iostream>
using namespace std;

class Number
{
	public:
	
	int Factorial(int iNo)
	{
		int iFact=1;
		int iCnt=0;
		
		for(iCnt=iNo;iCnt>=1;iCnt--)
		{
			iFact=iFact*iCnt;
		}
		
		return iFact;
	}
};
int main()
{
	Number nobj;
	int iValue=0;
	int iRet=0;
	
	cout<<"Enter the number:\n";
	cin>>iValue;
	
	
	iRet=nobj.Factorial(iValue);
	cout<<"Factorial is:"<<iRet<<endl;
	return 0;
}


