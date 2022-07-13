import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MyMatrix extends Matrix
{
	public MyMatrix(int a,int b)
	{
		super(a,b);
	}
	
	public int Maximum()
	{
		int iMax=Arr[0][0];
		
		int i=0,j=0;
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				if(Arr[i][j]>iMax)
				{
					iMax=Arr[i][j];
				}
			}
			
		}
		
		return iMax;
	}
	
}

class program337
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of rows:");
		int X=sobj.nextInt();
		
		System.out.println("Enter the number of columns:");
		int Y=sobj.nextInt();
		
		MyMatrix mobj=new MyMatrix(X,Y);
		mobj.Accept();
		mobj.Display();
		int iRet=mobj.Maximum();
		System.out.println("Maximum number is:"+iRet);
	}
}
