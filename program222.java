import java.lang.*;
import java.util.*;

class Number
{
	public int Display(int iRow,int iCol,int iNo)
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
		
		int Count=0;
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				if(Arr[i][j]==iNo)
				{
					Count++;
				}
			}
		}
		
		return Count;
	}
}


class program222
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number of rows:");
		int iRow=sobj.nextInt();
		
		System.out.println("Enter the number of columns:");
		int iCol=sobj.nextInt();
		
		System.out.println("Enter the number that want search:");
		int no=sobj.nextInt();
		
		Number obj=new Number();
		int iRet=obj.Display(iRow,iCol,no);
		System.out.println(no+" occures :"+iRet+" times");
		
		
	}
}