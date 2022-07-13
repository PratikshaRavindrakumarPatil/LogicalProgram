import java.lang.*;
import java.util.*;
import MatrixPackage.Matrix;

class MatrixX extends Matrix
{
	public MatrixX(int a,int b)
	{
		super(a,b);
	}
	
	public void Reverse()
	{
		int i=0,j=0;
		
		
		for(i=0;i<iRow;i++)
		{
			for(j=iCol-1;j>=0;j--)
			{
				System.out.print(Arr[i][j]+"\t");
				
			}
			System.out.println();
			
		}
	}
	
}

class program227
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of rows:");
		int iRow=sobj.nextInt();
		
		System.out.println("Enter the number of columns:");
		int iCol=sobj.nextInt();
		
		MatrixX mobj=new MatrixX(iRow,iCol);
		mobj.Accept();
		mobj.Display();
		
		System.out.println("After reverse rows:");
		mobj.Reverse();
		
		
	}
}
