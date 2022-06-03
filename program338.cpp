/*
OUTPUT:
Enter the number:
12554
Number is:12554
4       2

Enter the number:
34218
Number is:34218
8       2       4
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
		void DisplayEven();
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

void Number::DisplayEven()
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
		if(iDigit%2==0)
		{
			cout<<iDigit<<"\t";
		}
		iNo=iNo/10;
	}
	
}

int main()
{
	
	Number nobj;
	
	nobj.Accept();
	nobj.Display();
	nobj.DisplayEven();
	
	return 0;
}