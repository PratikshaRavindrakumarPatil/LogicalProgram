/*

Enter the rows:
5
Enter the columns:
5
A       A       A       A       A
B       B       B       B       B
C       C       C       C       C
D       D       D       D       D
E       E       E       E       E

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
			char ch='\0';
			
			for(i=1,ch='A';i<=iRow;i++,ch++)
			{
				for(j=1;j<=iCol;j++)
				{
					cout<<ch<<"\t";
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