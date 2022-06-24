/*
On first 4 bit



OUTPUT:

Enter the number:
15
Updated number is:15


Enter the number:
0
Updated number is:15
*/
import java.lang.*;
import java.util.*;


class Bitwise
{
	public int OnBit(int iNo)
	{
		int iMask=0X000000F;
		int iResult=0;
		
		iResult=iNo|iMask;
		return iResult;
		
	}
}
class program155
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int iValue=sobj.nextInt();
		
		Bitwise bobj=new Bitwise();
		int iRet=bobj.OnBit(iValue);
		
		System.out.println("Updated number is:"+iRet);
	}
}