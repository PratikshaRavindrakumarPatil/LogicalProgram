/*
Enter the string:
India is my country
Number of words are:4
*/

import java.lang.*;
import java.util.*;

class program306
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		char Arr[]=str.toCharArray();
		
		String Brr[]=str.split(" ");
		
		System.out.println("Number of words are:"+Brr.length);
	
	}
}