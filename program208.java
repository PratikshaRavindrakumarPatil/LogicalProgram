import java.io.*;
import java.util.*;

class program208
{
	public static void main(String arg[])  throws Exception
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the file name:");
		String fname=sobj.nextLine();
		
		FileOutputStream fobj=new FileOutputStream(fname);
		
		System.out.println("Enter the data:");
		String Data=sobj.nextLine();
		
		byte b[]=Data.getBytes();
		fobj.write(b);
		
		System.out.println("Data are successfully writen");
		
				
		
	}
}
