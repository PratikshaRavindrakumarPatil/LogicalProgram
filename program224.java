import java.lang.*;
import java.util.*;
import MatrixPackage.Matrix;

class MatrixX extends Matrix
{
	public MatrixX(int a,int b)
	{
		super(a,b);
	}
	
	public void Addition()
	{
		int i=0,j=0;
		int iSum=0;
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				iSum=iSum+Arr[j][i];
			}
			System.out.print(iSum+"\t");
			iSum=0;
		}
	}
	
}

class program224
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
		mobj.Addition();
	}
}
