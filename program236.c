#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>

int main()
{
	char fname[20];
	int fd=0;
	
	printf("Enter the file name to open:\n");
	scanf("%s",fname);

	
	
	fd=open(fname,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	printf("file is succesfully opened with FD:%d\n",fd);
	
	
	return 0;
}




