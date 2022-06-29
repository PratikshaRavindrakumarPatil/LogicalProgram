#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void Display(char fname[])
{
	int fd=0;
	
	fd=open(fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	printf("File is opened with fd:%d\n",fd);
}


int main()
{
	char fname[40];
	
	printf("Enter the name of file that you want to open:\n");
	scanf("%s",fname);
	
	Display(fname);
	
	return 0;
}