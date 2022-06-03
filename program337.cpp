/*
OUTPUT:
Enter the number:
1234
Number is:1234
Sum of digit is:10

Enter the number:
23
Number is:23
Sum of digit is:5

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
		int DigitSum();
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

int Number::DigitSum()
{
	int iDigit=0;
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	return iSum;
}

int main()
{
	
	Number nobj;
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();
	iRet=nobj.DigitSum();
	cout<<"Sum of digit is:"<<iRet<<endl;
	
	return 0;
}