/*
OUTPUT:
Enter the number:15
Number is:15
Given number is divisible of 3 and 5

Enter the number:20
Number is:20
Given number is not divisible of 3 and 5

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
				cout<<"Enter the number:";
				cin>>this->iNo;
			}
			void Display()
			{
				cout<<"Number is:"<<iNo<<endl;
			}
			
			bool Check()
			{
				if(((iNo%3)==0)&&((iNo%5)==0))
				{
					return true;
					
				}
				else
				{
					return false;
					
				}
			}
			 
};

int main()
{
	Number nobj;
	bool bRet=false;
	
	
	nobj.Accept();
	nobj.Display();
	bRet=nobj.Check();
	
	
	if(bRet==true)
	{
		cout<<"Given number is divisible of 3 and 5"<<endl;
	}
	else
	{
		cout<<"Given number is not divisible of 3 and 5"<<endl;	
	}
	return 0;
}