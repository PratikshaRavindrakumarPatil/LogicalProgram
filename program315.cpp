/*
By reducing time complexity

OUTPUT:

Enter the number:20
Number is:20
Addition of non factor is:168

Enter the number:10
Number is:10
Addition of non factor is:37

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
			
			int SumNonFactor()
			{
				int iCnt=0;
				int iSum=0;
				
				if(iNo<0)
				{
					iNo=-iNo;
				}
				
				for(iCnt=1;iCnt<iNo;iCnt++)
				{
					if((iNo%iCnt)!=0)
					{
						iSum=iSum+iCnt;
					}
				}
				return iSum;
			}
			 
};


int main()
{
	Number nobj;
	
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();
	iRet=nobj.SumNonFactor();
	cout<<"Addition of non factor is:"<<iRet<<endl;
	
	return 0;
}
