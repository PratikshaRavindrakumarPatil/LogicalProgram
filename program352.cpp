/*
OUTPUT:

Enter the size of array:
5
Enter the number:
12
11
21
101
121
Number are:
12      11      21      101     121
Enter the number that you want to search:
101
The given number is present



*/
#include<iostream>
using namespace std;

class N_Number
{
	private:
		int *Arr;
		int iLength;
		
	public :
		N_Number(int iValue)
		{
			this->iLength=iValue;
			Arr=new int[iLength];
		}
		
		void Accept()
		{
			int iCnt=0;
			cout<<"Enter the number:"<<endl;
			for(iCnt=0;iCnt<iLength;iCnt++)
			{
				cin>>Arr[iCnt];
			}
		}
		
		void Display()
		{
			int iCnt=0;
			cout<<"Number are:"<<endl;
			for(iCnt=0;iCnt<iLength;iCnt++)
			{
				cout<<Arr[iCnt]<<"\t";
			}
			cout<<endl;
			
		}
		
		bool Search()
		{
			int No=0;
			int iCnt=0;
			bool flag=false;
			
			cout<<"Enter the number that you want to search:"<<endl;
			cin>>No;
				
			for(iCnt=0;iCnt<No;iCnt++)
			{
				if(No==Arr[iCnt])
				{
					flag=true;
					break;
				}
			}
			
			if(flag==true)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
};
int main()
{
	int iSize=0;
	bool bRet=false;
	cout<<"Enter the size of array:"<<endl;
	cin>>iSize;
	
	N_Number nobj(iSize);
	nobj.Accept();
	nobj.Display();
	bRet=nobj.Search();
	
	if(bRet==true)
	{
		cout<<"The given number is present"<<endl;
	}
	else
	{
		cout<<"The given number not is present"<<endl;
	}
	
	return 0;
}