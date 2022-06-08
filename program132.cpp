/*
OUTPUT:

Enter the string:
Marvellous Infosystem
Enter the number:
10
After the copy string:Marvellous


*/
#include<iostream>
using namespace std;

void StrcpyX(char *scr,char *dest,int No)
{
	if(No<0)
	{
		No=-No;
	}
	
	while((*scr!='\0') &&(No!=0))
	{
		*dest=*scr;
		scr++;
		dest++;
		No--;
	}
	dest='\0';
	
}

int main()
{
	char Arr[30];
	char Brr[30];
	int iValue=0;
	
	cout<<"Enter the string:"<<endl;
	cin.getline(Arr,30);
	
	cout<<"Enter the number:"<<endl;
	cin>>iValue;
	
	StrcpyX(Arr,Brr,iValue);
	cout<<"After the copy string:"<<Brr;
	
	return 0;
}