/*
Enter the string:
   India is   my  Country
India
is
my
Country

*/

import java.io.*;
import java.util.*;

class StringX
{
	public void Display(String str)
	{
		String strnew=str.replaceAll("\\s+"," ");
		
		String strnew1=strnew.trim();
		
		String Arr[]=strnew1.split(" ");
		
		
		for(int i=0;i<Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
		
	}
	
}

class program646
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