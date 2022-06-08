/*
OUTPUT:

Enter the string:
Marvellous
After the copy string:Marvellous


*/
#include<iostream>
using namespace std;

void StrcpyX(char *scr,char *dest)
{
	while(*scr!='\0')
	{
		*dest=*scr;
		scr++;
		dest++;
		
	}
	dest='\0';
	
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	cout<<"Enter the string:"<<endl;
	cin.getline(Arr,30);
	
	StrcpyX(Arr,Brr);
	cout<<"After the copy string:"<<Brr;
	
	return 0;
}