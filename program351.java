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

class program351
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Number:");
		int iNo;
		
		
		
		char Arr[]=(Integer.toString(sobj.nextInt())).toCharArray();
		
		int i=0,j=0;
		for(i=Arr.length-1;i>=0;i--)
		{
			for(j=0;j<=i;j++)
			{
				System.out.print(Arr[j]+" ");
			}
			System.out.println();
		}
		
	}
}