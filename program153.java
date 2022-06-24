/*
toggle 7th bit



OUTPUT:

Enter the number:
64
Updated number is:0


Enter the number:
63
Updated number is:127
*/
import java.lang.*;
import java.util.*;


class Bitwise
{
	public int ToggleBit(int iNo)
	{
		int iMask=0X0000040;
		int iResult=0;
		
		iResult=iNo^iMask;
		return iResult;
		
	}
}
class program153
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int iValue=sobj.nextInt();
		
		Bitwise bobj=new Bitwise();
		int iRet=bobj.ToggleBit(iValue);
		
		System.out.println("Updated number is:"+iRet);
	}
}