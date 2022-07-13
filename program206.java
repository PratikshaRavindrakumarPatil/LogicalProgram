import java.io.*;
import java.util.*;

class program206
{
	public static void main(String arg[])  throws Exception
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the file name:");
		String fname=sobj.nextLine();
		
		
		
		FileReader fobj=new FileReader(fname);
		BufferedReader bobj= new BufferedReader(fobj);
				
		if(bobj==null)
		{
			System.out.println("File is unable to open");
		}
		else
		{
			System.out.println("File is successfully opened");
		}
		
		
	}
}
