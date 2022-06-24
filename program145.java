/*


Enter the number:
448
Bit is on




1 and 32 bit check
*/
import java.lang.*;
import java.util.*;


class Bitwise
{
	public boolean CheckBit(long iNo)
	{
		long iMask=0X80000001;
		long iResult=0;
		
		iResult=iNo&iMask;
		
		if(iResult==0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}


class program145
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		long iValue=sobj.nextInt();
		
		Bitwise bobj=new Bitwise();
		boolean bRet=bobj.CheckBit(iValue);
		
		if(bRet==true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is off");
		}
	}
}