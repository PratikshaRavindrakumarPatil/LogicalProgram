/*

Enter the file name that you want to open:
LB5.txt
File is succesfully opened with fd:3
Jay Ganesh

*/


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
	
	fd=open(fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to open file.\n");
		return;
	}
	
	printf("File is succesfully opened with fd:%d\n",fd);
		
	

	iRet=read(fd,Data,sizeof(Data));
	write(1,Data,iRet);
	
	
}

int main()
{
	char fname[30];
	
	printf("Enter the file name that you want to open:\n");
	scanf("%s",fname);
	
	Display(fname);
	
	return 0;
}