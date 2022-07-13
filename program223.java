import java.lang.*;
import java.util.*;

class Number
{
	public int Display(int iRow,int iCol)
	{
		Scanner sobj=new Scanner(System.in);
		int Arr[][]=new int[iRow][iCol];
		
		System.out.println("Enter the number:");
		int i=0,j=0;
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				Arr[i][j]=sobj.nextInt();
			}
		}
		
		int iMax=Arr[0][0];
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				if(i==j)
				{
					if(iMax<Arr[i][j])
					{
						iMax=Arr[i][j];
					}
					
				}
			}
		}
		
		int iMax1=Arr[0][0];
		
		for(i=iRow;i>=1;i--)
		{
			for(j=0;j<iCol;j++)
			{
				if(i==j)
				{
					if(iMax1<Arr[i][j])
					{
						iMax1=Arr[i][j];
					}
					
				}
			}
		}
		
		System.out.println("iMax1="+iMax1);
		if(iMax>iMax1)
		{
			return iMax;
		}
		else
		{
			return iMax1;
		}
	}
}


class program223
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of rows:");
		int iRow=sobj.nextInt();
		
		System.out.println("Enter the number of columns:");
		int iCol=sobj.nextInt();
		
		
		Number obj=new Number();
		int iRet=obj.Display(iRow,iCol);
		System.out.println("Largest number is:"+iRet);
		
		
	}
}