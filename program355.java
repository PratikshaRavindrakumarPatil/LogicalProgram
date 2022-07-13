import java.lang.*;
import java.util.*;

class program355
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number:");
		int iNo=sobj.nextInt();
		
		System.out.println("Enter the starting point:");
		int iStart=sobj.nextInt();
		
		System.out.println("Enter the ending point:");
		int iEnd=sobj.nextInt();
		
		
		int iMask1=0xffffffff;
		int iMask2=0xffffffff;
		int iMask=0;
		
		
		iMask1=iMask1<<(iStart-1);
		iMask2=iMask2>>(32-iEnd);
		
		iMask=iMask1 & iMask2;
		
		int iResult=0;
		
		iResult=iNo&iMask;
		
		if(iResult==iNo)
		{
			System.out.println("Bits are on");
		}
		else
		{
			System.out.println("Bits are off");
		}
	}
}