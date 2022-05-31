/*
OUTPUT:

Enter the number of row:
4
Enter the number of columns:
5
2       4       6       8       10
1       3       5       7       9
2       4       6       8       10
1       3       5       7       9


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
		int iCnt=0;
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1,iCnt=1;j<=iCol;j++,iCnt++)
			{
				if(i%2!=0)
				{
					System.out.print(iCnt*2+"\t");
				}
				else
				{
					System.out.print(iCnt+"\t");
					iCnt++;
				}
			}
			
			System.out.println();
		}
    }
}

class program286
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
