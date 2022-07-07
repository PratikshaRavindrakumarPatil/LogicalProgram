/*
Enter the file name:
DEMO.txt
Hello World

*/

import java.io.*;
import java.util.*;
import java.lang.*;

class program288
{
	public static void main(String arg[])
	{
		try
		{
			Scanner sobj=new Scanner(System.in);
			System.out.println("Enter the file name:");
			String Filename=sobj.nextLine();
			
			File fobj=new File(Filename);
			
			if(fobj.exists())
			{
				BufferedReader bobj=new BufferedReader(new FileReader(fobj));
				String str;
				while((str=bobj.readLine())!=null)
				{
					System.out.println(str);
				}
				
			}
			else
			{
				System.out.println("There is no such file");
			}
			
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}
	}
}