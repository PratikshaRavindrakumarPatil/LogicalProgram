/*


OUTPUT:

Enter the number:12
Number is:12
Addition of factor is:16

Enter the number:-10
Number is:-10
Addition of factor is:8


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
			
			int SumFactor()
			{
				int iCnt=0;
				int iSum=0;
				
				if(iNo<0)
				{
					iNo=-iNo;
				}
				
				for(iCnt=1;iCnt<=iNo/2;iCnt++)
				{
					if(iNo%iCnt==0)
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
	iRet=nobj.SumFactor();
	cout<<"Addition of factor is:"<<iRet<<endl;
	return 0;
}
