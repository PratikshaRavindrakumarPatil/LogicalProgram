/*

Enter the string:
Marvellous Infosystem
suollevraM metsysofnI



*/

import java.io.*;
import java.util.*;


class program315
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		char Arr[]=str.toCharArray();
		int frequency[]=new int[26];

		int i=0;
		
		for(i=0;i<Arr.length;i++)
		{
			frequency[Arr[i]-97]++;
		}
		
		for(i=0;i<frequency.length;i++)
		{
			System.out.println(frequency[i]);
		}
	}
}