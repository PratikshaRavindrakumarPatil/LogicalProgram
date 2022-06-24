import java.lang.*;
import java.util.*;

class Bitwise
{
    public int OnBit(int iNo)
    {
        int iMask =0X00000000;
        int iResult = 0;
		int iCount=0;
		
		iMask=iMask<<iNo;
		if(iMask==)
		{
			iCount++;
		}
        iResult = iNo ^ iMask;
		return iCount;
    }
	
}

class program161
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.OnBit(value);
		
		System.out.println("Updated number is:"+iRet);
      
    }
}
