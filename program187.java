/*
OUTPUT:
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
#       #       #       #       #       #
#                                       #
#                                       #
#                                       #
#                                       #
#       #       #       #       #       #
						
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
				if((j==1)||(j==iCol)||(i==1)||(i==iRow))
				{
					System.out.print("#\t");
				}
				else
				{
					System.out.print(" \t");
				}
			}
			System.out.println();
		}
	}
	
}

class program187
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
