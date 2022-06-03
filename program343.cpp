/*
OUTPUT:
Enter the number:
153
Number is:153
Given number is amstrong

Enter the number:
1634
Number is:1634
Given number is amstrong

Enter the number:
123
Number is:123
Given number is not amstrong


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
		bool CheckAmstrong();
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

bool Number::CheckAmstrong()
{
	int iDigit=0,iCount=0;
	int iSum=0,iMult=1;
	int temp=0,iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	temp=iNo;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iCount++;
		iNo=iNo/10;
	}	
	
	iNo=temp;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iMult=1;
		for(iCnt=1;iCnt<=iCount;iCnt++)
		{
			iMult=iMult*iDigit;
		}
		iSum=iSum+iMult;
		iNo=iNo/10;
	}
	
	
	if(temp==iSum)
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
	bRet=nobj.CheckAmstrong();
	if(bRet==true)
	{
		cout<<"Given number is amstrong"<<endl;
	}
	else
	{
		cout<<"Given number is not amstrong"<<endl;
	}

	return 0;
}