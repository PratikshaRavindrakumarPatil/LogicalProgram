/*

Enter the string:
Marvellous Infosystem Educating For Better Tomarow
Count of word is:6

Enter the string:
India   is my country
Count of word is:4


*/

import java.io.*;
import java.util.*;

class StringX
{
	public int Display(String str)
	{
		String newstr=str.replaceAll("\\s+"," ");
		
		String Arr[]=newstr.split(" ");
		
		return (Arr.length);
	}
	
}

class program644
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