/*
OUTPUT:

Enter the base:
2
Enter the power:
4
base is:2
pow is:2
power of first number is:16


Enter the base:
4
Enter the power:
3
base is:4
pow is:4
power of first number is:64


*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int iNo1,iNo2;
		
	public:
	
		void Accept();
		void Display();
		int Power();
};

void Number::Accept()
{
	cout<<"Enter the base:"<<endl;
	cin>>iNo1;
	
	cout<<"Enter the power:"<<endl;
	cin>>iNo2;
}

void Number::Display()
{
	cout<<"base is:"<<iNo1<<endl;
	cout<<"pow is:"<<iNo1<<endl;
}

int Number::Power()
{
	int iCnt=0;
	int iMult=1;
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMult=iMult*iNo1;
	}
	return iMult;
}

int main()
{
	
	Number nobj;
	int iRet=0;

	nobj.Accept();
	nobj.Display();
	iRet=nobj.Power();
	cout<<"power of first number is:"<<iRet<<endl;
	
	return 0;
}