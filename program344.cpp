/*
OUTPUT:

Enter the size of array:
5
Enter the elements
11
2
111
51
12
Elements of array are
11      2       111     51      12
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
            this->iSize = iValue;
            Arr = new int[iSize];       
        }

        ~ArrayX()                       
        {
            delete []Arr;               
        }

        void Accept()   
        {
            int iCnt = 0;
            cout<<"Enter the elements"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                    cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of array are "<<endl;
            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
        }

      
};

int main()
{
	int iLength=0;
	cout<<"Enter the size of array:"<<endl;
	cin>>iLength;
	
    ArrayX obj1(iLength);

    obj1.Accept();     
    obj1.Display();   

    

    return 0;
}