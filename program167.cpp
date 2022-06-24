/*
Maximum number is:21
Maximum number is:2.3


*/
#include<iostream>
using namespace std;

template<class T>
T Maximum(T iNo1,T iNo2,T iNo3)
{
	if((iNo1>iNo2)&&(iNo1>iNo3))
	{
		return iNo1;
	}
	else if((iNo2>iNo1)&&(iNo2>iNo3))
	{
		return iNo2;
	}
	else if((iNo3>iNo1)&&(iNo3>iNo2))
	{
		return iNo3;
	}	
}



int main()
{
	int iRet=Maximum(11,21,1);
	cout<<"Maximum number is:"<<iRet<<endl;
	
	float fRet=Maximum(1.1,1.1,2.3);
	cout<<"Maximum number is:"<<fRet<<endl;
	return 0;
}