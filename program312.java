/*

Enter the string:
asdsd lskdlskjdf  sdf
Length of largest word is:10
Largest word is:lskdlskjdf



*/

import java.lang.*;
import java.util.*;

class program311
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		char Arr[]=str.toCharArray();
		
		String newstr=str.replaceAll("\\s+"," ");
		
		String newstr2=newstr.trim();
		
		String Brr[]=newstr2.split(" ");
		
		int iMax=0;
		int index=0;
		
		for(int i=0;i<Brr.length;i++)
		{
			if((Brr[i].length())>=iMax)
			{
				index=i;
				iMax=Brr[i].length();
			}
		}
		
		System.out.println("Length of largest word is:"+iMax);
		System.out.println("Largest word is:"+Brr[index]);
	}
}