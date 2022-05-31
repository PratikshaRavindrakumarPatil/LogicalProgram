/*
OUTPUT:

Enter the number of row:
6
Enter the number of columns:
6
 1       2       3       4       5       6
-1      -2      -3      -4      -5      -6
 1       2       3       4       5       6
-1      -2      -3      -4      -5      -6
 1       2       3       4       5       6
-1      -2      -3      -4      -5      -6



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
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if(i%2!=0)
				{
					System.out.print(" "+j+"\t");
				}
				else
				{
					System.out.print((-j)+"\t");
				}
			}
			
			System.out.println();
		}
    }
}

class program288
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
