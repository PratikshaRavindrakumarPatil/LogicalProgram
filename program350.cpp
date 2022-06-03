/*
OUTPUT:

Enter the size of array:
6
Enter the number:
23
101
293
23
21
121
Number are:
23      101     293     23      21      121
Minimum number is:21


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
		
		int Minimum()
		{
			int iCnt=0;
			int iMin=0;
			
			iMin=Arr[0];
			for(iCnt=0;iCnt<iLength;iCnt++)
			{
				if(iMin>Arr[iCnt])
				{
					iMin=Arr[iCnt];
				}
			}
			return iMin;
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
	iRet=nobj.Minimum();
	cout<<"Minimum number is:"<<iRet<<endl;

	
	return 0;
}