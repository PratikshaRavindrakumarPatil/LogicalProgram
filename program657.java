/*
Enter the string:
Jay Ganesh
Ganesh Jay

*/

import java.lang.*;
import java.util.*;


class StringX
{
	public void Display(String str)
	{
		String newstr=str.replaceAll("\\s+"," ");
		
		String newstr1=newstr.trim();
		
		String Arr[]=newstr1.split(" ");
		
		//StringBuffer newstr2=new StringBuffer();
		
		for(int i=Arr.length-1;i>=0;i--)
		{
			System.out.print(Arr[i]+" ");
		}
		
		
	}
}


class program657
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string:");
		String str=sobj.nextLine();

		StringX obj=new StringX();
		obj.Display(str);
		
	}
}