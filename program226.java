/*
OUTPUT:

Enter number :
11
Entered number is: 11
Hi

Enter number :
Entered number is: 4
Hello
4

Enter number :
0
Entered number is: 0
Hello

Enter number :
-2
Entered number is: -2
Hello

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
		if(iNo<10)
		{
			System.out.println("Hello");
		}
		else
		{
			System.out.println("Hi");
		}
	}
}

class program226
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.DisplayNumber();
    }
}