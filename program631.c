#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>


void Display(char fname[])
{
	int fd=0;
	char Data[100];
	int iRet=0;
	
	fd=open(fname,O_RDWR|O_APPEND);
	
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	printf("File is opened with fd:%d\n",fd);
	
	iRet=read(fd,Data,10);
	
	write(1,Data,iRet);
	
	

}


int main()
{
	char fname[40];
	
	printf("Enter the name of file that you want to open:\n");
	scanf("%s",fname);
	
	Display(fname);
	
	return 0;
}