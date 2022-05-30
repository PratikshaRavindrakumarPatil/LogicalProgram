/*
OUTPUT:
Enter Letter :
A
Entered letter is: A
It is vowel.


Enter Letter :
o
Entered letter is: o
It is vowel.


*/
import java.lang.*;
import java.util.*;

class Number
{
    private char ch;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Letter : ");
        this.ch = sobj.next().charAt(0);
    }

    public void Display()
    {
        System.out.println("Entered letter is: "+this.ch);
    }

    public boolean CheckVowel()
	{
		if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
}

class program232
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			boolean bRet=false;
			
            nobj.Accept();
            nobj.Display();

            bRet=nobj.CheckVowel();
			if(bRet==true)
			{
				System.out.println("It is vowel.");
			}
			else
			{
				System.out.println("It is Consonant.");
			}
			
			
    }
}