/*

Enter the string:
India is my country
India
is
my
country


*/

import java.lang.*;
import java.util.*;

class program309
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
		
		for(int i=0;i<Brr.length;i++)
		{
			System.out.println(Brr[i]);
		}
		
		
	
	}
}