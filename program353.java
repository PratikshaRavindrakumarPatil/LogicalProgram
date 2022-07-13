import java.lang.*;
import java.util.*;

class program353
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number:");
		int iNo=sobj.nextInt();
		
		int iMask=0x0000000f;
		
		int iResult=iNo&iMask;
		
		if(iResult==iMask)
		{
			System.out.println("First nible is completely on");
		}
		else
		{
			System.out.println("First nible is off");
		}
	}
}