/*
OUTPUT:

Enter the size of array:
5
Enter the number:
12
32
12
21
11
Number are:
12      32      12      21      11

Summation of  number is:88


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
		
		int Summation()
		{
			int iCnt=0;
			int iSum=0;
			
			
			for(iCnt=0;iCnt<iLength;iCnt++)
			{
				iSum=iSum+Arr[iCnt];
			}
			return iSum;
		}
		
};
int main()
{
	int iSize=0;
	int iRet=0;
	cout<<"Enter the size of array:"<<endl;
	cin>>iSize;
	
	N_Number nobj(iSize);
	nobj.Accept();
	nobj.Display();
	iRet=nobj.Summation();
	cout<<"Summation of  number is:"<<iRet<<endl;

	
	return 0;
}