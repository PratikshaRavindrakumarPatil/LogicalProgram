/*
OUTPUT:

Enter number :
5
Entered number is: 5
1
2
3
4
5

Enter number :
-5
Entered number is: -5
1
2
3
4
5

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
			System.out.println(iCnt);
		}
	}
}

class program223
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.DisplayNumber();
    }
}