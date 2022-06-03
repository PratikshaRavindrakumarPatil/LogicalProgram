/*
OUTPUT:



*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int iNo;
		
	public:
	
		void Accept();
		void Display();
		int CountFactor();
};

void Number::Accept()
{
	cout<<"Enter the number:"<<endl;
	cin>>iNo;
}

void Number::Display()
{
	cout<<"Number is:"<<iNo<<endl;
	
}

int Number::CountFactor()
{
	int iCnt=0;
	int count=0;
	
	for(iCnt=2;iCnt<=iNo/2;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			count++;
		}
	}
	
	return count;
}

int main()
{
	int bRet=0;
	
	Number nobj;
	nobj.Accept();
	nobj.Display();
	iRet=nobj.CheckPrime();
	cout<<"Total factor are:"<<iRet<<endl;
	
	return 0;
}