/*
Enter the number :
5
*       1       *       2       *       3       *       4       *

*/
#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iNo1;

    public:
        Pattern(int a)
        {
            this->iNo1 = a;
            
        }

        void DisplayPattern()
        {
            int iCnt=0;
			for(iCnt=1;iCnt<=iNo1;iCnt++)
			{
				cout<<"*\t"<<iCnt<<"\t";
			}
		
        }
};

int main()
{
	int iValue1=0;
	
	cout<<"Enter the number :"<<endl;
	cin>>iValue1;
	
	
	
    Pattern obj(iValue1);
    obj.DisplayPattern();

    return 0;
}