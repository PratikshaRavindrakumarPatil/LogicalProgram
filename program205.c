/*

Enter file name:
LB.txt
Marvellous I

*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>


int main()
{
    char Fname[20];
    int fd=0;
	char Data[10];
	
    printf("Enter file name:\n");
    scanf("%s",Fname);
	
	fd=open(Fname,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	lseek(fd,0,0);
	
	
	read(fd,Data,12);
    write(1,Data,12);
	
	return 0;
}