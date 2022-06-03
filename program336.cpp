/*
OUTPUT:
Enter the number:
12345
Number is:12345
Total digit are:5


Enter the number:
-1232
Number is:-1232
Total digit are:4

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
		int CountDigit();
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

int Number::CountDigit()
{
	int iDigit=0;
	int Count=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		Count++;
		iNo=iNo/10;
	}
	return Count;
}

int main()
{
	
	Number nobj;
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();
	iRet=nobj.CountDigit();
	cout<<"Total digit are:"<<iRet<<endl;
	
	return 0;
}