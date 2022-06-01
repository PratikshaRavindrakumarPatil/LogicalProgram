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
			
			int Summation()
			{
				int iCnt=0;
				int iSum=0;
				
				if(iNo<0)
				{
					iNo=-iNo;
				}
				
				for(iCnt=1;iCnt<=iNo;iCnt++)
				{
					iSum=iSum+iCnt;
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
	iRet=nobj.Summation();
	cout<<"Summation is:"<<iRet<<endl;
	return 0;
}