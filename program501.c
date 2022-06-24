/*

Enter the file name that you want to create:
LB5.txt
File is succesfully created with fd:3

*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>


void Display(char fname[])
{
	int fd=0;
	fd=creat(fname,0777);
	
	if(fd==-1)
	{
		printf("Unable to create file.\n");
		return;
	}
	
	printf("File is succesfully created with fd:%d",fd);
	
}


int main()
{
	char fname[30];
	
	printf("Enter the file name that you want to create:\n");
	scanf("%s",fname);
	
	Display(fname);
	
	return 0;
}