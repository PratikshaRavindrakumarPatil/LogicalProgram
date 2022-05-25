//Template for problem on number

/*
output:
Enter the elements:
10
20
30
40
50
Elements of array are
10
20
30
40
50
Addition is:150	


*/
#include<iostream>
using namespace std;

class ArrayX
{
	private:
		int *Arr;
		int iSize;
		
	public:
		ArrayX(int iValue)
		{
			this->iSize=iValue;
			Arr=new int[iSize]; //Resource  
			
		}
		
		
		~ArrayX()
		{
			delete []Arr;	//Dellocation of Resource
		}
		
		void Accept()
		{
			int iCnt=0;
			cout<<"Enter the elements:"<<endl;
			
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				cin>>Arr[iCnt];
			}
		
		}
		
		void Display()
		{
			int iCnt=0;
			cout<<"Elements of array are"<<endl;
			
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				cout<<Arr[iCnt]<<endl;
			}
		}
		
		int Summation()
		{
			int iCnt=0;
			int iSum=0;
			
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				iSum=iSum+Arr[iCnt];
			}
			
			return iSum;
		}
		
};

int main()
{
	int iNo=0;
	int iRet=0;
	
	
	
	ArrayX obj1(5);
	obj1.Accept();
	obj1.Display();
	iRet=obj1.Summation();
	
	cout<<"Addition is:"<<iRet<<endl;
	
	
	return 0;
}