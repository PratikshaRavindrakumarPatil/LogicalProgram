/*
OUTPUT:
Enter the number:
12
Number is:12
Total factor are:5


Enter the number:
-12
Number is:-12
Total factor are:5


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

	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
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
	int iRet=0;
	
	Number nobj;
	nobj.Accept();
	nobj.Display();
	iRet=nobj.CountFactor();
	cout<<"Total factor are:"<<iRet<<endl;
	
	return 0;
}