/*
Enter the string:
Marvellous
Length of string is:10
*/

import java.io.*;
import java.util.*;

class StringX
{
	public int Display(String str)
	{
		char Arr[]=str.toCharArray();
		
		return (Arr.length);
		
	}
	
}

class program641
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		StringX obj=new StringX();
		int iRet=obj.Display(str);
		System.out.println("Length of string is:"+iRet);
	}
}