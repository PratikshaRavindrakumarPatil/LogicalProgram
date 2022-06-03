/*
OUTPUT:
Enter the number:
121
Number is:121
Given number is palindrome

Enter the number:
1234
Number is:1234
Given number is not palindrome
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
		bool CheckPalindrome();
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

bool Number::CheckPalindrome()
{
	int iDigit=0;
	int iSum=0;
	int iRev=0,temp=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	temp=iNo;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	if(temp==iRev)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	
	Number nobj;
	
	bool bRet=0;
	
	nobj.Accept();
	nobj.Display();
	bRet=nobj.CheckPalindrome();
	if(bRet==true)
	{
		cout<<"Given number is palindrome"<<endl;
	}
	else
	{
		cout<<"Given number is not palindrome"<<endl;
	}

	return 0;
}