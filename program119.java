/*
OUTPUT:
	Enter the Number:
	5
	Jay Ganesh..
	Jay Ganesh..
	Jay Ganesh..
	Jay Ganesh..
	Jay Ganesh..



	Enter the Number:
	-5
	Jay Ganesh..
	Jay Ganesh..
	Jay Ganesh..
	Jay Ganesh..
	Jay Ganesh..
	
	Enter the Number:
	0


*/
import java.lang.*;
import java.util.*;

class DisplayNumber
{
	private	int iNo;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Number:");
		iNo=sobj.nextInt();
		
	}
	
	public void Display()
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			System.out.println("Jay Ganesh..");
		}
		
	}
}
class program119
{
	public static void main(String arg[])
	{
		DisplayNumber dobj=new DisplayNumber();
		dobj.Accept();
		dobj.Display();
		
	}
}