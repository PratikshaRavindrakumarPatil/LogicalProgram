import java.lang.*;
import java.util.*;
import MatrixPackage.Matrix;

class MatrixX extends Matrix
{
	public MatrixX(int a,int b)
	{
		super(a,b);
	}
	
	public boolean CheckIdentity()
	{
		int i=0,j=0;
		
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				if(i==j)
				{
					if(Arr[i][j]!=1)
					{
						break;
					}
				}
				else if(Arr[i][j]!=0)
				{
					break;
				}
			}	
		}
		
		if(i==iRow)
			{
				return true;
			}
			else
			{
				return false;
			}
	}
	
}

class program229
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
		
		
		boolean bRet=mobj.CheckIdentity();
		if(bRet==true)
		{
			System.out.println("It is identity matrix");
		}
		else
		{
			System.out.println("It is not identity matrix");
		}
		
	}
}
