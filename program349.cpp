/*
OUTPUT:

Enter the size of array:
5
Enter the number:
23
11
101
25
121
Number are:
23      11      101     25      121
Maximum number is:121


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
		
		int Maximum()
		{
			int iCnt=0;
			int iMax=0;
			
			iMax=Arr[iCnt];
			for(iCnt=0;iCnt<iLength;iCnt++)
			{
				if(iMax<Arr[iCnt])
				{
					iMax=Arr[iCnt];
				}
			}
			return iMax;
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
	iRet=nobj.Maximum();
	cout<<"Maximum number is:"<<iRet<<endl;

	
	return 0;
}