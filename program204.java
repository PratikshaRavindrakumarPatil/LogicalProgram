/*
OUTPUT:
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
A
A       B
A       B       C
A       B       C       D
A       B       C       D       E

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
			for(j=1,ch='A';j<=i;j++,ch++)
			{
					System.out.print(ch+"\t");

			}
			System.out.println();
		}
	}
	
}

class program204
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
