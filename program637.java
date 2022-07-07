import java.io.*;  
class program637
{  
public static void main(String args[])
{  
	try
	{  
     	FileOutputStream fout=new FileOutputStream("ppa.txt");  
     	String s="Marvellous Infosystems";  
     	byte b[]=s.getBytes();//converting string into byte array  
     	fout.write(b);  
     	fout.close();  
     	System.out.println("Data is succesfully write");  
	}
	catch(Exception e){System.out.println(e);}  
}  
} 