/*
OUTPUT:

Enter the number of row:
6
Enter the number of columns:
6
@       @       @       @       @       @
@       *       *       *       @       @
@       *       *       @       +       @
@       *       @       +       +       @
@       @       +       +       +       @
@       @       @       @       @       @


*/
import java.lang.*;
import java.util.*;

class Pattern
{
    private int iRow, iCol;

    public Pattern(int iNo1, int iNo2)
    {
        iRow = iNo1;
        iCol = iNo2;
    }

    public void DisplayPattern()
    {
        int i=0,j=0;
			
		if(iRow!=iCol)
		{
			System.out.println("Please enter square dimension");
			return;
		}			
			
		for(i=1;i<=iRow;i++)
		{
			for(j=iCol;j>=1;j--)
			{
				if((j==1)||(j==iCol)||(i==1)||(i==iRow)||(i==j))
				{
					System.out.print("@\t");
				}
				else if(j<i)
				{
					System.out.print("+\t");
				}
				else if(j>i)
				{
					System.out.print("*\t");
				}
			}
			
			System.out.println();
		}
    }
}

class program302
{
    public static void main(String arg[])
    {
		int iValue1=0,iValue2=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number of row:");
		iValue1=sobj.nextInt();	
		
		System.out.println("Enter the number of columns:");
		iValue2=sobj.nextInt();	
		
        Pattern obj = new Pattern(iValue1,iValue2);

        obj.DisplayPattern();
    }
}
