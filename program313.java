/*

Enter the string:
India is my country
aidnI
si
ym
yrtnuoc



*/

import java.lang.*;
import java.util.*;


class program313
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		
		String newstr=str.replaceAll("\\s+"," ");
		
		String newstr2=newstr.trim();
		
		String Brr[]=newstr2.split(" ");
		
		for(int i=0;i<Brr.length;i++)
		{
			StringBuffer sb=new StringBuffer(Brr[i]);
			System.out.println(sb.reverse());
		}
	}
}