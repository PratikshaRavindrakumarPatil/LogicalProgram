import java.lang.*;
import java.util.*;

class Matrix
{
	public int iRow;
	public int iCol;
	public int Arr[][];
	
	public Matrix(int a,int b)
	{
		this.iRow=a;
		this.iCol=b;
		Arr=new int[iRow][iCol];
	}
	
	protected void finalize()
	{
		Arr=null;
		System.gc();
	}
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		
		int i=0,j=0;
		
		System.out.println("Enter the number:");
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr[i].length;j++)
			{
				Arr[i][j]=sobj.nextInt();
			}
		}
		
		
	}
	
	public void Display()
	{
		System.out.println("Elements of array are:");
		
		int i=0,j=0;
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr[i].length;j++)
			{
				System.out.print(Arr[i][j]+"\t");
			}
			System.out.println();
		}
		
	}
		
}

class program335
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of rows:");
		int X=sobj.nextInt();
		
		System.out.println("Enter the number of columns:");
		int Y=sobj.nextInt();
		
		Matrix mobj=new Matrix(X,Y);
		mobj.Accept();
		mobj.Display();
	
	}
}
