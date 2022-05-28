/*
OUTPUT:
Enter the number of rows:
4
Enter the number of columns:
4
Rows:4
Columns:4
*       2       3       4
1       *       3       4
1       2       *       4
1       2       3       *

*/

import java.lang.*;
import java.util.*;

class Pattern
{
	private int iRow,iCol;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number of rows:");
		iRow=sobj.nextInt();
		
		System.out.println("Enter the number of columns:");
		iCol=sobj.nextInt();
	}
	
	public void Display()
	{
		System.out.println("Rows:"+iRow);
		System.out.println("Columns:"+iCol);
	}
	
	public void DisplayPattern()
	{
		int i=0,j=0;
		if(iRow!=iCol)
		{
			return;
		}
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				if(i==j)
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print(j+"\t");
				}
			}
			System.out.println();
		}
	}
	
}

class program189
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
