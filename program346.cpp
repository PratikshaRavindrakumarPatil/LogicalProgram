/*
OUTPUT:
Enter the size of array:
5
Enter the number:
34
222
12
11
21
Number are:
34      222     12      11      21
Even number are:
34      222     12

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
		
		void DisplayEven()
		{
			int iCnt=0;
			cout<<"Even number are:"<<endl;
			for(iCnt=0;iCnt<iLength;iCnt++)
			{
				if((Arr[iCnt]%2)==0)
				{
					cout<<Arr[iCnt]<<"\t";
				}
			}
			
		}
		
};
int main()
{
	int iSize=0;
	cout<<"Enter the size of array:"<<endl;
	cin>>iSize;
	
	N_Number nobj(iSize);
	nobj.Accept();
	nobj.Display();
	nobj.DisplayEven();

	
	return 0;
}