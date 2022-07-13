/*

Enter the string:
Jay
J J J
a a a
y y y


*/


import java.lang.*;
import java.util.*;

class program343
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		char Arr[]=str.toCharArray();
		int i=0,j=0;
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr.length;j++)
			{
				System.out.print(Arr[i]+" ");
			}
			System.out.println();
		}
		
	}
}