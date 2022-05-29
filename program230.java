/*
OUTPUT:
Enter number :
6
Entered number is: 6
1       2       3

Enter number :
-10
Entered number is: -10
1       2       5

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

    public void DisplayFactor()
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1;iCnt<=iNo/2;iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				System.out.print(iCnt+"\t");
			}
		}
	}
}

class program230
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.DisplayFactor();
    }
}