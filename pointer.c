#include<stdio.h>
int main()
{
	int no=10;
	int *p=&no;
	
	printf("size of p=%d\n",sizeof(p));
	
	return 0;
}