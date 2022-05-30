/*
OUTPUT:

Enter number :
12
Entered number is: 12
5       7       8       9       10      11

Enter number :
15
Entered number is: 15
2       4       6       7       8       9       
10      11      12      13      14


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
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			if((iNo%iCnt)!=0)
			{
				
					System.out.print(iCnt+"\t");
				
			}
		}
	}
}

class program235
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.EvenFactor();
    }
}