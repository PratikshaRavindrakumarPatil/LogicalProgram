import java.lang.*;
import java.util.*;

class program357
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number:");
		int iNo=sobj.nextInt();
		
		int iMask=0x00000001;
		int iResult=0;
		int iCnt=0;
		
		for(int i=1;i<=32;i++)
		{
			iResult=iNo&iMask;
			
			if(iResult==iMask)
			{
				iCnt++;
			}
			iMask=iMask<<1;
		}
		
		System.out.println("Number if ON bits are:"+iCnt);
	}
}