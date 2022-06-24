/*

Enter the file name that you wnat to create:
Marvellous1
File is succesfully created with fd:3

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>



int main()
{
	char Fname[30];
	int fd=0;
	
	printf("Enter the file name that you wnat to create:\n");
	scanf("%s",Fname);


	fd=creat(Fname,0777);
	
	if(fd==-1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	
	printf("File is succesfully created with fd:%d",fd);
	return 0;
}