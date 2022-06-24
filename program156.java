/*
output:

Enter the number:
10
Enter the position:
2
Bit is on.


*/
import java.lang.*;
import java.util.*;

class Bitwise
{
	boolean ChechBit(int iNo,int iPos)
	{
		int iMask=0X00000001;
		int iResult=0;
		
		iMask=iMask<<(iPos-1);
		iResult=iMask & iNo;
		
		
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


class program156
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int iValue=sobj.nextInt();
		
		System.out.println("Enter the position:");
		int iValue2=sobj.nextInt();
		
		Bitwise bobj=new Bitwise();
		boolean iRet=bobj.ChechBit(iValue,iValue2);
		
		if(iRet==true)
		{
			System.out.println("Bit is on.");
		}
		else
		{
			System.out.println("Bit is off.");
		}
	}
}