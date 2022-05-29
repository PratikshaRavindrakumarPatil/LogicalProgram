/*
OUTPUT:

Enter first number:
2
Enter Second number:
5
Value is : 2
Value is : 5
2       2       2       2       2

Enter first number:
-10
Enter Second number:
4
Value is : -10
Value is : 4
10      10      10      10


*/
import java.lang.*;
import java.util.*;

class Number
{
    private int iNo1,iNo2;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first number: ");
        this.iNo1 = sobj.nextInt();
		
		System.out.println("Enter Second number: ");
        this.iNo2 = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Value is : "+this.iNo1);
		System.out.println("Value is : "+this.iNo2);
   }

    public void DisplayNumber()
	{
		int iCnt=0;
		
		if(iNo1<0)
		{
			iNo1=-iNo1;
		}
		if(iNo2<0)
		{
			iNo2=-iNo2;
		}
		
		
		for(iCnt=1;iCnt<=iNo2;iCnt++)
		{
			System.out.print(iNo1+"\t");
		}
	}
}

class program227
{
    public static void main(String b[])
    {
            Number nobj = new Number();
		
			int iRet=0;
			
            nobj.Accept();
            nobj.Display();

            nobj.DisplayNumber();
			
			
    }
}