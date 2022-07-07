/*

Enter the string:
aaaPPPppMMMmmEEeeeee
e occures7 number of times in the world

*/

import java.io.*;
import java.util.*;


class program319
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
		int iMax=0;
		int ipos=0;
		
		for(i=0;i<Arr.length;i++)
		{
			frequency[Arr[i]-'a']++;
		}
		
		for(i=0;i<frequency.length;i++)
		{
			if((frequency[i])>iMax)
			{
				iMax=frequency[i];
				ipos=i;
			}
		}
		System.out.println(((char)(ipos+'a'))+" occures "+iMax+" number of times in the world");
	}
}