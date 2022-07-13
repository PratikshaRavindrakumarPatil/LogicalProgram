import java.io.*;
import java.util.*;

class program207
{
	public static void main(String arg[])  throws Exception
	{
		
		System.out.println("Enter the file name:");
		String fname=sobj.nextLine();
		
		
		FileReader fobj=new FileReader(fname);
		BufferedReader bobj= new BufferedReader(fobj);
				
		String Data;
		Data=bobj.readLine();
		
		while(Data!=null)
		{
			System.out.println(Data);
			Data=bobj.readLine();
		}
		
		
	}
}
