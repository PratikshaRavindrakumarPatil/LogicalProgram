import java.lang.*;
import java.util.*;

class Pattern
{
	private int iRow,iCol;
	
	public Pattern(int a,int b)
	{
		iRow=a;
		iCol=b;
	}
	
	public void DisplayPattern()
	{
		int i=0, j=0;
			
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
class program145
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern(4,4);
		pobj.DisplayPattern();
		
	}
}