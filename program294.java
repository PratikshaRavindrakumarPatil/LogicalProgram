/*

*/

import java.io.*;
import java.util.*;
import java.lang.*;


class program294
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
			
			File fobjnew=new File("Combine.txt");
			boolean bobj1=fobjnew.createNewFile(); 
			FileOutputStream writeobj=new FileOutputStream(fobjnew);
			
			FileInputStream readerobj=null;
			byte buffer[]=new byte[100];
			int ret=0;
			
			for(int i=0;i<allfiles.length;i++)
			{
				name=allfiles[i].getName();
				if(name.endsWith("txt"))
				{
					readerobj=new FileInputStream(allfiles[i]);
			
					while((ret=readerobj.read(buffer))!=-1)
					{
							writeobj.write(buffer,0,ret);
					}
					readerobj.close();
				}
			}
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}
	}
}