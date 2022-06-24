/*

Multiplication is:231
Multiplication is:1.21


*/
#include<iostream>
using namespace std;

template<class T>
T Multiplication(T iNo1,T iNo2)
{
	T iAns=0;
	iAns=iNo1*iNo2;
	return iAns;
}



int main()
{
	int iRet=Multiplication(11,21);
	cout<<"Multiplication is:"<<iRet<<endl;
	
	float fRet=Multiplication(1.1,1.1);
	cout<<"Multiplication is:"<<fRet<<endl;
	return 0;
}