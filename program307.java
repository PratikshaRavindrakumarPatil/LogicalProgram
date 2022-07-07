/*

Enter the string:
India is  my    country
Number of words are:4

*/

import java.lang.*;
import java.util.*;

class program307
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		char Arr[]=str.toCharArray();
		
		
		
		String newstr=str.replaceAll("\\s+"," ");
		
		String Brr[]=newstr.split(" ");
		
		System.out.println("Number of words are:"+Brr.length);
	
	}
}