/*
OUTPUT:

Enter number :
5
Entered number is: 5
2       4       6       8       10

Enter number :
-6
Entered number is: -6
2       4       6       8       10      12

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
		
		for(iCnt=1;iCnt<=iNo*2;iCnt++)
		{
			if(iCnt%2==0)
			{
				System.out.print(iCnt+"\t");
			}
		}
	}
}

class program229
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.DisplayNumber();
    }
}