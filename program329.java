/*




*/

import java.io.*;
import java.util.*;


class program329
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
			for(j=0;j<Arr[i].length;j++)
			{
				if(((Arr[i][j])%2)!=0)
				{
					iSum=iSum+Arr[i][j];
				}
			}
			System.out.println();
		}
		
		System.out.println("Addition of odd number is:"+iSum);
	}
}