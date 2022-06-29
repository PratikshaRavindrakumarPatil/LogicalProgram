#include<iostream>
using namespace std;

void Check(char str[],char dest[])
{
	
	strcpy(dest,str);
	strrev(dest);
	
	if(dest==str)
	{
		cout<<"String are palindrome";
	}
	else
	{
		cout<<"string are not palindrome";
	}
	
	
}

int main()
{
	char Arr[40];
	char Brr[40];
	
	
	cout<<"Enter the string:\n";
	cin.getline(Arr,40);
	
	Check(Arr,Brr);
	
	return 0;
}