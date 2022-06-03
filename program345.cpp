/*
OUTPUT:
Enter the size of arry:
4
Enter the number:
11
21
31
41
The number are:
11      21      31      4


*/
#include<iostream>
using namespace std;

class N_Number
{
	private:
		int *Arr;
		int iLength;
	
	public:
		N_Number(int iValue)
		{
			this->iLength=iValue;
			Arr=new int[iLength];
		}
		
		~N_Number()
		{
			delete []Arr;
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
			cout<<"The number are:"<<endl;
			for(iCnt=0;iCnt<iLength;iCnt++)
			{
				cout<<Arr[iCnt]<<"\t";
			}
		}
};

int main()
{
	int iSize=0;
	cout<<"Enter the size of arry:"<<endl;
	cin>>iSize;
	
	N_Number nobj(iSize);
	nobj.Accept();
	nobj.Display();
	
	return 0;
}