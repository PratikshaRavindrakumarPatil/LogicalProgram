/*
OUTPUT:
Enter the number:
1234
Number is:1234
4       3       2       1


Enter the number:
-2398
Number is:-2398
8       9       3       2

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
		void DisplayDigit();
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

void Number::DisplayDigit()
{
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		cout<<iDigit<<"\t";
		iNo=iNo/10;
	}
}

int main()
{
	
	Number nobj;
	nobj.Accept();
	nobj.Display();
	nobj.DisplayDigit();
	
	
	return 0;
}