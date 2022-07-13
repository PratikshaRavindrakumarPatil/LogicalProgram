import java.lang.*;
import java.io.*;
import java.util.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

class program213
{
	public static void main(String arg[])
	{
		try
		{
			Scanner sobj=new Scanner(System.in);
			
			System.out.println("Enter the directory name:");
			String dobj=sobj.nextLine();
			File fobj1=new File(dobj);
			
			Path pobj=Paths.get(dobj);
			
			Files.createDirectories(pobj);
			
			System.out.println("Directoy is created");
			
			
			
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}
		
	}
}