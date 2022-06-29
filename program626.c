#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void Display(char fname[])
{
	int fd=0;
	
	fd=creat(fname,0777);
	
	if(fd==-1)
	{
		printf("Unable to create file\n");
		return;
	}
	
	printf("File is created with fd:%d\n",fd);
}


int main()
{
	char fname[40];
	
	printf("Enter the name of file that you want to create:\n");
	scanf("%s",fname);
	
	Display(fname);
	
	return 0;
}