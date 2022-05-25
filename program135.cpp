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
	private:
		int iNo;
	
	public:
	
		void Accept()
		{
			cout<<"Enter the value:"<<endl;
			cin>>this->iNo;
		}
		
		void Display()
		{
			cout<<"Value is:"<<this->iNo<<endl;
		}
		
		int Factorial()
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
	int iRet=0;
	
	
	nobj.Accept();
	nobj.Display();
	
	iRet=nobj.Factorial();
	cout<<"Factorial is:"<<iRet<<endl;
	return 0;
}


