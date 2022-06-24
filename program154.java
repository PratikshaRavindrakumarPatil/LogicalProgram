/*
toggle 7th and 10 th bit



OUTPUT:

Enter the number:
576
Updated number is:0

Enter the number:
512
Updated number is:64

Enter the number:
64
Updated number is:512

*/


import java.lang.*;
import java.util.*;


class Bitwise
{
	public int ToggleBit(int iNo)
	{
		int iMask=0X0000240;
		int iResult=0;
		
		iResult=iNo^iMask;
		return iResult;
		
	}
}
class program154
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