#include<iostream>
using namespace std;
void Display(char *str)
{
	while(*str!='\0')
	{
		cout<<*str<<endl;
		str++;
	}
	cout<<endl;
}

int main()
{
	char Arr[30];
	
	cout<<"Enter the string:"<<endl;
	cin>>Arr;
	
	Display(Arr);
	
	return 0;
}