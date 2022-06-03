/*
OUTPUT:

Enter the size of array:
6
Enter the number:
11
25
34
11
101
11
Number are:
11      25      34      11      101     11
Enter the number that you want to search:
11
The frequency of given number is:3



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
		
		int frequency()
		{
			int No=0;
			int iCnt=0,frequency=0;
			
			cout<<"Enter the number that you want to search:"<<endl;
			cin>>No;
				
			for(iCnt=0;iCnt<No;iCnt++)
			{
				if(No==Arr[iCnt])
				{
					frequency++;
				}
			}
			return frequency;
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
	iRet=nobj.frequency();
	cout<<"The frequency of given number is:"<<iRet<<endl;

	
	return 0;
}