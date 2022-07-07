/*

Enter the number of rows:
4
Enter the number of columns:
4
Enter the number:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16

Addition of row number is:16


*/

import java.io.*;
import java.util.*;


class program331
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
		int i=0;
		int j=0;
		
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr[i].length;j++)
			{
				Arr[i][j]=sobj.nextInt();
			}
		}
			
		
		int iSum=0;
		
		for(i=0;i<Arr.length;i++)
		{
			iSum=0;
			for(j=0;j<Arr[i].length;j++)
			{
				if(i==j)
				{
					iSum=iSum+Arr[i][j];
				}
			}
			System.out.println();
		}
		System.out.println("Addition of diagonal number is:"+iSum);
		
	}
}