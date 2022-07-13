import java.lang.*;
import java.util.*;
import MatrixPackage.Matrix;

class MatrixX extends Matrix
{
	public MatrixX(int a,int b)
	{
		super(a,b);
	}
	
	public void ReverseCol()
	{
		int i=0,j=0;
		
		
		for(i=iRow-1;i>=0;i--)
		{
			for(j=0;j<iCol;j++)
			{
				System.out.print(Arr[i][j]+"\t");
				
			}
			System.out.println();
			
		}
	}
	
}

class program228
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
		
		System.out.println("After reverse columns:");
		mobj.ReverseCol();
		
		
	}
}
