/*
OUTPUT:

Enter the number of row:
5
Enter the number of columns:
5
A       B       C       D       E
a       b       c       d       e
A       B       C       D       E
a       b       c       d       e
A       B       C       D       E


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
		char ch='\0',chh='\0';
		for(i=1;i<=iRow;i++)
		{
			for(j=1,ch='A',chh='a';j<=iCol;j++,ch++,chh++)
			{
				if(i%2==0)
				{
					System.out.print(chh+"\t");
				}
				else
				{
					System.out.print(ch+"\t");
				}
			}
			
			System.out.println();
		}
    }
}

class program281
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