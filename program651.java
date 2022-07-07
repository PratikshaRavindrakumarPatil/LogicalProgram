/*

Enter the string:
Marvellous PPA LB
Minimum length word is:2
Small word is:LB

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
			if((Arr[i].length())<iMin)
			{
				iMin=Arr[i].length();
				ipos=i;
			}
		}
		
		System.out.println("Minimum length word is:"+iMin);
		System.out.println("Small word is:"+Arr[ipos]);
	}
	
}

class program650
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