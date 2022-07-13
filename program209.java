import java.io.*;
import java.util.*;

class program209
{
	public static void main(String arg[]) throws Exception
	{
		Scanner sobj=new Scanner(System.in);
	
		System.out.println("Enter the file name:");
		String fname=sobj.nextLine();
		
		
		File fobj=new File(fname);
		
		try
		{
			if(fobj.createNewFile())
			{
				System.out.println("File is successfully created of name:"+fobj.getName());
			}
			else
			{
				System.out.println("File is already exist");
			}
		}
		catch(Exception obj)
		{
		}
		
		
	}
}