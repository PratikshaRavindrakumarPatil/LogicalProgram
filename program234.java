/*
OUTPUT:

Enter number :
12
Entered number is: 12
6       4       3       2       1


Enter number :
20
Entered number is: 20
10      5       4       2       1

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

    public void EvenFactor()
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=iNo/2;iCnt>=1;iCnt--)
		{
			if((iNo%iCnt)==0)
			{
					System.out.print(iCnt+"\t");
				
			}
		}
	}
}

class program234
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.EvenFactor();
    }
}