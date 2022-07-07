/*

Enter the string:
mnas sdfg
sanm gfds

*/

import java.io.*;
import java.util.*;

class StringX
{
	public void Display(String str)
	{
			String newstr = str.replaceAll("\\s+"," ");
            String newstr2 = newstr.trim();

            String arr[] = newstr2.split(" ");

            StringBuffer finalstr = new StringBuffer();

            for(int i = arr.length-1; i >=0; i--)
            {
                StringBuffer sb = new StringBuffer(arr[i]);
				finalstr.append(arr[i]+" ");
            } 

			String finalstr2 = new String(finalstr);
			String finalstr3=finalstr2.trim();
            System.out.println(finalstr3);
		
	}
	
}

class program654
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