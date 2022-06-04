/*

Enter the number :
7
*       2       *       4       *       6       *

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
				if(iCnt%2==0)
				{
					cout<<iCnt<<"\t";
				}
				else
				{
					cout<<"*\t";
				}
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