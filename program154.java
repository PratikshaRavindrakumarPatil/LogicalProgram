/*
OUTPUT:
Enter base :
25
Enter power :
4
base is: 25
power is: 4
Result is:390625


Enter base :
10
Enter power :
7
base is: 10
power is: 7
Result is:10000000

*/
import java.lang.*;
import java.util.*;

class Number
{
    private int iNo1,iNo2;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter base : ");
        this.iNo1 = sobj.nextInt();
		
		System.out.println("Enter power : ");
        this.iNo2 = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("base is: "+this.iNo1);
		System.out.println("power is: "+this.iNo2);
    }

    public long Power()
	{
		long  iPow=1;
		int iCnt=0;
		
		for(iCnt=1;iCnt<=iNo2;iCnt++)
		{
			iPow=iPow*iNo1;
		}
		
		return iPow;
	}
}

class program153
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			long iRet=0;
			
            nobj.Accept();
            nobj.Display();

            iRet=nobj.Power();
			System.out.println("Result is:"+iRet);
    }
}