import java.lang.*;
import java.util.*;
import MatrixPackage.Matrix;

class MatrixX extends Matrix
{
	public MatrixX(int a,int b)
	{
		super(a,b);
	}
	
	public void SwapRow()
	{
		int i=0,j=0;
		int iTemp=0;
		
		for(i=0;i<iRow-1;i=i+2)
		{
			for(j=0;j<iCol;j++)
			{
				iTemp=Arr[i][j];
				Arr[i][j]=Arr[i+1][j];
				Arr[i+1][j]=iTemp;
				
			}
			System.out.println();
			
		}
	}
	
}

class program225
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
		
		System.out.println("After swapping rows:");
		mobj.SwapRow();
		mobj.Display();
		
	}
}
