/*

Enter the Number:
23456
2 3 4 5 6
2 3 4 5 6
2 3 4 5 6
2 3 4 5 6
2 3 4 5 6

*/


import java.lang.*;
import java.util.*;

class program348
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Number:");
		int iNo=sobj.nextInt();
		
		String str=Integer.toString(iNo);
		
		char Arr[]=str.toCharArray();
		
		int i=0,j=0;
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr.length;j++)
			{
				System.out.print(Arr[j]+" ");
			}
			System.out.println();
		}
		
	}
}