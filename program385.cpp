/*


Enter the rows:
4
Enter the columns:
4
*       *       *       *
*       *       *
*       *
*

*/
#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow, iCol;

    public:
        Pattern(int a, int b)
        {
            this->iRow = a;
            this->iCol = b;
        }

        void DisplayPattern()
        {
			int i=0,j=0;
			
			if(iRow!=iCol)
			{
				cout<<"Please enter square dimensions.";
				return;
			}
			
			for(i=1;i<=iRow;i++)
			{
				for(j=iCol;j>=1;j--)
				{
					if(j>=i)
					{
						cout<<"*\t";
					}
					else
					{
						cout<<"\t";
					}
				}
				cout<<endl;
			}
			
        }
};

int main()
{
	int iValue1=0,iValue2=0;
	
	cout<<"Enter the rows:"<<endl;
	cin>>iValue1;
	cout<<"Enter the columns:"<<endl;
	cin>>iValue2;
	
	
    Pattern obj(iValue1,iValue2);
    obj.DisplayPattern();

    return 0;
}