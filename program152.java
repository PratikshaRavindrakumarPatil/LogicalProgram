/*
On 7th and 10 bit



OUTPUT:

Enter the number:
576
Updated number is:576

Enter the number:
4
Updated number is:580


*/
import java.lang.*;
import java.util.*;


class Bitwise
{
	public int OnBit(int iNo)
	{
		int iMask=0X0000240;
		int iResult=0;
		
		iResult=iNo|iMask;
		return iResult;
		
	}
}
class program152
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