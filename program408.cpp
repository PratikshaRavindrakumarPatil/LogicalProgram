/*
OUTPUT:
Enter the string:JayGanesh
J
a
y
G
a
n
e
s
h

*/

#include<iostream>
using namespace std;



int main()
{
	char Arr[30];
	
	cout<<"Enter the string:";
	cin>>Arr;
	int iCnt=0;
	
	while(Arr[iCnt]!='\0')
	{
		cout<<Arr[iCnt]<<endl;
		iCnt++;
	}
	return 0;
}
