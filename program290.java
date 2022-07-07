/*

*/

import java.io.*;
import java.util.*;
import java.lang.*;
import java.nio.charset.StandardCharsets;

class program290
{
	public static void main(String arg[])
	{
		try
		{
			Scanner sobj=new Scanner(System.in);
			System.out.println("Enter the existing file name:");
			String Filename=sobj.nextLine();
			
			File fobj=new File(Filename);
			
			System.out.println("Enter the new file name:");
			String newfile=sobj.nextLine();
			
			File fobjnew=new File(newfile);
			boolean bobj1=fobjnew.createNewFile(); 
			
			if(fobj.exists())
			{
				FileInputStream fiobj=new FileInputStream(fobj);
				FileOutputStream foobj=new FileOutputStream(fobjnew);
				byte buffer[]=new byte[100];
				int ret=0;
				
				
				while((ret=fiobj.read(buffer))!=-1)
				{
						foobj.write(buffer);
				}
				//System.out.println("Data read:"+sum);
				
			}
			else
			{
				System.out.println("There is no such file");
			}
			
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}
}