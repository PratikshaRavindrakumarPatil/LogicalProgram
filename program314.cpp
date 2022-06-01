/*
By reducing time complexity

OUTPUT:

Enter the number:12
Number is:12
1       2       3       4       6

Enter the number:15
Number is:15
1       3       5

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
			
			void DisplayNonFactor()
			{
				int iCnt=0;
				
				if(iNo<0)
				{
					iNo=-iNo;
				}
				
				for(iCnt=1;iCnt<iNo;iCnt++)
				{
					if((iNo%iCnt)!=0)
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
	nobj.DisplayNonFactor();
	
	return 0;
}
