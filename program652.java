/*

Enter the string:
India is my country
aidnI
si
ym
yrtnuoc

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
		
		int iMin=Arr[0].length();
		int i=0;
		int ipos=0;
		
		for(i=0;i<Arr.length;i++)
		{
			StringBuffer sb=new StringBuffer(Arr[i]);
			System.out.println(sb.reverse());
			
		}
		
		
	}
	
}

class program652
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