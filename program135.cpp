/*
OUTPUT:

Enter the first string:
Marvellous
Enter the second string:
Infosystem
After the concating string:Marvellous Infosystem
*/
#include<iostream>
using namespace std;

void StrCatX(char *scr,char *dest)
{
	while(*scr!='\0')
	{
		scr++;
	}
	
	while(*dest!='\0')
	{
		*scr=*dest;
		scr++;
		dest++;
		
	}
	scr='\0';
	
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	cout<<"Enter the first string:"<<endl;
	cin.getline(Arr,30);
	
	cout<<"Enter the second string:"<<endl;
	cin.getline(Brr,30);
	
	
	StrCatX(Arr,Brr);
	cout<<"After the concating string:"<<Arr;
	
	return 0;
}