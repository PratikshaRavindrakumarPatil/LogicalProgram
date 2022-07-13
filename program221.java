/*

Enter number of rows:
4
Enter number of coloumn:
4
Enter the number:
11
21
10
20
22
12
23
34
44
3
3
4
5
6
7
8
Addition of diagonal number is:34

*/
import java.lang.*;
import java.util.*;


class program221
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter number of rows:");
		int iRow=sobj.nextInt();
		
		System.out.println("Enter number of coloumn:");
		int iCol=sobj.nextInt();
		
		System.out.println("Enter the number:");
		int i=0,j=0;
		int Arr[][]=new int[iRow][iCol]; 
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				Arr[i][j]=sobj.nextInt();
			}
		}
		
		int iSum=0;
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				if(j==i)
				{
					iSum=iSum+Arr[i][j];
				}
			}
		}
		
		System.out.println("Addition of diagonal number is:"+iSum);
	}
}