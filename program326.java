/*

Enter the number of rows:
3
Enter the number of columns:
3
Enter the number:
11
21
10
20
30
22
32
21
23
11 21 10
20 30 22
32 21 23


*/

import java.io.*;
import java.util.*;


class program326
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
			
		
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr[i].length;j++)
			{
				System.out.print(Arr[i][j]+" ");
			}
			System.out.println();
		}
	}
}