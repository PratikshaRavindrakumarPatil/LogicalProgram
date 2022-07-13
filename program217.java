import java.lang.*;
import java.util.*;
import java.io.*;

class program217
{
    public static void main(String arg[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter file directory name:");
            String foldername= sobj.nextLine();

            File dobj = new File(foldername);

            File allfiles[] = dobj.listFiles();
            String name;

            File fobj=new File("Combine.txt");
            boolean bobj = fobj.createNewFile();
            FileOutputStream writerobj = new FileOutputStream(fobj);

            FileInputStream readerobj = null;
            int ret = 0;
            byte buffer[] = new byte[100];

            for(int i = 0; i < allfiles.length; i++)
            {
                    name = allfiles[i].getName();

                    if(name.endsWith(".txt"))
                    {
                        name = name +" ";
                        //System.out.println(name);
                        
                        byte namearray[] = name.getBytes();
                        writerobj.write(namearray,0,namearray.length);

                    }
            }
        }
        catch(Exception obj)
        {
            System.out.println(obj);
        }

    }
}