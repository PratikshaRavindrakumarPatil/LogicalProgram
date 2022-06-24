/*
On 7th bit



OUTPUT:

Enter the number:
1
Updated number is:65

Enter the number:
64
Updated number is:64


*/
import java.lang.*;
import java.util.*;


class Bitwise
{
	public int OnBit(int iNo)
	{
		int iMask=0X00000040;
		int iResult=0;
		
		iResult=iNo|iMask;
		return iResult;
		
	}
}
class program151
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