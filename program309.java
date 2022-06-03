/*
OUTPUT:
Enter the number:10
Number is:10
Summation is:55

Enter the number:-5
Number is:-5
Summation is:15

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
			
			void CheckEven()
			{
				if((iNo%2)==0)
				{
					cout<<"Given number is even"<<endl;
				}
				else
				{
					cout<<"Given number is odd"<<endl;
				}
			}
			 
};

int main()
{
	Number nobj;
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();
	nobj.CheckEven();
	return 0;
}