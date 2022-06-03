/*
OUTPUT:
Enter the number:
123
Number is:123
Reverse number is:321

Enter the number:
38744
Number is:38744
Reverse number is:44783
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
		int Reverse();
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

int Number::Reverse()
{
	int iDigit=0;
	int iSum=0;
	int iRev=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}

int main()
{
	
	Number nobj;
	
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();
	iRet=nobj.Reverse();
	cout<<"Reverse number is:"<<iRet<<endl;
	
	return 0;
}