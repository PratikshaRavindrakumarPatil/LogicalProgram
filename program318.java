/*

Enter the string:
AAbbcccccd
a:2
b:2
c:5
d:1


*/

import java.io.*;
import java.util.*;


class program318
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		str=str.toLowerCase();
		char Arr[]=str.toCharArray();
		int frequency[]=new int[26];

		int i=0;
		
		for(i=0;i<Arr.length;i++)
		{
			frequency[Arr[i]-'a']++;
		}
		
		for(i=0;i<frequency.length;i++)
		{
			if(frequency[i]>0)
			{
				System.out.println(((char)(i+'a'))+":"+frequency[i]);
			}
		}
	}
}