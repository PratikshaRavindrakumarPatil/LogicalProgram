import java.lang.*;
import java.util.*;

class program354
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number:");
		long iNo=sobj.nextLong();
		
		long iMask=0xf000000f;
		
		long iResult=iNo&iMask;
		
		if(iResult==iMask)
		{
			System.out.println("First and last nible is completely on");
		}
		else
		{
			System.out.println("First last nible is off");
		}
	}
}