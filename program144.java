/*
OUTPUT:

Enter number :
1234
Value is : 1234
4       3       2       1


Enter number :
-23764
Value is : -23764
4       6       7       3       2

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
        System.out.println("Value is : "+this.iNo);
    }

    public void DisplayDigit()
	{
		int iDigit=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			System.out.print(iDigit+"\t");
			iNo=iNo/10;
		}
	}
}

class program144
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.DisplayDigit();
    }
}