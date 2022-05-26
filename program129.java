/*
OUTPUT:

Enter the number of rows:
4
Enter the number of columns:
4
*       *       *       *
*       *       *       *
*       *       *       *
*       *       *       *




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
	
	public void DisplayPattern()
	{
		int i=0,j=0;
		
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
				System.out.print("*\t");
			}
			System.out.println();
		}
	}
}

class program129
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		pobj.Accept();
		pobj.DisplayPattern();
	}
}