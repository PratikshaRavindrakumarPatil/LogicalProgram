import java.lang.*;
import java.io.*;
import java.util.*;

class program211
{
	public static void main(String arg[])
	{
		try
		{
			Scanner sobj=new Scanner(System.in);
			
			System.out.println("Enter the existance file name:");
			String file1=sobj.nextLine();
			File fobj1=new File(file1);
			
			System.out.println("Enter the new file name:");
			String file2=sobj.nextLine();
			File fobj2=new File(file2);
			boolean bobj1=fobj2.createNewFile(); 
			
			if(fobj1.exists())
			{
				FileInputStream fiobj=new FileInputStream(file1);
				FileOutputStream foobj=new FileOutputStream(file2);
				byte buffer[]=new byte[100];
				int ret=0;
				
				while((ret=fiobj.read(buffer))!=-1)
				{
					foobj.write(buffer);
				}	
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