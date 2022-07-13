import java.lang.*;
import java.util.*;

class program361
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the first string:");
		String str1=sobj.nextLine();
		
		System.out.println("Enter the second string:");
		String str2=sobj.nextLine();
		
		if(str1.length()!=str2.length())
		{
			System.out.println("String are not in rotation");
			return;
		}
		
		String str3=str1+str2;
		
		if(str3.contains(str2))
		{
			System.out.println("String are in rotation");
		}
		else
		{
			System.out.println("String are not in rotation");
		}
	}
}