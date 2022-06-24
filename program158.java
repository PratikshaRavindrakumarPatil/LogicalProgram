/*
OUTPUT:


Enter the number:
10
Enter the position:
3
Updated number is:14
*/
import java.lang.*;
import java.util.*;


class Bitwise
{
	public int OnBit(int iNo,int iPos)
	{
		int iMask=0X0000001;
		int iResult=0;
		
		
		iMask=iMask<<(iPos-1);
		iResult=iNo^iMask;
		return iResult;
		
	}
}
class program158
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int iValue=sobj.nextInt();
		
		System.out.println("Enter the position:");
		int iValue2=sobj.nextInt();
		
		
		Bitwise bobj=new Bitwise();
		int iRet=bobj.OnBit(iValue,iValue2);
		
		System.out.println("Updated number is:"+iRet);
	}
}