import java.lang.*;
import java.util.*;
import java.io.*;

class program303
{
    public static void main(String arg[])
    {
		try
		{
			Scanner sobj=new Scanner(System.in);
			
			System.out.println("Enter the packed file name:");
			String PackFileName=sobj.nextLine();
		
			File fobj=new File(PackFileName);
			
			FileInputStream fiobj=new FileInputStream(fobj);
			byte Headerarray[]=new byte[100];
			
			//fiobj.read(Headerarray,0,100);
		
			String HeaderString=new String(Headerarray);
			System.out.println(HeaderString);
		
		
			String HeaderString=null;
			String tokens[];
			int ret=0;
			
			while(ret=(fiobj.read(Headerarray,0,100))>0)
			{
				HeaderString=new String(Headerarray);
				tokens=HeaderString.split(" ");
			
				
				File fobjnew=new File(tokens[0]);
				boolean bobj=fobjnew.createNewFile();
				
				int size=Integer.parseInt(tokens[1]);
				byte dataarry[]=new dataarry[size];
				
				fiobj.read(dataarry,0,size);
				
			}
			
			System.out.println("File name:"+tokens[0]);
			System.out.println("File size:"+tokens[1]);
		
			
		
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}

    }
}