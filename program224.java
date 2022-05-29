/*
OUTPUT:

Enter number :
4
Entered number is: 4
*  *  *  *

Enter number :
-10
Entered number is: -10
*  *  *  *  *  *  *  *  *  *


Enter number :
0
Entered number is: 0

*/
import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Entered number is: "+this.iNo);
    }

    public void DisplayNumber()
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			System.out.print("*"+"  ");
		}
	}
}

class program224
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.DisplayNumber();
    }
}