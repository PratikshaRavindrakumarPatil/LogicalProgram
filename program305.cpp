/*
OUTPUT:
Enter the first number:
10
Enter the second number:
21
First number is:10
Second number is:21
Addition of two number:31

*/
#include<iostream>
using namespace std;

class Number
{
	private:
			int iNo1;
			int iNo2;
			
	public:
			void Accept()
			{
				cout<<"Enter the first number:"<<endl;
				cin>>iNo1;
				
				cout<<"Enter the second number:"<<endl;
				cin>>iNo2;
			}
			
			void Display()
			{
				cout<<"First number is:"<<iNo1<<endl;
				cout<<"Second number is:"<<iNo2<<endl;

			}
			int Addition()
			{
				int iSum=0;
				iSum=iNo1+iNo2;
				return iSum;
			}
};

int main()
{
	int iRet=0;
	
	Number nobj;
	nobj.Accept();
	nobj.Display();
	iRet=nobj.Addition();
	cout<<"Addition of two number:"<<iRet<<endl;
	
	return 0;
}
