/*
OUTPUT:
Enter the number:10
1
2
3
4
5
6
7
8
9
10

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
				int iCnt=0;
				
				if(iNo=-iNo)
				{
					iNo=-iNo;
				}
				
				for(iCnt=1;iCnt<=iNo;iCnt++)
				{
					cout<<iCnt<<endl;
				}
			}
			 
};

int main()
{
	Number nobj;
	nobj.Accept();
	nobj.Display();
	
	
	return 0;
}