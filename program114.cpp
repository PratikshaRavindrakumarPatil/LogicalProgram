/*
OUTPUT:

Enter the string:@
It is special character

Enter the string:s
It is not special character

*/
#include<iostream>
using namespace std;

bool CheckSpecial(char str)
{
			
	if((str=='!')||(str=='@')||(str=='@')||(str=='#')||(str=='$')||(str=='&')||(str=='*'))
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	char ch='\0';
	bool bRet=false;
	
	cout<<"Enter the string:";
	cin>>ch;
	
	bRet=CheckSpecial(ch);
	
	if(bRet==true)
	{
		cout<<"It is special character"<<endl;
	}
	else
	{
		cout<<"It is not special character"<<endl;
	}
	
	return 0;
}