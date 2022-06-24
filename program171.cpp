/*

11      11      11      11      11
P       P       P       P       P       P       P
11.11   11.11   11.11   11.11   11.11


*/
#include<iostream>
using namespace std;

template <class T>
void Display(T Value,T No)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=No;iCnt++)
	{
		cout<<Value<<"\t";
	}
	cout<<endl;
	
}

int main()
{
	Display(11,5);
	
	Display('P',7);
	Display(11.11,5);
	return 0;
}