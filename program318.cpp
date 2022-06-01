/*


OUTPUT:

Enter the number:6
Number is:6
Given number is perfect number

Enter the number:12
Number is:12
Given number is not perfect number

Enter the number:28
Number is:28
Given number is perfect number
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
			
			int CheckPerfect()
			{
				int iCnt=0;
				int iSum=0;
				
				if(iNo<0)
				{
					iNo=-iNo;
				}
				
				for(iCnt=iNo/2;(iCnt>=1)&&(iSum<=iNo);iCnt--)
				{
					if(iNo%iCnt==0)
					{
						iSum=iSum+iCnt;
					}
				}
				
				if(iSum==iNo)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			 
};


int main()
{
	Number nobj;
	
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();
	iRet=nobj.CheckPerfect();
	
	if(iRet==1)
	{
		cout<<"Given number is perfect number"<<endl;
	}
	else
	{
		cout<<"Given number is not perfect number"<<endl;
	}
	
	return 0;
}
