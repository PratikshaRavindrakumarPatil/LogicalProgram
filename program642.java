/*

Enter the string:
Hello
Count of small letter is:4

*/

import java.io.*;
import java.util.*;

class StringX
{
	public int Display(String str)
	{
		char Arr[]=str.toCharArray();
		
		int Count=0;
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>='a')&&(Arr[i]<='z'))
			{
				Count++;
			}
		}
		
		return Count;
	}
	
}

class program642
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		StringX obj=new StringX();
		int iRet=obj.Display(str);
		System.out.println("Count of small letter is:"+iRet);
	}
}