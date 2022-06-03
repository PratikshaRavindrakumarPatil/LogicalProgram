/*
OUTPUT:
Enter the size of array:
5
Enter the number:
12
21
22
34
2
Number are:
12      21      22      34      2
Even number are:
Count of even number is:4


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
		
		int CountEven()
		{
			int iCnt=0;
			int iCount=0;
			cout<<"Even number are:"<<endl;
			for(iCnt=0;iCnt<iLength;iCnt++)
			{
				if((Arr[iCnt]%2)==0)
				{
					iCount++;
				}
			}
			return iCount;
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
	iRet=nobj.CountEven();
	cout<<"Count of even number is:"<<iRet<<endl;

	
	return 0;
}