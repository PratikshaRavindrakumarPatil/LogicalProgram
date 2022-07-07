/*
Enter the string:
Jay Ganesh
J
a
y

G
a
n
e
s
h

*/

import java.io.*;
import java.util.*;

class program639
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		char Arr[]=str.toCharArray();
		
		for(int i=0;i<Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
		
	}
}