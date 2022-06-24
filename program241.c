#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>


int main()
{
	char fname[20];
	int fd=0;
	char Data[10]; //Mug aahe
	int iRet=0;
	
	printf("Enter the file name to open:\n");
	scanf("%s",fname);


	fd=open(fname,O_RDWR|O_APPEND);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	printf("file is succesfully opened with FD:%d\n",fd);
		
	
	read(fd,Data,sizeof(Data));
	read(fd,Data,sizeof(Data));
	read(fd,Data,sizeof(Data));
	
	
	return 0;
}




