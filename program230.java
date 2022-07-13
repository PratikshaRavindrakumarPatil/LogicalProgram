import java.lang.*;
import java.util.*;
import MatrixPackage.Matrix;

class MatrixX extends Matrix
{
	public MatrixX(int a,int b)
	{
		super(a,b);
	}
	
	public boolean CheckSquare()
	{
		int i=0,j=0;
		int Count1=0,Count2=0;
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				if(Arr[i][j]==0)
				{
					Count1++;
				}
				else
				{
					Count2++;
				}
				
			}	
		}
		
		if(Count1>Count2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
}

class program230
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
		
		
		boolean bRet=mobj.CheckSquare();
		if(bRet==true)
		{
			System.out.println("It is square matrix");
		}
		else
		{
			System.out.println("It is not square matrix");
		}
		
	}
}
