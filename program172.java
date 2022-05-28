/*
OUTPUT:
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
        1       1       1       1       1
        2       2       2       2       2
        3       3       3       3       3
        4       4       4       4       4
        5       5       5       5       5
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
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				System.out.print(" \t"+i);
			}
			System.out.println();
		}
	}
	
}

class program172
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
