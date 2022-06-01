/*
OUTPUT:

Enter the number:5
Jay Ganesh..
Jay Ganesh..
Jay Ganesh..
Jay Ganesh..
Jay Ganesh..

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
				for(iCnt=1;iCnt<=iNo;iCnt++)
				{
					cout<<"Jay Ganesh.."<<endl;
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