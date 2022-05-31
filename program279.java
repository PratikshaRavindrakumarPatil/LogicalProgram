/*
OUTPUT:

Enter the number of row:
5
Enter the number of columns:
8
1       1       1       1       1       1       1       1
2       2       2       2       2       2       2       2
3       3       3       3       3       3       3       3
4       4       4       4       4       4       4       4
5       5       5       5       5       5       5       5



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
				System.out.print(i+"\t");
			}
			
			System.out.println();
		}
    }
}

class program279
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