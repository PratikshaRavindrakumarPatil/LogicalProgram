#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
	char fname[20];
	int fd=0; 
	
	printf("Enter the file name to create:\n");
	scanf("%s",fname);
	
	fd=creat(fname,0777);
	if(fd==-1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	
		printf("file is created with FD:%d\n",fd);
	
	return 0;
}




