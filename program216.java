/*

*/

import java.io.*;
import java.util.*;
import java.lang.*;


class program216
{
	public static void main(String arg[])
	{
		try
		{
			Scanner sobj=new Scanner(System.in);
			System.out.println("Enter the directory name:");
			String foldername=sobj.nextLine();
			
			File dobj=new File(foldername);
			
			File allfiles[]=dobj.listFiles();
			
			String name;
			
			for(int i=0;i<allfiles.length;i++)
			{
				name=allfiles[i].getName();
				if(name.endsWith("txt"))
				{
					System.out.println(allfiles[i].getName());
				}
			}
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}
	}
}