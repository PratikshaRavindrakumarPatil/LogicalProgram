/*

Enter the file name to open file:
Marvellous5.txt
File is succesfully opened with fd:3

*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>

int main()
{
	char Fname[30];
	int fd=0;
	
	printf("Enter the file name to open file:\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	printf("File is succesfully opened with fd:%d\n",fd);
	
	
	return 0;
}