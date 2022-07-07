/*

Enter the string:
Marvellous Infosystem Educating For Better Tomarow
Count of word is:6

Enter the string:
India   is my country
Count of word is:4

Enter the string:
   India    is my country
Count of word is:4


*/

import java.io.*;
import java.util.*;

class StringX
{
	public int Display(String str)
	{
		String newstr1=str.trim();
		String newstr2=newstr1.replaceAll("\\s+"," ");
		
		
		String Arr[]=newstr2.split(" ");
		
		
		return (Arr.length);
	}
	
}

class program645
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		StringX obj=new StringX();
		int iRet=obj.Display(str);
		System.out.println("Count of word is:"+iRet);
	}
}