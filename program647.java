/*

Enter the string:
Marvellous PPA LB
Maximum length word is:10


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
		
		int iMax=0;
		int i=0;
		
		for(i=0;i<Arr.length;i++)
		{
			if((Arr[i].length())>iMax)
			{
				iMax=Arr[i].length();
			}
		}
		
		System.out.println("Maximum length word is:"+iMax);
	}
	
}

class program647
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