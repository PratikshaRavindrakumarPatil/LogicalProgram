import java.lang.*;
import java.util.*;

class StringProblem
{
	public void Display(String str)
	{
		String str1=str.replaceAll("\\s+"," ");
		String str2=str1.trim();
		
		String Arr[]=str2.split(" ");
		
		int i=0;
		
		for(i=Arr.length-1;i>=0;i--)
		{
			System.out.print(Arr[i]+" ");
		}
		
	}
}


class program666
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		StringProblem obj=new StringProblem();
		obj.Display(str);
		
	}
}