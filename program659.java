/*
Enter the string:
India Is my Country
aidnI sI ym yrtnuoC

*/

import java.lang.*;
import java.util.*;


class StringX
{
	public void Display(String str)
	{
		String str1=str.replaceAll("\\s+"," ");
		
		String str2=str1.trim();
		
		String Arr[]=str2.split(" ");
		
		StringBuffer str3=new StringBuffer();
		
		for(int i=0;i<Arr.length;i++)
		{
			StringBuffer sb=new StringBuffer(Arr[i]);
			str3.append((sb.reverse()).append(" "));
		}
		
		String str4=new String(str3);
		System.out.println(str4);
	}
}


class program659
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