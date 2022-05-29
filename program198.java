/*
OUTPUT:
Enter the number of rows:
4
Enter the number of columns:
4
Rows:4
Columns:4
a       b       c       d
a       b       c       d
a       b       c       d
a       b       c       d
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
		char ch='\0';
		if(iRow!=iCol)
		{
			System.out.println("Please enter square dimensions.");
			return;
		}
		for(i=1;i<=iRow;i++)
		{
			for(j=1,ch='a';j<=iCol;j++,ch++)
			{
					System.out.print(ch+"\t");

			}
			System.out.println();
		}
	}
	
}

class program198
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
