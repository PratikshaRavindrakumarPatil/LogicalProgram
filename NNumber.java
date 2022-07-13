package ArrayX;

import java.lang.*;
import java.util.*;

public class NNumber
{
	public int iNo;
	public int Arr[];
	
	public NNumber(int a)
	{
		this.iNo=a;
		Arr=new int[iNo];
	}
	
	public void Accept()
	{
		int i=0;
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number:");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
	}
	
}

