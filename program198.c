/*

Enter the file name that you want to open:
Marvellous11.txt
File is succesfully created with fd:3
Jay Ganesh


*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024


void Display(char Fname[])
{
	int fd=0;
	int iRet=0;
	char Data[FILESIZE];
	fd=open(Fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to create file\n");
		return;
	}
	
	printf("File is succesfully created with fd:%d\n",fd);

	iRet=read(fd,Data,sizeof(Data));
	write(1,Data,iRet);
	
	close(fd);
}


int main()
{
	char Fname[30];
	printf("Enter the file name that you want to open:\n");
	scanf("%s",Fname);
	
	Display(Fname);
	
	return 0;
}