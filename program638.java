 import java.io.*;

     public class program638 
     {
         public static void main (String[] args) throws IOException
         {
             String line;
             BufferedReader in;

             in = new BufferedReader(new FileReader("ppa1.txt"));
				
				if(in==null)
				{
					System.out.println("File is unable to open");
				}
				
			System.out.println("File is successfully open");
			/*line = in.readLine();
				
			
             while(line != null)
             {
                    System.out.println(line);
                    line = in.readLine();
             }

             System.out.println(line);*/
         }

    }