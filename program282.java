/*
OUTPUT:

Enter the number of row:
5
Enter the number of columns:
5
A       A       A       A       A
B       B       B       B       B
C       C       C       C       C
D       D       D       D       D
E       E       E       E       E


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
		char ch='\0';
		for(i=1,ch='A';i<=iRow;i++,ch++)
		{
			for(j=1;j<=iCol;j++)
			{
				System.out.print(ch+"\t");
			}
			
			System.out.println();
		}
    }
}

class program282
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