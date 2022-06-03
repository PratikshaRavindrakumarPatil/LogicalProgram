/*
OUTPUT:

Enter the number:
11
Number is:11
Given number is prime

Enter the number:
12
Number is:12
Given number is not prime

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
		bool CheckPrime();
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

bool Number::CheckPrime()
{
	int iCnt=0;
	int count=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			count++;
		}
	}
	
	if(count==2)
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
	bool bRet=false;
	
	Number nobj;
	nobj.Accept();
	nobj.Display();
	bRet=nobj.CheckPrime();
	if(bRet==true)
	{
		cout<<"Given number is prime"<<endl;
	}
	else
	{
		cout<<"Given number is not prime"<<endl;
	}
	
	return 0;
}