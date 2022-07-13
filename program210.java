import java.io.*;
import java.util.*;

class program210
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
	
		System.out.println("Enter the directory name:");
		String dname=sobj.nextLine();
		
		File fobj=new File(dname);
		
		String file[]=fobj.list();
		
		for(int iCnt=0;iCnt<file.length;iCnt++)
		{
			System.out.println(file[iCnt]);
		}
		
	}
}