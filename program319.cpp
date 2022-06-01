/*
By reducing time complexity

OUTPUT:

Enter the number:12
Number is:12
Factor in forword order:
1       2       3       4       6
Factor in Backword order:
6       4       3       2       1

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
			
			void ForwardFactor()
			{
				int iCnt=0;
				
				if(iNo<0)
				{
					iNo=-iNo;
				}
				
				for(iCnt=1;iCnt<=iNo/2;iCnt++)
				{
					if(iNo%iCnt==0)
					{
						cout<<iCnt<<"\t";
					}
				}
			}
			
			void BackwordFactor()
			{
				int iCnt=0;
				
				if(iNo<0)
				{
					iNo=-iNo;
				}
				
				for(iCnt=iNo/2;iCnt>=1;iCnt--)
				{
					if(iNo%iCnt==0)
					{
						cout<<iCnt<<"\t";
					}
				}
			}
			 
};


int main()
{
	Number nobj;
	nobj.Accept();
	nobj.Display();
	cout<<"Factor in forword order:"<<endl;
	
	nobj.ForwardFactor();
	cout<<endl<<"Factor in Backword order:"<<endl;
	nobj.BackwordFactor();
	
	return 0;
}
