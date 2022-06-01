/*
OUTPUT:
Enter the number:12
Number is:12
Given number is even

Enter the number:-111
Number is:-111
Given number is odd

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
			
			bool CheckEven()
			{
				if((iNo%2)==0)
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
	bRet=nobj.CheckEven();
	
	
	if(bRet==true)
	{
		cout<<"Given number is even"<<endl;
	}
	else
	{
		cout<<"Given number is odd"<<endl;	
	}
	return 0;
}