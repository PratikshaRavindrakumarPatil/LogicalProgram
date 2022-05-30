/*
OUTPUT:

Enter number :
2345
Entered number is : 2345
5
4
3
2

Enter number :
-121
Entered number is : -121
1
2
1

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
        System.out.println("Entered number is : "+this.iNo);
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
			System.out.println(iDigit);
			iNo=iNo/10;
		}
		
	}
}

class program238
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.DisplayDigit();
    }
}