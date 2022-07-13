package MatrixPackage; 
import java.lang.*;
import java.util.*;

public class Matrix
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
	
	public void finalize()
	{
		Arr=null;
		System.gc();
	}
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		
		int i=0,j=0;
		System.out.println("Enter the number:");
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				Arr[i][j]=sobj.nextInt();
			}
		}
		
	}
	
	public void Display()
	{
		
		int i=0,j=0;
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				System.out.print(Arr[i][j]+"\t");
			}
			System.out.println();
		}
	}
}


