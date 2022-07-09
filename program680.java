import java.lang.*;
import java.util.*;

class Number
{
	public void Display(int Arr[][],int iRow,int iCol)
	{
		int i=0,j=0;
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				System.out.print(Arr[i][j]+" ");
			}
			System.out.println();
		}
		
	}
}


class program680
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of rows:");
		int iRow=sobj.nextInt();
		
		System.out.println("Enter the number of columns:");
		int iCol=sobj.nextInt();
		
		int Arr[][]=new int[iRow][iCol];
		System.out.println("Enter the number:");
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr[i].length;j++)
			{
				Arr[i][j]=sobj.nextInt();
			}
		}
		
		
		Number obj=new Number();
		obj.Display(Arr,iRow,iCol);
	}
}